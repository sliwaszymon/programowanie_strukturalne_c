#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5
int srednia(int n, int tab[])
{
	int i, wynik = 0;
	for(i=0; i<n; i++)
	{
		wynik += tab[i];
	}
	return wynik/n;	
}
int main() 
{
	int tab[] = {2, 4, 6, 8, 10};
	printf("%d", srednia(ROZMIAR, tab));
	return 0;
}
