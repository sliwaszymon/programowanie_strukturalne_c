#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    float a, b, c;
};
float obwod(struct trojkat parametr)
{
    return parametr.a+parametr.b+parametr.c;
}
int main()
{
    struct trojkat tr1;
    tr1.a = 4.2;
    tr1.b = 9.0;
    tr1.c = 5.2;
    printf("%f", obwod(tr1));
    return 0;
}
