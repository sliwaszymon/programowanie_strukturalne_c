#include <stdio.h>
#include <stdlib.h>

int foo(int tab[][100][100])
{
    int i, j, k, suma=0;
    for(i=0; i<100; i++)
    {
        for(j=0; j<100; j++)
        {
            for(k=0; k<100; k++)
            {
                suma += tab[i][j][k];
            }
        }
    }
    return suma;
}
int main()
{
    //  PRZYPADEK TESTOWY
    //  TWORZĘ TABLICĘ
    int tab[100][100][100];
    //  WYŚWIETLAM SUMĘ WSZYSTKICH WARTOŚCI W TABLICY
    printf("%d", foo(tab));
    //  TABLICA ZAWIERA TYLKO WARTOŚCI ŚMIECIOWE, WIĘC REZULTAT BĘDZIE SIĘ RÓŻNIŁ NA RÓŻNYCH KOMPUTERACH
    return 0;
}
