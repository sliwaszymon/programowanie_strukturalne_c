#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Podaj liczbe calkowita n wieksza niz 2:\n");
    scanf("%d", &n);
    int wynik = 1;
    if(n>2){
        for(i = 2; i <=n; i+=2){
            wynik*=i;
        }
        printf("%d", wynik);
    }
    else{
        printf("Podana liczba jest mniejsza niz 2.");
    }
    return 0;
}
