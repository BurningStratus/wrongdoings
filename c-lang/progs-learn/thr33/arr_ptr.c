#include <stdio.h>

int main()
{
    char arr[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Address of arr: %p\n", &arr);
    
    for (int i = 0; i<10; i++)
    {
        printf("Address of arr[%d]: %p\n", i, &arr[i]);
    }
    return 0;
}
