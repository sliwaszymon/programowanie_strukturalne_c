#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

void przypisz(int n, int *tab1, int *tab2, int *tab3)
{
	int i, temp1, temp2, temp3;
	for(i=0; i<n; i++)
	{
		temp1 = tab1[i];
		temp2 = tab2[i];
		temp3 = tab3[i];
		if(tab1[i] >= tab2[i])
		{
			if(tab2[i] >= tab3[i])
			{
				tab1[i] = temp1;
				tab2[i] = temp2;
				tab3[i] = temp3;	
			}
			else
			{
				if(tab3[i] >= tab1[i])
				{
					tab1[i] = temp3;
					tab2[i] = temp1;
					tab3[i] = temp2;
				}
				else
				{
					tab1[i] = temp1;
					tab2[i] = temp3;
					tab3[i] = temp2;	
				}
			}
		}
		else
		{
			if(tab1[i] >= tab3[i])
			{
				tab1[i] = temp2;
				tab2[i] = temp1;
				tab3[i] = temp3;	
			}
			else
			{
				if(tab2[i] >= tab3[i])
				{
					tab1[i] = temp2;
					tab2[i] = temp3;
					tab3[i] = temp1;	
				}
				else
				{
					tab1[i] = temp3;
					tab2[i] = temp2;
					tab3[i] = temp1;	
				}
			}
		}
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
	int tab1[] = {6, 1, 3, 7, 1};
	int tab2[] = {4, 2, 4, 2, 9};
	int tab3[] = {3, 6, 9, 12, 15};
	printf("tab1 przed przypisaniem:\n");
	desc(ROZMIAR, tab1);
	printf("\ntab2 przed przypisaniem:\n");
	desc(ROZMIAR, tab2);
	printf("\ntab3 przed przypisaniem:\n");
	desc(ROZMIAR, tab3);
	przypisz(ROZMIAR, tab1, tab2, tab3);
	printf("\ntab1 po przypisaniu:\n");
	desc(ROZMIAR, tab1);
	printf("\ntab2 po przypisaniu:\n");
	desc(ROZMIAR, tab2);
	printf("\ntab3 po przypisaniu:\n");
	desc(ROZMIAR, tab3);
	return 0;
}
