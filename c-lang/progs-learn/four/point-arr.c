#include <stdio.h>

int main()
{
    int arr[5] = { 1, 3, 4 , 5, 7 };
    printf("1: The array resides in %p\n", &arr );
    printf("2 :The array resides in %p\n", arr );
    return 0;

}
