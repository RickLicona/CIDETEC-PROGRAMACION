#include<stdio.h>
#include<stdlib.h> 
#include <unistd.h>  
#include <termios.h>
char getch();
//Estructura agenda, la cual esta compuesta de dos datos tipo char
struct _agenda {
  char nombre[20];
  char telefono[12];
  struct _agenda *siguiente;
};
 

struct _agenda *primero, *ultimo;
 
 //Función que muestra el menu de opciones al usuario
void mostrar_menu() {
  printf("\n\nMenú:\n=====\n\n");
  printf("1.- Añadir elementos\n");
  printf("2.- Mostrar lista\n");
  printf("3.- Salir\n\n");
  printf("Escoge una opción: ");fflush(stdout);
}
 
//En esta función se insertan los datos a la lista
void anadir_elemento() {
  struct _agenda *nuevo;
  
  
  /* reservamos memoria para el nuevo elemento */
  nuevo = (struct _agenda *) malloc (sizeof(struct _agenda));
  if (nuevo==NULL) printf( "No hay memoria disponible!\n");
 
  printf("\nNuevo elemento:\n");
  printf("Nombre: "); fflush(stdout);
  gets(nuevo->nombre);
  printf("Teléfono: "); fflush(stdout);
  gets(nuevo->telefono);
  /* el campo siguiente va a ser NULL por ser el último elemento
     de la lista */
  nuevo->siguiente = NULL;
 
  /* ahora metemos el nuevo elemento en la lista. lo situamos
     al final de la lista */
  /* comprobamos si la lista está vacía. si primero==NULL es que no
     hay ningún elemento en la lista. también vale ultimo==NULL */
  if (primero==NULL) {
    printf( "Primer elemento\n");
    primero = nuevo;
    ultimo = nuevo;
  }
  else {
    /* el que hasta ahora era el último tiene que apuntar al nuevo */
    ultimo->siguiente = nuevo;
    /* hacemos que el nuevo sea ahora el último */
    ultimo = nuevo;
  }
}
 
void mostrar_lista() {
  struct _agenda *auxiliar; /* lo usamos para recorrer la lista */
  int i;
 //Mostramos el ultimo elemento de la lista
  i=0;
  auxiliar = ultimo;
  printf("\nMostrando Ultimo elemento de la lista: \n");
  while (auxiliar!=NULL) {
    printf( "Nombre: %s, Telefono: %s\n",
	    auxiliar->nombre,auxiliar->telefono);
    auxiliar = auxiliar->siguiente;
    i++;
  }
  if (i==0) printf( "\nLa lista está vacía!!\n" );
}
 
int main() {
  char opcion;
 
  primero = (struct _agenda *) NULL;
  ultimo = (struct _agenda *) NULL;
  do {
    mostrar_menu();
    opcion = getch();
    switch ( opcion ) {
    case '1': anadir_elemento();
      break;
    case '2': mostrar_lista(ultimo);
      break;
    case '3': exit( 1 );
    default: printf( "Opción no válida\n" );
      break;
    }
  } while (opcion!='4');




}

//Funcion Getch, se implemento debido a que en sistemas operativos
//basados en UNIX no funciona nativamente
char getch(){
  /*#include <unistd.h>   //_getch*/
  /*#include <termios.h>  //_getch*/
  char buf=0;
  struct termios old={0};
  fflush(stdout);
  if(tcgetattr(0, &old)<0)
    perror("tcsetattr()");
  old.c_lflag&=~ICANON;
  old.c_lflag&=~ECHO;
  old.c_cc[VMIN]=1;
  old.c_cc[VTIME]=0;
  if(tcsetattr(0, TCSANOW, &old)<0)
    perror("tcsetattr ICANON");
  if(read(0,&buf,1)<0)
    perror("read()");
  old.c_lflag|=ICANON;
  old.c_lflag|=ECHO;
  if(tcsetattr(0, TCSADRAIN, &old)<0)
    perror ("tcsetattr ~ICANON");
  printf("%c\n",buf);
  return buf;
}






