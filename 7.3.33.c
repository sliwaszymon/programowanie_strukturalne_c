#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
struct element *przesunBG(struct element *lista)
{
    if((lista == NULL)||(lista->next == NULL))
    {
        return lista;
    }
    struct element *pom = malloc(sizeof(struct element));
    pom = lista;
    while(lista->next->next != NULL)
    {
        lista = lista->next;
    }
    lista->next->next = pom;
    pom = lista->next;
    lista->next = NULL;
    return pom;
}
struct element *przesunZG(struct element *lista)
{
    if((lista->next == NULL)||(lista->next->next == NULL))
    {
        return lista;
    }
    struct element *pom = malloc(sizeof(struct element));
    pom = lista;
    while(lista->next->next != NULL)
    {
        lista = lista->next;
    }
    lista->next->next = pom;
    pom = lista->next;
    lista->next = NULL;
    return pom;
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
    listazglowa->next->i = 8;
    listazglowa->next->next = malloc(sizeof(struct element));
    listazglowa->next->next->i = -4;
    listazglowa->next->next->next = malloc(sizeof(struct element));
    listazglowa->next->next->next->i = -11;
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
    struct element *listabezglowy2 = przesunBG(listabezglowy);
    wyswietlListeBezGlowy(listabezglowy2);
    printf("\n\n");
    wyswietlListeZGlowa(listazglowa);
    struct element *listazglowa2 = przesunZG(listazglowa);
    wyswietlListeZGlowa(listazglowa2);
    return 0;
}
