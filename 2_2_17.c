#include <stdio.h>
#include <stdlib.h>
void wywolania() {
	static int razy=0;
		razy++;
		printf("Funkcje wywolano %d razy\n", razy);
}
int main() {
	wywolania();
	wywolania();
	wywolania();
	return 0;
}
