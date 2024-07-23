#include <stdio.h>

int main()
{
    char *fruit[] = {
        "watermelon",
        "banana",
        "pear",
        "apple",
        "coconut",
        "grape",
        "blueberry"
    };
    
    int i;
    char *ptr;
    
    ptr = *fruit;
    for (i=0; i<7; i++)
    {
        //printf("%c\n", **(fruit + i));
        while (putchar( *(ptr++) ));
        putchar('\n');
    }
    return 0;
}
