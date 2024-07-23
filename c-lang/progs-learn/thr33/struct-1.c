#include <stdio.h>

int main()
{
    struct president
    {
        char name[10];
        int year;
    };
    struct president obama = {
        "Obama",
        2012
    };
    
    printf("We got el Pres: %s %d\n", obama.name, obama.year);
    return 0;
}
