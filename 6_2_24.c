#include <stdio.h>
#include <stdlib.h>
int **pom(int n, int m){
    int **tab = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        *(tab+i) = malloc(m*sizeof(int));
    }
    return tab;
}
void foo(int **tab, int n, int m)
{
    int i, j, k, pom;
    for(k=0; k<m-1; k++)
    {
        for (i=0; i<n; i++)
        {
            for(j=0; j<m-1; j++)
            {
                pom = *(*(tab+i)+j);
                *(*(tab+i)+j) = *(*(tab+i)+j+1);
                *(*(tab+i)+j+1) = pom;
            }
        }
    }
}
int main()
{
    int **tab = pom(4, 4);
    int i, j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            tab[i][j]=(i+1)*(i+1)*(j+1);
        }
    }
    foo(tab, 4, 4);
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
