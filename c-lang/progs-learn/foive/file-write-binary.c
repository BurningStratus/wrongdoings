#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fd;
    int hi_score[10];
    
    fd = fopen("/tmp/scores.dat", "w");
    if (!fd)
    {
        return 2;
    }
    for (int i=0; i<10; i++)
    { 
        printf("Enter ur high score: ");
        scanf("%d", (hi_score+i));
        /* fprintf(fd, "%d", hi_score); */
        printf("Score #%d saved.\n", i);
    }
    fwrite(hi_score, sizeof(int), 10, fd);
    fclose(fd);
    return 0;
}
