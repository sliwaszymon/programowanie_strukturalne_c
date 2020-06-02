#include <stdio.h>
#include <stdlib.h>
int charsize(char napis[])
{
    int i = 0;
    while(napis[i]!=NULL)
    {
        i++;
    }
    return i;
}
void dwanapisy(char *napis1, char *napis2)
{
    int n = charsize(napis1);
    int m = charsize(napis2);
    int i;
    for(i=0; i<m; i++)
    {
        napis1[n+i] = napis2[m-i-1];
    }
}
int main()
{
    char napis1[20] = "alamakota";
    char napis2[20] = "akotmaale";
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    dwanapisy(&napis1, &napis2);
    printf("%s\n", napis1);
    return 0;
}
