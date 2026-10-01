/*Relational Operations 6*/
#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f,g,h;
    a=10;
    b=20;
    c=30;
    d=a+b;
    e=a-b;
    f=c-b;
    g=c+b;
    h=a % b;
    printf("%d",a<=b);
    printf("\n%d",c<=b);
    printf("\n%d",b<=c);
    printf("\n%d",c<=a);
    printf("\n%d",a<=c);
    printf("\n%d",d<=e);
    printf("\n%d",e<=f);
    printf("\n%d",a<=e);
    printf("\n%d",f<=g);
    return 0;
}
