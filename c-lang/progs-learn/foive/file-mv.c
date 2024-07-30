#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fd;
    
    fd=fopen("/tmp/tempf", "w");
    if ( !fd )
    {
        return 1;
    }
    
    fclose(fd);
    puts("File /tmp/tempf exists(now)");
    
    if ( (rename("/tmp/tempf", "/tmp/BUBBLEGUM") != 0 ) )
    {
        return 2;
    }
    puts("File renamed");
    return 0;
} 
