#include <stdio.h>
#include <stdlib.h>

int NWD(int x, int y){
	while(x != y){
		if(x>y){
			x=x-y;
		}
		else{
			y=y-x;
		}
	}
	return x;
}
int suma(int n){
	int i, suma = 0;
	for(i=1; i<n; i++){
		if(NWD(i, n) == 1){
			suma += i;
		}
	}
	return suma;
}
int main() {
	int n;
	printf("Podaj nieujemna liczbe calkowita: ");
	scanf("%d", &n);
	printf("Suma liczb mniejszych i wzglednie pierwszych z %d wynosi: %d", n, suma(n));
	return 0;
}
