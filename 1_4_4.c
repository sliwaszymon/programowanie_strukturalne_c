#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita n:\n");
    scanf("%d", &n);
    if(n>0){
        int wynik = 1;
        for(int i=1; i<=n; i++){
            wynik *=i;
        }
        printf("Wynik to: %d", wynik);
    }
    else{
        printf("Liczba n nie moze byc ujemna");
    }
    return 0;
}
