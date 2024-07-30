#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fd_src, *fd_dst;
    int c;
    
    fd_src=fopen("/tmp/BUBBLEGUM", "r");
    fd_dst=fopen("/tmp/copy", "w");
    if ( !fd_src || !fd_dst )
    {
        return 1;
    }
    
    while ( (c=fgetc(fd_src) != EOF ) )
    {
        fputc(c, fd_dst);
    }
    puts("Copy created.");
    return 0;
} 
