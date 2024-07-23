#include <stdio.h>

int main()
{
    int i, n;
    n = 0;
    int const size = 3;
    char names[size][10];
    names[0] = "John Holt\0";
    names[1] = "Scientist\0";
    names[2] = "Radics\0";
    for (i=0; i < size; i++)
    {
        while (names[size][n] != '\0')
        {
            printf("%c", names[size][n]);
            n++;
        }
        putchar(10);
    }
    
    return 0;
}
