#include <stdio.h>

void print_arr(int arr[]);

int main()
{
    int array[5] = { 1, 2, 3, 4, 5 };
    printf("Here's your damn array:\n");
    print_arr(array);
    return 0;
}

void print_arr(int arr[])
{
    for (int i=0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    putchar(10);
}
