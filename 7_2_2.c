#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    float a, b, c;
};
void przepisz(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2 = troj1;
}
void test(struct trojkat parametr)
{
    printf("a=%f, b=%f, c=%f", parametr.a, parametr.b, parametr.c);
}
int main()
{
    struct trojkat tr1 = {4.2, 9.0, 5.2};
    struct trojkat tr2 = {1.1, 2.2, 3.3};
    test(tr2);
    przepisz(tr1, &tr2);
    printf("\n");
    test(tr2);
    return 0;
}
