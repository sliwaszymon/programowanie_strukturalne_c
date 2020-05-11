#include <stdio.h>
#include <stdlib.h>

struct student
{
    char imie[20];
    char nazwisko[20];
    char adres[20];
    char pesel[12];
    char kierunek[20];
    char nr_legitymacji[7];
};
void wczytaj(struct student *osoba)
{
    printf("Podaj imie: ");
    scanf("%s", osoba->imie);
    printf("Podaj nazwisko: ");
    scanf("%s", osoba->nazwisko);
    printf("Podaj adres (wpisz _ zamiast spacji): ");
    scanf("%s", osoba->adres);
    printf("Podaj pesel: ");
    scanf("%s", osoba->pesel);
    printf("Podaj kierunek studiow: ");
    scanf("%s", osoba->kierunek);
    printf("Podaj numer legitymacji: ");
    scanf("%s", osoba->nr_legitymacji);
}
int main()
{
    struct student szymon;
    wczytaj(&szymon);
    printf("--PO WCZYTANIU--\n");
    printf("%s\n", szymon.imie);
    printf("%s\n", szymon.nazwisko);
    printf("%s\n", szymon.adres);
    printf("%s\n", szymon.pesel);
    printf("%s\n", szymon.kierunek);
    printf("%s\n", szymon.nr_legitymacji);
    return 0;
}
