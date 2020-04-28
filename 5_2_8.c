#include <stdio.h>
#include <stdlib.h>
void zamiana(char *napis)
{
    int i;
    for (i=0; napis[i]!=0; i++)
    {
        //Chciałbym zapytać czym różni się w języku C "a" od 'a'
        if((napis[i]>='a') && (napis[i]<='z'))
        {
            napis[i]-=('a'-'A');
        }
    }
}
int main()
{
    char napis[] = "abcdab";
    printf("%s\n", napis);
    zamiana(napis);
    printf("%s\n", napis);
    return 0;
}
