#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {2, -1, 5, 4, 5, 8, 7};
    int *wsk=tab;
    int b = *(wsk+=3); //b= 8
    int c = b+2; // b= 4 , c= 99
    int d = (b/=-6) ^ (c-=-17); // b= 4 , c= 6 , d=4200848
    int e = (wsk+=-1)[2]; // b= 0 , c= 23 , d= 23 , e=4200942
    e = (d *= 8) + (c /= 3); // b= 0 , c= 23 , d= 23 , e= 5
    c = d + (b+=8); // b= 0 , c= 7 , d= 184 , e= 191
    b = *wsk + e; // b= 8 , c= 192 , d= 184 , e= 191
    d = b * c / e; // b= 196 , c= 192 , d= 184 , e= 191
    return 0;
}
