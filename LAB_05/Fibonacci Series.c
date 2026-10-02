/*Fibonacci Series*/
#include <stdio.h>
int main ()
{
    printf("FIBONACCI SERIES");
    int n,a,b,c;
    a=0;
    b=1;
    printf("\nEnter the number of terms :");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
        {
            printf("\n%d",a);
            c=a+b;
            a=b;
            b=c;
        }
}
