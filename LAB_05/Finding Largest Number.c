/*Finding Largest Number*/
#include <stdio.h>
int main()
{
    int a,b,c;
    a=15;
    b=12;
    c=17;
    if (a>=b && b>=c)
    {
        printf("%d is the largest number",a);
    }
    else if (b>=a && b>=c)
    {
        printf("%d is the largest number",b);
    }
    else
    {
        printf("%d is the largest number",c);
    }
}


