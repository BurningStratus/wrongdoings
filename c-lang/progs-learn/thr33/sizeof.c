#include <stdio.h>

int main()
{
    struct evil_ass_robot 
    {
        int hp;
        char name[5];
        int x_pos;
        int y_pos;
        int STR;
    };
    printf("size of evil ass robot: %d\n", sizeof(struct evil_ass_robot));
    return 0;
}
