#include <stdio.h>
#include <stdlib.h>
int **pom(int n, int m)
{
    int **tab = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
}
float foo(int **tab, int n, int m)
{
    int i, j;
    int pom = 0;
    float max = tab[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            pom += tab[i][j];
        }
        if(((float)pom/m > max) || (i==0))
        {
            max = (float)pom/m;
        }
    }
    return max;
}
int main()
{
    //  PRZYPADEK TESTOWY
    //  TWORZĘ TABLICĘ DYNAMICZNĄ I ALOKUJE JEJ MIEJSCE W PAMIĘCI
    int **tab = pom(2, 2);
    //  WYŚWIETLAM WYNIK DZIAŁANIA FUNKCJI
    printf("%.2f",foo(tab, 2, 2));
    //  TABLICA ZAWIERA TYLKO WARTOŚCI ŚMIECIOWE (WYNIK MOŻE SIĘ RÓŻNIĆ PRZY KAŻDEJ KOLEJNEJ KOMPILACJI!)
    //  W TABLICY DYNAMICZNEJ WARTOŚCI PRZYPISUJE SIĘ WEDŁUG SCHEMATU:
    //  *(*tablica+2)=8;            DLA [0 2]
    //  *(*(tablica+2)+1)=-2;       DLA [1 2]
    return 0;
}
