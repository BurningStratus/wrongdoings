#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days = 5;
    int market_close[days];
    int value;

    for (int i = 0; i < days; i++)
    {
        value = (int)rand() % 1000;
        market_close[i] = (int)value * (int)value;
        printf("\nDay #%d: %d", i, market_close[i]);
    }
    putchar('\n');
    return 0;
}
