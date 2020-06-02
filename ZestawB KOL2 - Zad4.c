#include <stdio.h>
#include <stdlib.h>
int **alokuj()
{
    int **tab=(int**)malloc(2*sizeof(int*));
    for(int i=0;i<2;i++){
        *(tab+i)=(int*)malloc(3*sizeof(int));
    }
    return tab;
}
void fun(char *sciezka, int **tab, int n, int m)
{
    int i, j, x=0;
    for(i=0; i<n; i++)
    {
       for(j=0; j<m; j++)
        {
            if(*(*(tab+i)+j) == 0)
            {
                *(sciezka+x) = 'n';
                x++;
            }
            else
            {
                *(sciezka+x) = 'y';
                x++;
            }
        }
    }
    *(sciezka+x) = NULL;
}
int main()
{
    int i, j;
    int **tab = alokuj();
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            *(*(tab+i)+j)=i+j;
        }
    }
    char *sciezka = malloc((2*3+1)*sizeof(char));
    fun(sciezka, tab, 2, 3);
    printf("%s", sciezka);
    return 0;
}
