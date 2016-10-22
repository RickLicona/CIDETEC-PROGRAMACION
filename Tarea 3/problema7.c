#include<stdio.h>
#include<math.h>

int main(){


  int lado1, lado2, diametrocirculo, hipotenusarectangulo;
  printf("\n Datos del Rectángulo");

  printf("\n\n Lado 1 del Rectángulo: ");
  scanf("%d",&lado1);
  printf("\n Lado 2 del Rectángulo: ");
  scanf("%d",&lado2);

  printf("\n Datos del Círculo");

  printf("\n\n Diámetro del Círculo: ");
  scanf("%d",&diametrocirculo);
  
  hipotenusarectangulo = hypot(lado1,lado2);
  
  hipotenusarectangulo>diametrocirculo?printf("\nEl Rectángulo NO cabe dentro del Círculo"):printf("\nEl Rectángulo SI cabe dentro del Círculo\n");


}
