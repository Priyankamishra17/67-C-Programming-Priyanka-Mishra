/*Counting Odd Numbers*/
#include <stdio.h>
int main ()
{
    int n, count;
    count=0;
    printf("Enter a positive number :");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        {
            if (i % 2 != 0)
            {
                count++;
            }
        }
    printf("\nTotal Odd Numbers between 1 and %d : %d", n, count);
    return 0;
}
