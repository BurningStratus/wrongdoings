#include <stdio.h>

int main()
{
    int C;
    double F;
    printf("Enter temp in C: ");
    scanf("%d", &C);
    F = (C * 9) / 5 + 32;
    printf("\nConverted(%d C): %f F.\n", C, F);
    return 0;
}
