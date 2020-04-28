#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int i = 0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
int dlugosc2(char*napis)
{
    int i=0;
    while(*(napis+i)!=0)
    {
        i++;
    }
    return i;
}
int dlugosc3(char*napis)
{
    int i=0;
    for(i=0; napis[i]!=0; i++)
    {

    }
    return i;
}
int dlugosc4(char*napis)
{
    if(*napis==0)
    {
        return 0;
    }
    return dlugosc4(++napis)+1;
}
int dlugoscwchart(wchar_t*napis)
{
    int i = 0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}
int main()
{
    char*nap = "asdasdsa";
    char nap2[10]="abc";
    printf("%d\n", dlugosc3(nap));
    printf("%d\n", dlugosc4(nap2));
    wchar_t*nap3 = L"aksjhdajksdhaj";
    printf("%d", dlugoscwchart(nap3));
    return 0;
}
