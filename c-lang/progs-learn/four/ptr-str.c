#include <stdio.h>

int main()
{
    char sample[] = "From whence cometh my help?\n";
    char *ptr;
    printf("%d", sizeof(ptr));
    
    ptr = sample;
    while ( ptr != (sample + 850 * sizeof(ptr)))
    {
        printf("%c", *ptr, ptr);
        ptr++;
    }
    return 0;
}
