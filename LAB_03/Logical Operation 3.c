/*Logical Operations 3*/
#include <stdio.h>
int main ()
{
    int a,b,c;
    a=75;
    b=42;
    c=96;
    printf("%d",!(a>b));
    printf("\n%d",!(a<b));
    printf("\n%d",!(a>c));
    printf("\n%d",!(a<c));
    printf("\n%d",!(b>a));
    printf("\n%d",!(b<a));
    printf("\n%d",!(b>c));
    printf("\n%d",!(b<c));
    printf("\n%d",!(c>a));
    printf("\n%d",!(c<a));
    printf("\n%d",!(c>b));
    printf("\n%d",!(c<b));
    return 0;
}
