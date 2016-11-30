#include<stdio.h>
#include<stdlib.h>
//Creado por Jesus Ricardo Licona Muñoz
//CIDETEC PROGRAMACION

void Suma(int *a,int *b,int *c,int n);
void LiberarMemoria();

int tamanovectores;
int *a,*b,*c;

int main(){

  printf("\n Ci = Ai + Bi");
  printf("\n Introduce el tamaño del  Vector A y B: ");
  scanf("%d",&tamanovectores);
  //Declaramos tres matrices con el tamaño asignado por el usuario
  int matrizAvalores[tamanovectores];
  int matrizBvalores[tamanovectores];
  int matrizCvalores[tamanovectores];
  a = malloc(sizeof(matrizAvalores[tamanovectores]));
  b = malloc(sizeof(matrizBvalores[tamanovectores]));
  c = malloc(sizeof(matrizCvalores[tamanovectores]));  
	//Utilizamos un operador ternario para validar la asignación correcta de memoria
  a!=NULL && b!=NULL && c!=NULL?printf("\n Asignación de memoria correcta \n"):printf("\n Asignación de memoria incorrecta \n");
 	//Aqui el usuario ingresa los valores de los vectores A y B
  for(int i=0;i<tamanovectores;i++){
    printf("\n Ingresa el valor del Vector A[%d]: ",i);
    scanf("%d",&a[i]);
    printf("\n Ingresa el valor del Vector B[%d]: ",i);
    scanf("%d",&b[i]);
  }

  //Se invoca la función Suma la cual se le manda por parametros a a,b,c y el
  //tamaño de los vectores
  Suma(a,b,c,tamanovectores);


}

void Suma(int *a,int *b,int *c,int n){
	//Con un ciclo accedemos a las posiciones de los vectores A y B
	//para posteriormente asignar la suma a C
  for(int j=0;j<n;j++){
    c[j] = a[j]+b[j];
    printf("\n Resultado suma: ");
    printf("\n C[%d] = %d",j,c[j]);


  }
	//Invocamos a la función LiberarMemoria() para liberar memoria, esto es con fines
	//de buenas prácticas
  LiberarMemoria();


}


void LiberarMemoria(){

  free(a);
  free(b);
  free(c);
  printf("\n\n Liberación de Memoria exitosa!! \n");

}


