#include <stdio.h>
#include <stdlib.h>
int ** foo(int n, int m)
{
    int ** tab = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
}
int main()
{
    //vvv minimalny przypadek testowy vvv
    int ** tablica = foo(3,4);
    //vvv rzeczy dodatkowe dla sprawdzenia vvv
    **tablica=0;
    *(*tablica+2)=8; //dla [0 2]
    *(*(tablica+2)+1)=-2; //dla [1 2]
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%d %d] = %d,", i, j, *(*(tablica+i)+j));
            printf("%p\n", *(tablica+i)+j);
        }
    }
    return 0;
}
