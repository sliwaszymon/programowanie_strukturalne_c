#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x;
	printf("W jaki sposob chcesz obliczyc pole trojkata?\n1. Znam dlugosc podstawy i wysokosc.\n2. Znam dlugosci 3 bokow.\nWybieram: ");
	scanf("%d", &x);
	if (x == 1) {
		float a, h, wynik;
		printf("Podaj dlugosc podstawy i wysokosc: ");
		scanf("%f%f", &a, &h);
		wynik = (a*h)/2;
		printf("Pole tego trojkata to: %.2f", wynik);
	}
	else if(x == 2){
		float a, b, c, p, wynik;
		printf("Podaj dlugosci 3 bokow: ");
		scanf("%f%f%f", &a, &b, &c);
		p = (a+b+c)/2;
		wynik = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Pole tego trojkata to: %.2f", wynik);
	}
	else{
		printf("Wybrany przez Ciebie sposob rozwiazania nie istnieje na liscie. Wybierz 1 lub 2.");
	}	
	return 0;
}
