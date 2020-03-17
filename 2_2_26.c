#include <stdio.h>
#include <stdlib.h>

int rek(int n){
	if (n <= 2){
		return 1;
	}
	else{
		switch(n%3){
			case 0: return rek(n-1) + rek(n-2);
			case 1: return 5 * rek(n-1) + 4;
			case 2: return rek(n-1);
		}
	}
}
int main() {
	int n;
	printf("Podaj nieujemna liczbe calkowita: ");
	scanf("%d", &n);
	printf("Wartosc elementu o indeksie %d wynosi: %d", n, rek(n));
	return 0;
}
