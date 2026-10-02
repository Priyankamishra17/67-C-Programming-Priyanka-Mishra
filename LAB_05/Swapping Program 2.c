/*Swapping Program 2*/
#include <stdio.h>
int main ()
{
    int A,B,C;
    A=122;
    B=222;
    printf("Value of A and B is %d and %d repectively.", A,B);
    C=A+B;
    A=C-A;
    B=C-B;
    printf("\nValue of A and B is %d and %d respectively.", A,B);
    return 0;
}
