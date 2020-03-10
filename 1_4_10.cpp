#include <iostream>

int main() {
	printf("Podaj nieujemna liczbe n\n");
	int n, wynik;
	scanf("%d", &n);
	if(n < 0){
		printf("Podana liczba jest ujemna");
	}
	else{
		for(int i=1; i<=n; i++){
			if(i*i <= n){
				wynik = i;
			}
		}
		printf("Pierwiastek z twojej liczby to %d", wynik);
	}
	return 0;
}
