#include <stdio.h>
#include <stdlib.h>

int main() {
	float x;
	scanf( "%f", & x );
	printf( "%.2e", x ); //np. dla 14 => 1.40e+001 => nie wiem jak wyœwietliæ 1.40e+1
	return 0;
}
