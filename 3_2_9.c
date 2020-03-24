#include <stdio.h>
#include <stdlib.h>

int* alokacja()
{
	return malloc(sizeof(int));
}
int main() 
{
	printf("%#010x", alokacja());
	return 0;
}
