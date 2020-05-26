#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};
struct element *dodajk(struct element *Lista, int a)
{
    struct element *wsk = malloc(sizeof(struct element));
    if(Lista == NULL)
    {
        Lista = wsk;
    }
    else
    {
        wsk = Lista;
        while(wsk->next != NULL)
        {
            wsk = wsk->next;
        }
        wsk->next = malloc(sizeof(struct element));
        wsk = wsk->next;
    }
    wsk->i = a;
    wsk->next = NULL;
    return Lista;
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
int main()
{
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->i=3;
    lista1->next=malloc(sizeof(struct element));
    lista1->next->i=7;
    lista1->next->next=malloc(sizeof(struct element));
    lista1->next->next->i=-8;
    lista1->next->next->next=NULL;
    lista1=dodajk(lista1, 12);
    wyswietlListeBezGlowy(lista1);
    return 0;
}
