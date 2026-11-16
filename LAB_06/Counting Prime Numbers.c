/*Counting Prime Numbers*/
#include <stdio.h>
int main ()
{
    int n, Prime, count;
    count=0;
    printf("Enter a positive number :");
    scanf("%d", &n);
    for (int i=2; i<=n; i++)
        {
            Prime=1;
            for (int j=2; j <= i/2; j++)
                {
                    if (i % j ==0)
                    {
                        Prime=0;
                        break;
                    }
                }
            if (Prime == 1)
            {
                count++;
            }
        }
        printf("\nTotal Prime Numbers between 1 and %d : %d", n, count);
    return 0;
}
