#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    int i, wynik = 1;
    if(n == 0 || n == 1){
        return wynik;
    }
    for(i=2; i <=n; i++){
        wynik *= i;
    }
    return wynik;
}
int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita n:\n");
    scanf("%d", &n);
    printf("%d silnia to %d", n, silnia(n));
    return 0;
}
