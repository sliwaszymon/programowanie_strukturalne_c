#include <stdio.h>
#include <stdlib.h>
union kolejne_bajty
{
    unsigned int zm;
    unsigned char tab[4];
};
int main()
{
    //  printf("%d", sizeof(unsigned int));  -> 4
    union kolejne_bajty zmienna;
    printf("%d\n", &zmienna.zm);
    printf("--KOLEJNE BAJTY--\n");
    printf("%d\n", &zmienna.tab[0]);
    printf("%d\n", &zmienna.tab[1]);
    printf("%d\n", &zmienna.tab[2]);
    printf("%d\n", &zmienna.tab[3]);
    return 0;
}
