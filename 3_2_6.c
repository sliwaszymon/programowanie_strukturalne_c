#include <stdio.h>
#include <stdlib.h>

void fun(int n, int *w)
{
	*w=n;
}
int main() 
{
	int n = 20, w = 15;
	fun(n, &w);
	printf("%d %d", n, w);
	return 0;
}
