#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Podaj nieujemna liczbe n\n");
	int n, wynik, i;
	scanf("%d", &n);
	if(n < 0){
		printf("Podana liczba jest ujemna");
	}
	else{
		for(i=1; i<=n; i++){
			if(i*i <= n){
				wynik = i;
			}
		}
		printf("Czesc calkowita pierwiastka z twojej liczby to %d", wynik);
	}
	return 0;
}
