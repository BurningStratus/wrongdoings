#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int num1 = 10;
    int num2 = 20;
    printf("Your numbers: %d %d\n", num1, num2);
    swap(&num1, &num2);    
    printf("W/ swap: %d %d\n", num1, num2);
    return 0;
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b; 
}
