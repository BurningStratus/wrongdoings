#include <stdio.h>

int main()
{
    char alpha = 'A';
    int x;
    char *ptr;
    
    ptr = &alpha;
    for (x=0; x<26; x++)
    {
        printf("%c\n", (*ptr)++);
    }

    return 0;
}
