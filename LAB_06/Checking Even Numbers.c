/*Checking Even Number*/
#include <stdio.h>
int main ()
{
    int num;
    printf("Enter a positive integer :");
    scanf("%d", & num);
    if (num % 2 == 0)
    {
        printf("\n%d is an Even Number");
    }
    else
    {
        printf("\n%d is not an Even Number");
    }
    return 0;
}
