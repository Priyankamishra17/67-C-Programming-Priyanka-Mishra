/*Logical Operations 2*/
#include <stdio.h>
int main ()
{
    int a,b,c;
    a=75;
    b=42;
    c=96;
    printf("%d",a>b || b>c);
    printf("\n%d",a>b || b<c);
    printf("\n%d",a<b || b<c);
    printf("\n%d",b>a || b>c);
    printf("\n%d",b>a || b<c);
    printf("\n%d",b<a || b<c);
    printf("\n%d",a>b || c>b);
    printf("\n%d",a>b || c<b);
    printf("\n%d",a<b || c<b);
    printf("\n%d",b>a || c>b);
    printf("\n%d",b>a || c<b);
    printf("\n%d",b<a || c>b);
}
