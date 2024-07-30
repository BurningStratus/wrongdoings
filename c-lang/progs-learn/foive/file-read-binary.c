#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fd;
    int hi_scores[5];
    int x;
    
    fd=fopen("/tmp/scores.dat", "r");
    if (!fd)
    {
        return 2;
    }
    fread(hi_scores, sizeof(int), 5, fd);
    fclose(fd);
    for (x=0; x<5; x++)
    {
        printf("Hi score #%d: %d\n", x+1, *(hi_scores+x));
    }
    putchar('\n');
    return 0;
}
