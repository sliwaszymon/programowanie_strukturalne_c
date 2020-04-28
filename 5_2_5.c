#include <stdio.h>
#include <stdlib.h>

void przepisz(char*napis1, char*napis2)
{
    int i;
    for (i=0; napis1[i]!=0; i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0; //koniec napisu
}
void przepiszwchart(wchar_t*napis1, wchar_t*napis2)
{
    int i;
    for (i=0; napis1[i]!=0; i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0; //koniec napisu
}
int main()
{
    char n1[] = "abc";
    char n2[20];
    przepisz(n1, n2);
    printf("%s\n", n2);
    wchar_t wyraz3[]=L"hello";
    wchar_t wyraz4[]=L"dsakjsdlka";
    wprintf(L"%s\n", wyraz4);
    przepiszwchart(wyraz3, wyraz4);
    wprintf(L"%s\n", wyraz4);
    return 0;
}
