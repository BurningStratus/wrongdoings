#include <stdio.h>

int main()
{
    int x = 10;
    int* z = &x;
    int y = *z;
    printf("val x: %d\n", x);
    printf("val y: %d\n", y);
    printf("val z: %d\n", z);
    return 0;
}
    
