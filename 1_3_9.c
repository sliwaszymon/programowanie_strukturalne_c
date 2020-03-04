#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x;
	printf("Co chcesz zrobic?\n1. Dodac liczby.\n2. Odjac liczby.\n3. Pomnozyc liczby.\n4. Podzielic liczby.\n5. Podniesc do potegi.\n6. Pierwiastkowac.\n");
	scanf("%d", &x);
	float a, b, wynik;
	switch(x){
		case 1:
			printf("Podaj dwie liczby, ktore chcesz dodac: ");
			scanf("%f%f", &a, &b);
			wynik = a+b;
			printf("Wynikiem tego dodawania jest: %.2f", wynik);
			break;
		case 2:
			printf("Podaj dwie liczby, ktore chcesz odjac: ");
			scanf("%f%f", &a, &b);
			wynik = a-b;
			printf("Wynikiem tego odejmowania jest: %.2f", wynik);
			break;
		case 3:
			printf("Podaj dwie liczby, ktore chcesz pomnozyc: ");
			scanf("%f%f", &a, &b);
			wynik = a*b;
			printf("Wynikiem tego mnozenia jest: %.2f", wynik);
			break;
		case 4:
			printf("Podaj dwie liczby, ktore chcesz podzielic: ");
			scanf("%f%f", &a, &b);
			wynik = a/b;
			printf("Wynikiem tego dzielenia jest: %.2f", wynik);
			break;
		case 5:
			printf("Podaj liczbe oraz potege do ktorej chcesz ja podniesc: ");
			scanf("%f%f", &a, &b);
			wynik = pow(a,b);
			printf("Wynikiem tego dzialania jest: %.2f", wynik);
			break;
		case 6:
			printf("Podaj liczbe oraz stopien pierwiastka: ");
			scanf("%f%f", &a, &b);
			wynik = pow(a,(1/b));
			printf("Wynikiem tego dzialania jest: %.2f", wynik);
			break;
		default:
			printf("Rownanie, ktore wybrales nie znajduje sie na liscie. Wybierz 1, 2, 3, 4, 5 lub 6.");
	}
	return 0;
}
