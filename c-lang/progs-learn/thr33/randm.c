#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// this prog uses time as seed for random
int main()
{
    printf("Rand ns: ");
    int r, a, b;
    srand((unsigned)time(NULL));

    for (b=0; b<100; b++)
    {
        r = rand();
        if (b % 10 == 0)
            putchar('\n');
        printf("%d\t", r % 20);
    }
    putchar('\n');
    return 0;
}
