#include <stdio.h>

int main()
{
    char arr[26];
    char *ptr;
    int x;
    
    ptr = arr;
    for (x=0; x<26; x++)
    {
        *ptr++ = 'A' + x;
    }
    printf("Here's your dumb ass alphabet:\n");

    ptr = arr;
    for (x=0; x<26; x++)
    {
        printf("%c\n", *ptr++);
    }
    
    return 0;
}
