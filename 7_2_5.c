#include <stdio.h>
#include <stdlib.h>
struct punkt10
{
    int wym[10];
};
void foo(struct punkt10 tab1[], struct punkt10 tab2[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        tab2[i] = tab1[i];
    }
}
int main()
{
    int i;
    struct punkt10 tab1;
    for(i=0; i<10; i++)
    {
        tab1.wym[i] = i+1;
    }
    struct punkt10 tab2;
    for(i=0; i<10; i++)
    {
        tab2.wym[i] = 2*(i+1);
    }
    for(i=0; i<10; i++)
    {
        printf("%d\n", tab2.wym[i]);
    }
    foo(&tab1, &tab2, 10);
    for(i=0; i<10; i++)
    {
        printf("%d\n", tab2.wym[i]);
    }
    return 0;
}
