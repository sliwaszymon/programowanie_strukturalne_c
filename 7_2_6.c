#include <stdio.h>
#include <stdlib.h>
struct punktn
{
    int wymiar;
    float *tabn;
};
void wypiszPunktn(struct punktn parametr)
{
    printf("Wymiar:%d\n", parametr.wymiar);
    int i;
    for(i=0; i<parametr.wymiar; i++)
    {
        printf("%f ", parametr.tabn[i]);
    }
    printf("\n");
}
void wypiszTablicePunktn(struct punktn tablica[], int rozmiarTablicy)
{
    int i;
    for(i=0; i<rozmiarTablicy; i++)
    {
        wypiszPunktn(tablica[i]);
    }
    printf("koniec tablicy\n");
}
void przepisz(struct punktn tab1[], struct punktn tab2[], int rozmiarTablicy)
{
    int i, j;
    for(i=0; i<rozmiarTablicy; i++)
    {
        tab2[i].wymiar = tab1[i].wymiar;
        tab2[i].tabn = malloc(tab1[i].wymiar*sizeof(float));
        for(j=0; j<tab1[i].wymiar; j++)
        {
            tab2[i].tabn[j] = tab1[i].tabn[j];
        }
    }
}
int main()
{
    struct punktn p1 = {.wymiar=3};
    p1.tabn = malloc(3*sizeof(float));
    p1.tabn[0] = 3.2;
    p1.tabn[1] = 4.2;
    p1.tabn[2] = 8.7;
    struct punktn p2 = {.wymiar=4};
    p2.tabn = malloc(4*sizeof(float));
    p2.tabn[0] = -3.2;
    p2.tabn[1] = 7.3;
    p2.tabn[2] = 1.1;
    p2.tabn[3] = 0.4;
    struct punktn p3 = {.wymiar=2};
    p3.tabn = malloc(2*sizeof(float));
    p3.tabn[0] = 3.12;
    p3.tabn[1] = 4.12;
    struct punktn p4 = {.wymiar=3};
    p4.tabn = malloc(3*sizeof(float));
    p4.tabn[0] = 3.22;
    p4.tabn[1] = 24.2;
    p4.tabn[2] = 8.27;
    struct punktn tablicaPunktow[4] = {p1, p2, p3, p4};
    struct punktn tablicaPunktow2[4] = {p1, p1, p1, p1};;
    wypiszTablicePunktn(tablicaPunktow, 4);
    wypiszTablicePunktn(tablicaPunktow2, 4);
    przepisz(tablicaPunktow, tablicaPunktow2, 4);
    printf("-----PO PRZEPISANIU-----\n");
    wypiszTablicePunktn(tablicaPunktow, 4);
    wypiszTablicePunktn(tablicaPunktow2, 4);
    return 0;
}
