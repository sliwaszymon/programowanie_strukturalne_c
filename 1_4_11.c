#include <iostream>
#include <math.h>

int main() {
	printf("Podaj 4 liczby\n");
	int a, b, c, d, x, n, wynik = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("Ktory podpunkt zadania chcesz wykonac - a = 1, b = 2 czy c = 3?\n");
	scanf("%d", &n);
	switch(n)
	{
		case 1:
			for (x = 1; x <= c; x++){
				if((5*(x*x)+a*x+b)<=c){
					wynik = x;
				}
			}
			printf("%d\n", wynik);
			break;
		case 2:
			for (x = 1; x <= c; x++){
				if((5*(x*x)+a*x+b)<c){
					wynik = x;
				}
			}
			printf("%d\n", wynik);
			break;
		case 3:
			for (int x = 1; x <= c; x++){
				if((5*(x*x)+a*x+b)<=c){
					wynik = x;
				}
			}
			printf("%d\n", wynik);
			break;
		default:
			printf("To zadanie nie ma takiego podpunktu!");
	}
	return 0;
}
