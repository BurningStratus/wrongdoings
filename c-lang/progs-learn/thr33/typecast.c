#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    float c;
    a = 3;
    b = 2;
    c = (float)a/ (float)b;
    printf("%d/%d = %.2f\n", a, b, c);
    return 0;
}
