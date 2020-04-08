#include <stdio.h>
#include <stdlib.h>

int fun(int n, int m)
{
    if(m==0)
    {
        return 2;
    }
    else if(n==0)
    {
        return -1;
    }
    return fun(n-1, m)+fun(n, m-1)+7;
}

int main()
{
    printf("%d\n", fun(0,4));
    printf("%d\n", fun(2,2));
    printf("%d\n", fun(5,2));
    return 0;
}
