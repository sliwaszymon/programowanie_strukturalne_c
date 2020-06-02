#include <stdio.h>
#include <stdlib.h>
struct element{
    double x;
    struct element * next;
};
double suma(struct element *lista)
{
    struct element *temp = lista->next;
    double suma = temp->x;
    while(temp->next != NULL)
    {
        temp=temp->next;
        suma += temp->x;
    }
    return suma;
}
int porownaj(struct element *lista1, struct element *lista2)
{
    double a = suma(lista1);
    double b = suma(lista2);
    if (fabs(a-b) <= 0.001)
    {
        return 1;
    }
    return 0;
}
int main()
{
    // LISTA Z GLOWA 1
    struct element *lista1 = malloc(sizeof(struct element));
    lista1->next = malloc(sizeof(struct element));
    lista1->next->x = 8.2;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->x = 1.1;
    lista1->next->next->next = malloc(sizeof(struct element));
    lista1->next->next->next->x = 11.7;
    lista1->next->next->next->next = malloc(sizeof(struct element));
    lista1->next->next->next->next->x = 7.4;
    lista1->next->next->next->next->next = NULL;
    // LISTA Z GLOWA 2
    struct element *lista2 = malloc(sizeof(struct element));
    lista2->next = malloc(sizeof(struct element));
    lista2->next->x = 8.3;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->x = 1.2;
    lista2->next->next->next = malloc(sizeof(struct element));
    lista2->next->next->next->x = 11.8;
    lista2->next->next->next->next = malloc(sizeof(struct element));
    lista2->next->next->next->next->x = 7.1;
    lista2->next->next->next->next->next = NULL;
    printf("%d", porownaj(lista1, lista2));
    return 0;
}
