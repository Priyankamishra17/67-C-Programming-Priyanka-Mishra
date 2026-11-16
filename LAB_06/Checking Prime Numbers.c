/*Checking Prime Number*/
#include <stdio.h>
int main ()
{
    int num, Prime;
    Prime=1;
    printf("Enter a positive integer :");
    scanf("%d", & num);
    if (num<=1)
    {
        Prime=0;
    }
    else
    {
        for(int i=2; i<=num/2; i++)
            {
                if (num % i ==0)
                {
                    Prime=0;
                    break;
                }
            }
    }
    if (Prime==1)
    {
        printf("\n%d is a Prime Number", num);
    }
    else 
    {
        printf("\n%d is not a Prime Number", num);
    }
    return 0;
}
