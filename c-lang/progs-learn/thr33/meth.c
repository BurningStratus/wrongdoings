#include <stdio.h>
#include <math.h>

int main()
{
    printf("Holy numbers in Computers: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.0f ", pow(2, i));
    }
    putchar('\n');
    return 0;
}
