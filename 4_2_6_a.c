#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void zamien(int n, int tab1[], int *tab2)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab2[i] = tab1[i];
	}	
}
void desc(int n, int tab[])
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\n", tab[i]);
	}
}
int main() 
{
	int tab1[] = {2, 4, 6, 8, 10};
	int tab2[] = {1, 3, 5, 7, 9};
	printf("tab2 przed przepisaniem:\n");
	desc(ROZMIAR, tab2);
	zamien(ROZMIAR, tab1, tab2);
	printf("\ntab2 po przepisaniu:\n");
	desc(ROZMIAR, tab2);
	return 0;
}
