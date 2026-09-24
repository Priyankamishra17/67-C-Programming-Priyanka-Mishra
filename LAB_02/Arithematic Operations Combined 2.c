/*Arithematic Operations Combined 2*/
#include <stdio.h>
int main ()
{
    int a,b,result;
    a=1200;
    b=160;
    result = a+b;
    printf("Sum of %d and %d is %d",a,b,result);
    result = a-b;
    printf("\nDifference of %d and %d is %d",a,b,result);
    result = a*b;
    printf("\nProduct of %d and %d is %d",a,b,result);
    result = a/b;
    printf("\nQuotient of %d and %d is %d",a,b,result);
    result = a % b;
    printf("\nRemainder of %d and %d is %d",a,b,result);
    return 0;
}
