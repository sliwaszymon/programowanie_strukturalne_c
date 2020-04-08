#include <stdio.h>
#include <stdlib.h>

void funkcja(int *a, int *b)
{
    *a=8;
    *b=7;
    a=b;
}

int main()
{
    int x=5;
    int y=8;
    funkcja(&x,&y);
    return 0;
}
