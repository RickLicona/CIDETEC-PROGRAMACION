#include<stdio.h>

int Obtenerfactorial(int n);


int main(){

  
  int acumulador=1,factorialpotencia;
  int potenciaPoli, numvariables, variable;
  int coeficiente;
  
  //Pedimos los datos al usuario, en caso de que estos sean mayores a 13, se regresará a la función main
  //hasta que los datos sean menores a 13
  printf("\n Introduce la Potencia Polinomial (<13): ");
  scanf("%d",&potenciaPoli);
  if(potenciaPoli>13)
    main();
  printf("\n Introduce el número de variables (<13); ");
  scanf("%d",&numvariables);
  if(numvariables>13)
    main();
  
  factorialpotencia = Obtenerfactorial(potenciaPoli);

//En este for recolectamos el número de datos y a cada uno de ellos le obtenemos su factorial

  for(int i=0;i<numvariables;i++){

    printf("\n Introduce la variable %d: ",i+1);
    scanf("%d",&variable);
    
    //este acumulador multiplicará los factoriales de los números dados por el usuario
    acumulador*=Obtenerfactorial(variable);
 
  }
  //Para obtener el coeficiente monomial dividimos el factorial de la variable potenciaPoli entre el acumulador
  //que multiplica los factoriales de los valores dados por el usuario.
  coeficiente = (potenciaPoli)/(acumulador);
  printf("\n El coeficiente monomial es; %d",coeficiente);
  

}



//Función que obtiene el factorial
int Obtenerfactorial(int n){

  int fact=1;
  for (int a = 1; a <= n; a++)
    {    fact = fact * a;
    }

  return fact;

}
