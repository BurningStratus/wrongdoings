#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char *junk;
    int x;
    
    /* allocate the memory */
    junk = calloc(64, sizeof(char));
    if (junk == NULL)
    {
        return 1;
    }
    
    /* output the buffer */
    for (x=0; x<64; x++)
    {
        printf("%02X ", *(junk+x));
        if ( (x+1) % 10 == 0 )
        {
            putchar('\n');
        }
    }
    putchar('\n');
    return 0;
    
}
