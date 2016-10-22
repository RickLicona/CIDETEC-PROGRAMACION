#include<stdio.h>

void NumerosGua(int nume,int c);

int main(){
  int a,b,divisionsuma;
  int acarreo,totalacarreos=0,numerocifras;
  int permitido = 10;
  int acarreosuma = 0,suma,numeroaguardar;
  int *actual;
  printf("\n\nCuántas cifras tienen en total tus dos numeros: ");
  scanf("%d",&numerocifras);

  divisionsuma = (numerocifras/2);
  if(numerocifras>permitido){
    printf("\nLas cifras deben ser menor a %d...",permitido);
    main();
}
  else{




    printf("\n Sintaxis Suma: \n");
    printf("...a5 a4 a3 a2 a1\n");
    printf("+ \n");
    printf("...b5 b4 b3 b2 b1");
    printf("\n__________________\n");
    printf("...c5 c4 c3 c2 c1");
    printf("\n\nA continuación ingrese las cifras de derecha a izquierda");
    for(int i=0;i<divisionsuma;i++){
      printf("\n\nValor de a(%d): ",i+1);
      scanf("%d",&a);
  
      printf("\nValor de b(%d): ",i+1);
      scanf("%d",&b);
      
     suma = a+b+acarreosuma;
     numeroaguardar = (suma%10);
     acarreosuma = (suma/10);
     NumerosGua(numeroaguardar,i);  
     actual = &numeroaguardar;
     acarreo = a+b>=10;
      totalacarreos+=acarreo;

      if((i+1) == (divisionsuma)){

        a=0;
        b=0;
        suma = a+b+acarreosuma;
        numeroaguardar = (suma%10);
        acarreosuma = (suma/10);
	NumerosGua(numeroaguardar,i+1);
      }     

	    }


    }

  printf("\n \t ACARREOS TOTALES: %d \n",totalacarreos);
  printf("\n \t NOTA: El resultado de la suma se lee de abajo hacia arriba...\n");

}  


void NumerosGua(int nume,int c){

    printf("\n \t RESULTADO SUMA c(%d) = %d ",c+1,nume);

  
}



