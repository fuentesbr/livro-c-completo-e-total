#include <stdio.h>

void series(void);

void main(void)
{
    for(int i = 0; i < 10; i++)
    {
        printf("série de numero %i: ", i);
        series();
        printf("\n");
    }
}

void series(void)
{
    static int series_num = 10;

    series_num += 23;

    printf("%d", series_num);
}