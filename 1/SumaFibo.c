#include<stdio.h>
//include<conio.h>

int main(){


  int elemento1, elemento2, elemento3, elemento4, elemento5;
  int elemento6, elemento7, elemento8, elemento9, elemento10;

  int sumaelementos;

  elemento1 = 0;
  elemento2 = 1;
  elemento3 = elemento1 + elemento2;
  elemento4 = elemento2 + elemento3;
  elemento5 = elemento3 + elemento4;
  elemento6 = elemento4 + elemento5;
  elemento7 = elemento5 + elemento6;
  elemento8 = elemento6 + elemento7;
  elemento9 = elemento7 + elemento8;
  elemento10 = elemento8 + elemento9;
  sumaelementos = elemento1 + elemento2 + elemento3 + elemento4 + elemento5 + elemento6 + elemento7 + elemento8 + elemento9 + elemento10;


  printf("\n La Suma de los primeros 10 elementos es igual a: %d \n",sumaelementos);


}
