/*Operators Precedence*/
#include <stdio.h>
int main ()
{
    printf("1. %d", 17 % 5 * 2 + 3);
   
    int x, y;
    x=10;
    y=4;
    printf("\n2. %d", x > y ? x % y + 2 : y * 2);
    
    int a, b;
    a=4;
    b=6;
    printf("\n3. %d", a + b > 10 || a * 2 == b && b % 2 == 0);
    
    int u=8, v=3;
    u=8;
    v=3;
    printf("\n4. %d", u > v ? u % v == 2 ? u + v : u - v : v * 2);

    int c, d;
    c=5;
    d=3;
    printf("\n5. %d", c++ * 2 + --d);

    return 0;
}
