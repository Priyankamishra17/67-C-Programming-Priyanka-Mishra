/*Modulus Program 2*/
#include <stdio.h>
int main ()
{
    int a,b,c,d,e;
    a=10000;
    b=22;
    c=190;
    d=92;
    e=300;
    int f;
    f=a % b % c % d % e;
    printf("Remainder of %d,%d,%d,%d and %d is %d",a,b,c,d,f);
    return 0;
}
