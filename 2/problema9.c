#include<stdio.h>

int main(){

  float venta1,venta2,venta3,venta4,venta5,sueldonueveporciento,salariofijo;
  float bandera,salariototal;
  printf("Salario Fijo: ");
  scanf("%f",&salariofijo);
  printf("Importe Venta1: ");
  scanf("%f",&venta1);
  printf("Importe Venta2: ");
  scanf("%f",&venta2);
  printf("Importe Venta3: ");
  scanf("%f",&venta3);
  printf("Importe Venta4: ");
  scanf("%f",&venta4);
  printf("Importe Venta5: ");
  scanf("%f",&venta5);

  sueldonueveporciento = ((venta1+venta2+venta3+venta4+venta5)/(5))*(.09);
  bandera = sueldonueveporciento > salariofijo;
  salariototal = sueldonueveporciento + salariofijo;
  printf("\n Salario Total Recibido: %.2f \n Bandera: %.0f",salariototal, bandera);
  




}
