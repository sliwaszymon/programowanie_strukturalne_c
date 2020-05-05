#include <stdio.h>
#include <stdlib.h>
int *** foo(int n, int m, int k)
{
    int ***tab=malloc(n*sizeof(int**));
    int i, j;
    for(i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int*));
        for(j=0; j<m; j++)
        {
            *(*(tab+i)+j) = malloc(k*sizeof(int));
        }
    }
    return tab;
}
void foo2(int *** tab, int n, int m, int k)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            free(*(*(tab+i)+j));
        }
        free(*(tab+i));
    }
    free(tab);
}
int main()
{
    int *** tablica = foo(3,4,5);
    ***tablica = 8;
    *(*(*(tablica+1)+2)+0) = 20;
    *(*(*(tablica+1)+1)+4) = -99;
    int i, j, k;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            for(k=0; k<5; k++)
            {
                printf("[%d %d %d] = %d,", i, j, k, *(*(*(tablica+i)+j)+k));
                printf("%p\n",*(*(tablica+i)+j)+k);
            }
        }
    }
    foo2(tablica, 3, 4, 5);
    return 0;
}
