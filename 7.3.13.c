#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
void *dodaj(struct element *lista, int a)
{
    struct element *wsk = malloc(sizeof(struct element));
    wsk = lista;
    while(wsk->next != NULL)
    {
        wsk = wsk->next;
    }
    wsk->next = malloc(sizeof(struct element));
    wsk = wsk->next;
    wsk->i = a;
    wsk->next = NULL;
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
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista1->next->i = 8;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->i = 4;
    lista1->next->next->next = malloc(sizeof(struct element));
    lista1->next->next->next->i = 11;
    lista1->next->next->next->next = NULL;
    wyswietlListeZGlowa(lista1);
    dodaj(lista1, 12);
    wyswietlListeZGlowa(lista1);
    return 0;
}
