#include <stdio.h>
#include <stdlib.h>

void wyswietl(int m, int n, int k)
{
    int i;
    for(i = m+1; i < k; i++)
    {
        if(i%n==0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    wyswietl(4, 20, 100);
    return 0;
}
