/*Odd Number Series*/
#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number of Even Numbers :");
    scanf("%d", &n);
    printf("\nFirst %d even numbers are :");
    for (int i=1; i<=n; i++)
        {
            printf("\n%d", 2*i-1);
        }
    return 0;
}
