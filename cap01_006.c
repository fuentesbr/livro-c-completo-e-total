#include <stdio.h>

void main(void)
{
    int x, y;

    x = 5;
    y = 2;

    printf("%d\n", x/y);
    printf("%d\n", x%y);

    x = 1;
    y = 2;

    printf("%d %d\n", x/y, x%y);

    x = 10;
    y = ++x;

    printf("x = %d\ty = %d\n", x, y);

    x = 10;
    y = x++;

    printf("x = %d\ty = %d\n", x, y);
}