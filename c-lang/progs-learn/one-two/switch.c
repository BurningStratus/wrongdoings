#include <stdio.h>

int main()
{
    int x;
    int y;
    
    printf("Enter int (0 - 3): ");
    scanf("%d", &x);
    
    switch(x)
    {
        case 0:
            y = 1;
            break;
        case 1:
            y = x * x * x;
            break;
        case 2:
            y = x * x;
            break;
        case 3:
            y = x;
            break;
        default:
            y = x * x;
    }
     
    printf("Here's what ya got: %d from %d.\n", y, x);
    return 0;
}
