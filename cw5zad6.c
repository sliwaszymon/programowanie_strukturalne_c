#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m = 5, n = 10, o = 0;
	int *p1;
	int *p2;
	int *p3;
	p1 = &m;
	p2 = &n;
	o = *p1+*p2;
	p3 = p1-p2; //p1 = 0x0062fe3c , *p1 = 5
	printf("%d\n", &p1);
	printf("%#010x\n", p1);
	p1++;
	p2--; //p2 = 0x0062fe34 , *p2 = 6487592
	printf("%d\n", &p2);
	printf("%#010x\n", p2);
}
