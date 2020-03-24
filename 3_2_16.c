#include <stdio.h>
#include <stdlib.h>

void fun(const int *x, int *const y)
{
	*y = *x;
}
int main()
{
	int x = 10, y = 20;
	fun(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
