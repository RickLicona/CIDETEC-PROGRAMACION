#include<stdio.h>
int Mayor(int n1,int n2, int n3);
int Menor(int n1,int n2, int n3);
int Medio(int mayor, int menor,int n1,int n2, int n3);
int n1,n2,n3,mayor,menor,medio;
int main(){

  printf("\nIntroduce 3 numeros seguidos:\n");
  scanf("%d %d %d",&n1,&n2,&n3);
  mayor = Mayor(n1,n2,n3);
  menor = Menor(n1,n2,n3);
  medio =Medio(mayor,menor,n1,n2,n3);
  printf("\nSegundo Mayor: %d \n",medio);
}

int Mayor(int n1,int n2, int n3){
  mayor = n1;
  if(n2>mayor)
    mayor=n2;
  if(n3>mayor)
    mayor=n3;
  return mayor;
}
int Menor(int n1,int n2, int n3){
  menor = n1;
  if(n2<menor)
    menor=n2;
  if(n3<menor)
    menor=n3;
  return menor;
}
int Medio(int mayor, int menor,int n1,int n2, int n3){
  
  if(mayor>n1 && n1>menor)
    medio=n1;
  if(mayor>n2 && n2>menor)
    medio=n2;
  if(mayor>n3 && n3>menor)
    medio=n3;
  return medio;

}
