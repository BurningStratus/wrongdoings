#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_ints;
    ptr_ints = (int *)malloc(sizeof(int) * 3);
    *(ptr_ints + 0) = 100;
    *(ptr_ints + 1) = 200;
    *(ptr_ints + 2) = 300;

    for (int i=0; i<3; i++)
    {
        printf("%d: %d\n", i + 1, *(ptr_ints + i));

    }
    return 0;
}
