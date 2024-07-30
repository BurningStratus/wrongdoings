#include <stdio.h>

extern int number;

void linked(void)
{
    printf(">> Linked file.\n");
    printf(">> External number: %d.\n", number);
    number++;
}
