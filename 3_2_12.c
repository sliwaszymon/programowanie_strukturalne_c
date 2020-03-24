#include <stdio.h>
#include <stdlib.h>

int* fun(int n){
	return malloc(n*sizeof(double));
}

int main() {
	printf("%#010x", fun(5));
	return 0;
}
