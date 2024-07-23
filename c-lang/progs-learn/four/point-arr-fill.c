#include <stdio.h>

int main()
{
    int arr[5];
    int x;
    int *ptr;
    ptr = arr; /* Init the pointer */
    
    for (x=0; x<5; x++)
    {
        *ptr=x+1;
        ptr++;
    }

    ptr = arr;
    for (x=0; x<5; x++)
    {
        printf("arr[%d] = %d\n", x, *ptr);
        // printf("addr of arr[%d] = %p\n", x, &arr[x]);
        ptr++;
    }
    return 0;
}
