#include<stdio.h>

int main(){


  float numero1,numero2,numero3,promedio,bandera;

  printf("\n Número 1: ");
  scanf("%f",&numero1);
  printf("\n Número 2: ");
  scanf("%f",&numero2);
  printf("\n Número 3: ");
  scanf("%f",&numero3);
 
  bandera = numero1<0 || numero2<0 || numero3<0;

  promedio = (numero1+numero2+numero3)/(3);
  printf("\n Promedio:%.2f \n",promedio);
  printf("\n Bandera:%.0f \n", bandera);

}
