#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float rek(int n, float random) {
	if(n==1){
		return random;
	}
	return 1-pow(rek(n-1, random),2);
}

int main() {
	srand((unsigned)time(NULL));
	float random = (float)rand()/RAND_MAX;
	int n, i = 1;
	printf("Podaj ilosc liczb do wypisania: ");
	scanf("%d", &n);
	for(i; i<=n; i++){
		printf("Liczba %d to %f\n", i, rek(i, random));
	}
	return 0;
}
