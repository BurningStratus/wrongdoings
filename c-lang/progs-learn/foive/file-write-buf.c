#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fd;
    char buf[64];
    char *r;
    
    fd=fopen("/tmp/hello.txt", "r");
    if (fd == NULL)
    {
        return 1;
    }
    while ( !feof(fd) )
    {
        /* fgets returns (char *)NULL on err or EOF */
        r = fgets(buf, 64, fd);
        if ( r == NULL )
            break;
        printf("%s", buf);
    }
    fclose(fd);
    return 0;
}
