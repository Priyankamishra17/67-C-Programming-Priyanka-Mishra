/*Ternary Operations*/
#include <stdio.h>
int main ()
{
    int x,y,z,A;
    x=50;
    y=100;
    z=200;
    printf("%d", (z>=y>=x?20:40));
    A=15005<=1500?15:150;
    printf("\n%d",A);
    return 0;
}
