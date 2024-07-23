#include <stdio.h>

int main()
{
    int n = 1488;
    char c = 'c';
    float f = 1.488;
    double d = 0.55555;
    printf("Address of 'n': %p\n", &n);
    printf("Address of 'c': %p\n", &c);
    printf("Address of 'f': %p\n", &f);
    printf("Address of 'd': %p\n", &d);
    return 0;
}
