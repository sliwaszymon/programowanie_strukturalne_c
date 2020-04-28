#include <stdio.h>
#include <stdlib.h>
char *godzina(int godz, int min, int sek)
{
    char *pelnagodz = malloc(9*sizeof(char));
    sprintf(pelnagodz, "%02d:%02d:%02d", godz, min, sek);
    return pelnagodz;
}
wchar_t *godzinawchart(int godz, int min, int sek)
{
    char *pelnagodz = malloc(9*sizeof(wchar_t));
    swprintf(pelnagodz, L"%02d:%02d:%02d", godz, min, sek);
    return pelnagodz;
}
int main()
{
    printf("%s\n", godzina(22, 29, 39));
    wprintf(L"%s\n", godzinawchart(21, 40, 00));
    return 0;
}
