/*Relational Operations 1*/
#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f,g;
    a=10;
    b=5;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a % b;
    printf("%d",a>b);
    printf("\n%d",b>c);
    printf("\n%d",c>b);
    printf("\n%d",b>c);
    printf("\n%d",c>a);
    printf("\n%d",a>c);
    printf("\n%d",e>f);
    printf("\n%d",d>a);
    printf("\n%d",f>g);
    return 0;
}
