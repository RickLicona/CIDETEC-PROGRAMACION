#include<stdio.h>


int main(){
  //Tamaño de la Matriz NxM(Filas por Columnas)
  int n,m;
  printf("\n Tamaño de la Matriz: ");
  printf("\n N: ");
  scanf("%d",&n);
  printf("\n M: ");
  scanf("%d",&m);

	//Asignamos el tamaño de la matriz a un arreglo bidimensional
  int matriz[n][m];

	// En este ciclo for le pedimos al usuario los valores que tendrá la matriz
  for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
      printf("\n Elemento [%d][%d]: ",i,j);
      scanf("%d",&matriz[i][j]);

     

    }

  }

	// Mostramos la matriz original donde i=n y j=m
  printf("\n\n Matriz: ");
  for(int i=0;i<n;i++){
    printf("\n");
    for(int j=0;j<m;j++){
   
   
      printf("[%d]\t",matriz[i][j]);

    }

  }
	// Mostramos la matriz transpuesta donde i=m y j=n, para imprimir la matriz Transpuesta
	// lo hacemos con matriz[j][i], ya que se cambian las filas por las columnas

  printf("\n\n Matriz Transpuesta: ");
  for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++){


      printf("[%d]\t",matriz[j][i]);










    }

  }



}//main
