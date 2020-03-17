#include <stdio.h>
#include <stdlib.h>

int NWD(int n, int m) {
	if (n == m){
		return m;
	}
	else if(n > m){
		return NWD(n%m, m);
	}
	else{
		return NWD(m%n, n);
	}
}
int main() {
	int n, m;
	printf("Podaj dwie dodatnie liczby calkowite: ");
	scanf("%d%d", &n, &m);
	printf("Najwiekszym wspolnym dzielnikiem liczb %d i %d jest %d", n, m, NWD(n,m));
	return 0;
}
