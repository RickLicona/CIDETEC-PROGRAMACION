#include <stdio.h>



 

void Resolverhanoi(int n,int com, int aux, int fin);

 

int main(){

 

 

  char torrea='1', torreb='2',torrec='3';

  int discos;

 
 //Le pedimos el numero de discos al usuario

  printf("\nIntroduce Número de discos: ");

  scanf("%d",&discos);



 

  printf("\n\nLos movimientos a ejecutar son: \n");

	//Invocamos la función recursiva Resolverhanoi, el cual tiene como parametros el 
	//número de discos y las tres torres con el que esta compuesto el juego
  Resolverhanoi(discos,torrea,torreb,torrec);

}

 

void Resolverhanoi(int n,int com, int aux, int fin){

 
	//En caso de que el numero de discos sea igual a 1 entonces solamente mostraremos 
	//1 movimiento (1-->3)
  if(n==1){

    printf("%c->%c",com,fin);

  }

  else{
	//Invocamos la función Resolverhanoi de manera recursiva hasta llegar a la solución
	//óptima 
    Resolverhanoi(n-1,com,fin,aux);

    printf("\n%c->%c \n",com,fin);

       Resolverhanoi(n-1,aux,com,fin);

  }


}
