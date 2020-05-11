#include <stdio.h>
#include <stdlib.h>
union Liczba
{
    float wymierna;
    int calkowita;
};
struct Dane
{
    int tp;
    union Liczba zaw;
};
struct Dane wczytaj()
{
    struct Dane dane;
    printf("Jaka liczbe chcesz wpisac: \n1. Calkowita\n2. Wymierna\n");
    scanf("%d", &dane.tp);
    if(dane.tp==1)
    {
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &dane.zaw.calkowita);
    }
    else
    {
        printf("Podaj liczbe wymierna: ");
        scanf("%f", &dane.zaw.wymierna);
    }
    return dane;
}
int main()
{
    struct Dane dane = wczytaj();
    printf("Twoja calkowita: %d\n", dane.zaw.calkowita);
    printf("Twoja wymierna: %.2f", dane.zaw.wymierna);
    return 0;
}
