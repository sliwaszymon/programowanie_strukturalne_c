#include <stdio.h>
#include <stdlib.h>
void wytnij(char *napis, int n, int m)
{
    int i, j;
    for(i=0; napis[i]!=0; i++)
    {
        if (i+1>m)
        {
            for (j=0; j+m< i; j++)
            {
                napis[n+j]=napis[j+m+1];
            }
        }
        else if ((n<i) && (i+1<=m))
        {
            napis[n]=0;
        }
    }
}
void wytnijwchart(wchar_t *napis, int n, int m)
{
    int i, j;
    for(i=0; napis[i]!=0; i++)
    {
        if (i+1>m)
        {
            for (j=0; j+m< i; j++)
            {
                napis[n+j]=napis[j+m+1];
            }
        }
        else if ((n<i) && (i+1<=m))
        {
            napis[n]=0;
        }
    }
}
int main()
{
    char napis[] = "MAMMAmiaHEREiGOagain";
    wchar_t napiswchart[] = L"MAMMAmiaHEREiGOagain";
    printf("%s\n", napis);
    wytnij(napis, 8, 20);
    printf("%s\n", napis);
    printf("\n");
    wprintf(L"%s\n", napiswchart);
    wytnijwchart(napiswchart, 8, 20);
    wprintf(L"%s\n", napiswchart);
    return 0;
}
