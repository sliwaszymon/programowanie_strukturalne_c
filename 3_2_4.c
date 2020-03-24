#include <stdio.h>
#include <stdlib.h>

void fun(int *x, int *y)
{
	if(*x > *y)
	{
		int temp = *x; 
		*x=*y;
		*y=temp;
	}
}
int main() 
{
	int x = 20, y = 15;
	fun(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
