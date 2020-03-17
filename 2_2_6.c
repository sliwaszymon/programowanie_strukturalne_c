#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int n, int m){
	if (n!=0 || m!=0){
		if(m==0){
			return 1;
		}
		else{
			return pow(n,m);
		}
	}
}
int main() {
	int n, m;
	printf("Podaj dwie nieujemne liczby calkowite: ");
	scanf("%d%d", &n, &m);
	printf("%d do potegi %d to %d", n, m, potega(n, m));
	return 0;
}
