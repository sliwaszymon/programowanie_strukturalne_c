#include <stdio.h>
#include <stdlib.h>
double **alokuj()
{
    double **tab=(double**)malloc(2*sizeof(double*));
    for(int i=0;i<2;i++){
        *(tab+i)=(double*)malloc(2*sizeof(double));
    }
    return tab;
}
double mnoz(double **tab1, double **tab2, int x, int y, int n)
{
    int i;
    double suma = 0;
    for(i=0; i<n; i++)
    {
            suma += *(*(tab1+i)+x) * *(*(tab2+y)+i);
    }
    return suma;
}
void foo(double **tab1, double **tab2, double **tab3, int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            *(*(tab3+i)+j) = mnoz(tab1, tab2, i, j, n);
        }
    }
}
int main()
{

    double **tab1 = alokuj();
    double **tab2 = alokuj();
    double **tab3 = alokuj();
    int i, j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            *(*(tab1+i)+j)=i+j+1;
            *(*(tab2+i)+j)=i+j+2;
        }
    }
    foo(tab1, tab2, tab3, 2);
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%f ", *(*(tab3+i)+j));
        }
        printf("\n");
    }
    return 0;
}
