#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	printf("Wiedzac, ze ax^2+bx+c=0 podaj wspolczynniki a, b i c:\n");
	int a, b, c;
	float x0, x1, x2, delta;
	scanf("%d%d%d", &a, &b, &c);
	delta = (b*b)-4*(a*c);
	if(a!=0){
		if (delta > 0){
			x1 = (-b-sqrt(delta))/2*a;
			x2 = (-b+sqrt(delta))/2*a;
			printf("Rownanie ma dwa rozwiazania: x1 = %.2f i x2 = %.2f", x1, x2);
		}
		else if(delta == 0){
			x0 = -b/(2*a);
			printf("Rownanie ma jedno rozwiazanie: x0 = %.2f", x0);
		}
		else{
			printf("To rownanie nie posiada rozwiazan.");
		}	
	}
	else{
		if(b!=0){
			x0 = -c/b;
			printf("Rownanie ma jedno rozwiazanie x = %.2f", x0);
		}
		else{
			if(c!=0){
				printf("Rownanie nie posiada rozwiazan.");
			}
			else{
				printf("Rownanie posiada nieskonczenie wiele rozwiazan");
			}
		}
	}
	return 0;
}
