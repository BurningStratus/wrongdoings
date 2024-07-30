#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fd;
    
    /* use "a" parameter to append the text */
    fd=fopen("/tmp/hello.txt", "a");
    if (fd == NULL)
    {
        return 1;
    }
    fprintf(fd, "This was added later.\n");
    puts("Text appended.");
    fclose(fd);
    return 0;
}
