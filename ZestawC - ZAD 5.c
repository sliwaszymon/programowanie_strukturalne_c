#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

int sprawdz(int tab1[], int tab2[], int n)
{
    int i, min1 = tab1[0], min2 = tab2[0];
    for(i = 1; i < n; i++)
    {
        if(tab1[i]<min1)
        {
            min1 = tab1[i];
        }
        if(tab2[i]<min2)
        {
            min2 = tab2[i];
        }
    }
    if(min1==min2){
        return 1;
    }
    return 0;
}
int main()
{
    int tab1[] = {2, 4, 8, 16, 32};
    int tab2[] = {2, 6, 18, 54, 162};
    int tab3[] = {3, 6, 12, 24, 48};
    printf("%d\n", sprawdz(tab1, tab2, ROZMIAR));
    printf("%d\n", sprawdz(tab1, tab3, ROZMIAR));
    return 0;
}
