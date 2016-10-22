#include<stdio.h>

int  main(){

  float linea1, linea2, linea3, promedioprod, preciouni, costo, ganancia;
  float porcentajenorma, porcentajepromedio,normadeproduccion;

  printf("Norma de producción: ");
  scanf("%f",&normadeproduccion);

  printf("\n Producción Linea 1: ");
  scanf("%f",&linea1);
  printf("\n Producción Linea 2: ");
  scanf("%f",&linea2);
  printf("\n Producción Linea 3: ");
  scanf("%f",&linea3);
  printf("\n Costo del producto: ");
  scanf("%f",&costo);
  printf("\n Precio  Unitario: ");
  scanf("%f",&preciouni);
  
  

  promedioprod = (linea1+linea2+linea3)/(3);
  ganancia = ((linea1+linea2+linea3)*costo)-((linea1+linea2+linea3)*preciouni);
  
  porcentajenorma = (promedioprod*100)/(normadeproduccion);


  printf("\n Promedio de producción: %.1f ",promedioprod);
  printf("\n Ganancia: %.1f ",ganancia);
  printf("\n Porcentaje de la producción promedio con respecto a la norma: %.1f %c \n",porcentajenorma,'%');

}
