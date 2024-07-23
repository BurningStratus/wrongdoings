#include <stdio.h>

int main()
{
    int array[3] = {};
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &array[0], &array[1], &array[2]);
    printf("Reversed array: %d %d %d", array[2], array[1], array[0]);
    return 0;
}
