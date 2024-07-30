#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char filename[255];
    FILE *fd;
    int x,c;
    
    if (argc > 1)
    {
        for (x=0; x<255; x++)
        {
            *(filename+x) = *(*(argv+1)+x);
            if ( *(*(argv+1)+x) == '\n' )
                break;
        }
    }
    else 
    {
        printf("File to dump: ");
        scanf("%s", filename);
    }

    fd=fopen(filename, "r");
    if (!fd)
    {
        return 2;
    }
    x=0;
    while ( (c=fgetc(fd)) != EOF )
    {
        printf("%02X ", c);
        x++;
        if ( !(x%16) )
        {
            putchar('\n');
        }
    }
    fclose(fd);
    putchar('\n');
    return 0;
}
