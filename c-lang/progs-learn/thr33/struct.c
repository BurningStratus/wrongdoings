#include <stdio.h>

int main()
{
    struct player
    {
        char name[32];
        int hi_score;
    };
    struct player xbox;
    
    printf("Player name: ");
    scanf("%s", xbox.name);
    printf("Player score: ");
    scanf("%d", &xbox.hi_score);
    
    printf("Player: %s\nScore: %d\n", xbox.name, xbox.hi_score);
    return 0;
}
