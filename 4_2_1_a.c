#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void fun(int n, int *tab)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab[i] = 0;
	}
}
void desc(int n, int tab[])
{
	int i;
	for(i = 0; i<n; i++)
	{
		printf("%d\n", tab[i]);
	}
}
int main()
{
	int tab[] = {2, 4, 6, 8, 10};
	fun(ROZMIAR, tab);
	desc(ROZMIAR, tab);
	return 0;
}
