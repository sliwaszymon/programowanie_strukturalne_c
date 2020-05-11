#include <stdio.h>
#include <stdlib.h>

int foo(int tab[][100], int n)
{
    int i, j, suma=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<100; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}
int main()
{
    //  PRZYPADEK TESTOWY
    int tab[3][100];
    //  WYŚWIETLAM SUMĘ WSZYSTKICH WARTOŚCI W TABLICY
    printf("%d", foo(tab, 3));
    //  TABLICA ZAWIERA TYLKO WARTOŚCI ŚMIECIOWE (WYNIK MOŻE SIĘ RÓŻNIĆ PRZY KAŻDEJ KOMPILACJI)
    return 0;
}
