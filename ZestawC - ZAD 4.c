#include <stdio.h>
#include <stdlib.h>
void zamien(int *a, int *b, int *c)
{
    int tempa = *a, tempb = *b, tempc = *c;
    *a = tempc;
    *b = tempa;
    *c = tempb;

}
int main()
{
    int a, b, c;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("a:%d b:%d c:%d\n", a, b, c);
    zamien(&a, &b, &c);
    printf("a:%d b:%d c:%d\n", a, b, c);
    return 0;
}
