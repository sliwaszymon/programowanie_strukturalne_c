#include <stdio.h>
#include <stdlib.h>
void wyczyscchar(char napis[])
{
    napis[0] = 0;
}
void wyczyscchar2(char *napis)
{
    napis[0] = NULL;
}
void wyczyscwchart(wchar_t *napis)
{
    napis[0] = NULL;
}
int main()
{
    char tekst[] = "abcdab";
    wyczyscchar(tekst);
    printf("%s a", tekst);
    wchar_t tekst2[] = L"alamakota";
    wyczyscwchart(tekst2);
    wprintf(L"%s a", tekst2);
    return 0;
}
