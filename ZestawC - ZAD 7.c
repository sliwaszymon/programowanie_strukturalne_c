#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void sortuj(double *tab, int n)
{
    //algorytm sortowanie bąbelkowego
    int i, j;
    double temp;
	for (i = 0; i<n-1; i++)
        {
            for (j=0; j<n-1-i; j++)
            {
                if (tab[j] > tab[j+1])
                {
                    temp = tab[j+1];
                    tab[j+1] = tab[j];
                    tab[j] = temp;
                }
            }
        }
}
void wypisz(double tab[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%f ", tab[i]);
    }
}
int main()
{
    double tab[] = {2.0, 8.1, 1.4, 3.7, 5.25};
    wypisz(tab, ROZMIAR);
    printf("\n");
    sortuj(tab, ROZMIAR);
    wypisz(tab, ROZMIAR);
    return 0;
}
