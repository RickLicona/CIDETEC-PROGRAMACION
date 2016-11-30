#include<stdio.h>
#include<stdlib.h>
typedef struct s 
{
int value;
struct s *next; //puntero al próximo elemento
} 
Node_List;
Node_List *first = NULL;
Node_List *new_element()
;
Node_List *find(int)
;
Node_List *get(int)
;
Node_List *new_element()
{
Node_List *node = (Node_List *)malloc(sizeof(Node_List));
return node;
}

//Aqui insertamos los valores dados por el usuario
void insert(int val)
{
Node_List * node;
//En caso de que un valor dado por el usuario ya se encuentre en la lista, el
// usuario los insertará de nuevo
node = find(val);
if (node != NULL){
printf("Ya esta el elemento!!");
main();
}
Node_List *p, *q, *n;
p = first;
while (p != NULL)
{
q = p;
p = p->next;
}
n = new_element();
n->value = val;
n->next = NULL;
q->next = n;
}

//Esta función nos ayudará a validar que los datos insertados por el usuario no
//sean repetidos
Node_List *find(int val)
{
Node_List *p = NULL, *q = NULL;
p = first;
while (p != NULL && p->value != val)
{
q = p;
p = p->next;
}
return p;
}



int main()
{

first = new_element(); // se asigna la cabecera de la lista
first->value = 1;
first->next = NULL; // no se asigna ningún sucesor

int elementos,valores;
printf("\n Cuántos elementos vas a ingresar?: ");
scanf("%d",&elementos);

//En este ciclo for el usuario ingresa los valores
for (int i = 0; i < elementos; i++){

printf("Inserte el elemento %d: ",i);
scanf("%d",&valores);
insert(valores);

}

}





