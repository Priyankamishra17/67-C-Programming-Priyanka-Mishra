/*Prime Number Series*/
#include <stdio.h>
int main ()
{
int n, count, num, Prime;
count=0;
num=2;
printf("Enter the number of Prime Numbers :");
scanf("%d", &n);
printf("\nFirst %d prime numbers are :");
while (count<n)
    {
        Prime=1;
        for (int i=2; i<=num/2; i++)
            {
                if (num % i ==0)
                {
                    Prime=0;
                    break;
                }
            }
        if (Prime == 1)
            {
            printf("\n%d", num);
            count++;
            }
        num++;
    }
    printf("\n");
    return 0;
}
