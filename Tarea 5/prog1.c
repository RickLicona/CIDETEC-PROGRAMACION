#include<stdio.h>

int main(){
  int cantidad;

  printf("\n Cuántos números vas a ingresar?: ");
  scanf("%d",&cantidad);
  //Declaramos un arreglo con un tamaño dado por el usuario
  int posicion[cantidad];
  int acumulador = 0;
  //El ciclo for nos ayudará a obtener los valores del usuario
  for(int i=0;i<cantidad;i++){

    printf("\n Ingresa el numero[posicion %d]: ",i);
    scanf("%d",&posicion[i]);
	//Con un if validamos las posiciones impares del usuario, para
	//posteriormente sumar sus contenidos
    if((i%2) != 0){
      acumulador+=posicion[i];

    }
  }
  printf("\n Suma de impares es igual a: %d \n ",acumulador);
}
