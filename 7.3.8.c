#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element *next;
};
struct element *usunw(struct element *Lista, struct element *elem)
{
    struct element *wsk = malloc(sizeof(struct element));
    struct element *wsk2 = malloc(sizeof(struct element));
    if(Lista == NULL)
    {
        return Lista;
    }
    wsk = Lista;
    if(Lista == elem)
    {
        Lista=Lista->next;
        free(wsk);
        return Lista;
    }
    while((wsk->next != NULL)&&(wsk->next != elem))
    {
        wsk = wsk->next;
    }
    if(wsk->next != NULL)
    {
        wsk2 = wsk->next;
        wsk->next = wsk2->next;
        free(wsk2);
    }
    return wsk;
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
    struct element *elem = malloc(sizeof(struct element));
    elem->i=3;
    elem->next=malloc(sizeof(struct element));
    elem->next->i=7;
    elem->next->next=NULL;
    lista1 = usunw(lista1, elem);
    wyswietlListeBezGlowy(lista1);
    return 0;
}
