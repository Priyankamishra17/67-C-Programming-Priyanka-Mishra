/*Decrement Program 1*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    a=12;
    b=15;
    c=18;
    printf("%d",a--);
    printf("\n%d",b--);
    printf("\n%d",c--);
    d=a--*a;
    printf("\n%d",d);
    e=a--*b;
    printf("\n%d",e);
    f=a--*c;
    printf("\n%d",f);
    g=b--*a;
    printf("\n%d",g);
    h=b--*b;
    printf("\n%d",h);
    i=b--*c;
    printf("\n%d",i);
    j=c--*a;
    printf("\n%d",j);
    k=c--*b;
    printf("\n%d",k);
    l=c--*c;
    printf("\n%d",l);
    return 0;
}
