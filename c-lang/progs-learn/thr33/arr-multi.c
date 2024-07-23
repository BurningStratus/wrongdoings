#include <stdio.h>

int main()
{
    char tictac[3][3];
    int x,y;
    /* init the matrix */
    for (x=0; x<3; x++)
    {
        for (y=0; y<3; y++)
        {
            tictac[x][y]='.';
        }
        tictac[1][1] = 'X';
    }
    
    /* Display the matrix */
    puts("Ready to play tictac eh?");
    for (x=0; x<3; x++)
    {
        for (y=0; y<3; y++)
        {
            printf("%c", tictac[x][y]);
        }
        putchar(10);
    }
    return 0;
}
