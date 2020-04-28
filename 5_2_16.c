#include <stdio.h>
#include <stdlib.h>
void wczytaj(char *napis)
{
    scanf("%s", napis);
}
void wczytajwchart(wchar_t *napis)
{
    wscanf(L"%ls", napis);
}
int main()
{
    char napis[] = "";
    wchar_t napiswchart[] = L"";
    printf("%s\n", napis);
    wczytaj(napis);
    printf("%s\n", napis);
    printf("\n");
    wprintf(L"%s\n", napiswchart);
    wczytajwchart(napiswchart);
    wprintf(L"%s\n", napiswchart);
    return 0;
}
