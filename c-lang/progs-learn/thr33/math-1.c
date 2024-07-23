#include <stdio.h>

int main()
{
    int high = 5;
    int low  =-5;
    int i = low;
    while (i <= high)
    {
        printf("%d ", i);
        i++;
    }
    while (i >= low)
    {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    return 0;
}
