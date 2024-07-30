#include <stdio.h>

void linked(void);

/* shared variable */
int number;

int main()
{
    printf("<< Two source code files are linked here.\n");
    for (number=0; number<5; number++);
    linked();
    printf("<< Number again: %d.\n", number);
    return 0;
}
