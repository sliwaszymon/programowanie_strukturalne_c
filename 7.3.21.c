#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
void bezwzglednaBG(struct element *lista)
{
    while(lista != NULL)
    {
        lista->i = abs(lista->i);
        lista = lista->next;
    }
}
void bezwzglednaZG(struct element *lista)
{
    while(lista->next != NULL)
    {
        lista = lista->next;
        lista->i = abs(lista->i);
    }
}
void wyswietlListeBezGlowy(struct element *lista)
{
    struct element *temp=lista;
    while(temp!=NULL)
    {
        printf("%i\n", temp->i);
        temp=temp->next;
    }
    printf("\n");
}
void wyswietlListeZGlowa(struct element *lista)
{
    struct element *temp=lista->next;
    while(temp!=NULL)
    {
        printf("%i\n", temp->i);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    // ====Z GLOWA====
    struct element *listazglowa = malloc(sizeof(struct element));
    listazglowa->next = malloc(sizeof(struct element));
    listazglowa->next->i = -8;
    listazglowa->next->next = malloc(sizeof(struct element));
    listazglowa->next->next->i = -4;
    listazglowa->next->next->next = malloc(sizeof(struct element));
    listazglowa->next->next->next->i = 11;
    listazglowa->next->next->next->next = NULL;
    // ====BEZ GLOWY====
    struct element *listabezglowy = malloc(sizeof(struct element));
    listabezglowy->i = 3;
    listabezglowy->next=malloc(sizeof(struct element));
    listabezglowy->next->i = -7;
    listabezglowy->next->next=malloc(sizeof(struct element));
    listabezglowy->next->next->i = -8;
    listabezglowy->next->next->next=NULL;
    // ====WYWOLANIE====
    wyswietlListeBezGlowy(listabezglowy);
    bezwzglednaBG(listabezglowy);
    wyswietlListeBezGlowy(listabezglowy);
    wyswietlListeZGlowa(listazglowa);
    bezwzglednaZG(listazglowa);
    wyswietlListeZGlowa(listazglowa);
    return 0;
}
