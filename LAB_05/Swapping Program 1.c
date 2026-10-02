/*Swapping Program 1*/
#include <stdio.h>
int main ()
{
    int A,B,C;
    A=100;
    B=200;
    printf("Value of A and B is %d and %d repectively.", A,B);
    C=A;
    A=B;
    B=C;
    printf("\nValue of A and B is %d and %d respectively.", A,B);
    return 0;
}
