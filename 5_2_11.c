#include <stdio.h>
#include <stdlib.h>
void wytnijzw(char *napis1, char* napis2)
{
    int i, j;
    int ile[256]={};
    for(i=0; napis2[i]!=0; i++)
    {
        ile[napis2[i]]=1;
    }
    for(i=0, j=0; napis1[i]!=0; i++)
    {
        if(ile[napis1[i]]==0)
        {
            if(j<i)
            {
                napis1[j]=napis1[i];
            }
            j++;
        }
        napis1[j]=0;
    }
}
void wytnijzwwchart(wchar_t *napis1, wchar_t *napis2)
{
    int i, j;
    int ile[256]={};
    for(i=0; napis2[i]!=0; i++)
    {
        ile[napis2[i]]=1;
    }
    for(i=0, j=0; napis1[i]!=0; i++)
    {
        if(ile[napis1[i]]==0)
        {
            if(j<i)
            {
                napis1[j]=napis1[i];
            }
            j++;
        }
        napis1[j]=0;
    }
}
int main()
{
    char napis1[] = "MAMMAmiaHEREiGOagain";
    char napis2[] = "MaMmAHERE";
    wchar_t napis1wchart[] = L"MAMMAmiaHEREiGOagain";
    wchar_t napis2wchart[] = L"MaMmAHERE";
    printf("%s\n", napis1);
    printf("%s\n", napis2);
    wytnijzw(napis1, napis2);
    printf("%s\n", napis1);
    printf("\n");
    wprintf(L"%s\n", napis1wchart);
    wprintf(L"%s\n", napis2wchart);
    wytnijzwwchart(napis1wchart, napis2wchart);
    wprintf(L"%s\n", napis1wchart);
    return 0;
}
