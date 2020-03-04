#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, pomoc;
    printf("Podaj liczbe oraz ilosc jej pierwszych wielokrotnosci ktore chcesz wyswietlic:\n");
    scanf("%d%d", &n, &m);
    for (int i=1;i<=m;i++){
        printf("%d\n", n*i);
    }
    return 0;
}
