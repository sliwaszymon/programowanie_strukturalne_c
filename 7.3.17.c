#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct element
{
    int i;
    struct element *next;
};
void usun(struct element *lista, int a)
{
    struct element *wsk = malloc(sizeof(struct element));
    while((lista->next != NULL)&&(lista->next->i != a))
    {
        lista = lista->next;
    }
    if(lista->next != NULL)
    {
        wsk = lista->next;
        lista->next = wsk->next;
        free(wsk);
    }
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
    usun(lista1, 4);
    wyswietlListeZGlowa(lista1);
    return 0;
}
