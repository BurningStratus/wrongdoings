#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d,%d", &num1, &num2);
    if (num1 == num2)
    {
        printf("Numbers are equal: %d = %d\n", num1, num2);
    } else {
        printf("Numbers are not equal: %d != %d\n", num1, num2);
    }
    return 0;
}
