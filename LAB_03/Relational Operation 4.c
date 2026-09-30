/*Relational Operations 4*/
#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f,g,h,i;
    a=25;
    b=10;
    c=35;
    d=a+b;
    e=a-b;
    f=c-b;
    g=c+b;
    h=c-a;
    i=c+a;
    printf("%d",c!=d);
    printf("\n%d",c!=e);
    printf("\n%d",a!=f);
    printf("\n%d",a!=g);
    printf("\n%d",b!=h);
    printf("\n%d",b!=i);
    return 0;
}
