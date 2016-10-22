#include<stdio.h>


int main(){


  float lado1, lado2, lado3;
  printf("\n Lado1: ");
  scanf("%f",&lado1);
  
  printf("\n Lado2: ");
  scanf("%f",&lado2);
  printf("\n Lado3: ");
  scanf("%f",&lado3);

  if(lado1 == 0 || lado2 == 0 || lado3 ==0){
      printf("\nDatos inválidos");
      main();
    }

  else{
if((lado1==lado2 && lado2==lado3) || (lado1!=lado2 || lado1!=lado3 || lado2!=lado3) || (lado1==lado2 || lado1==lado3 || lado2==lado3)){

      printf("\nPuede ser triángulo");

    }
    else{
      printf("\nNo Puede ser triángulo");

    }
  }

}
