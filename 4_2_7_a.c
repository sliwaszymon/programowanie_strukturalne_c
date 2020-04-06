#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void przypisz(int n, int tab1[], int tab2[], int *tab3)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab3[i] = tab1[i] + tab2[i];
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
	int tab1[] = {1, 2, 1, 2, 1};
	int tab2[] = {4, 2, 4, 2, 4};
	int tab3[] = {3, 6, 9, 12, 15};
	printf("tab3 przed przypisaniem:\n");
	desc(ROZMIAR, tab3);
	przypisz(ROZMIAR, tab1, tab2, tab3);
	printf("\ntab3 po przypisaniu:\n");
	desc(ROZMIAR, tab3);
	return 0;
}
