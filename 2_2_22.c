#include <stdio.h>
#include <stdlib.h>

int rek(int n){
	if (n==0 || n==1){
		return 1;
	}
	return rek(n-1) + (2*rek(n-2)) + 3;
}
int main() {
	int n;
	printf("Podaj nieujemna liczbe calkowita: ");
	scanf("%d", &n);
	printf("Wartosc elementu o indeksie %d wynosi: %d", n, rek(n));
	return 0;
}
