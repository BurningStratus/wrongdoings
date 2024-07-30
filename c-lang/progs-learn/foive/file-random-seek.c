#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct agent {
        char actor[32];
        int year;
        char title[32];
    };
    struct agent bond;
    FILE *jbdb;
    int r;

    jbdb=fopen("/tmp/bond.db", "r");
    if (!jbdb)
    {
        puts("SPECTRE WINS!");
        return 2;
    }
    
    /* locate the second record using size of struct */
    fseek(jbdb, sizeof(struct agent)*1, SEEK_SET);
    fread(&bond, sizeof(struct agent), 1, jbdb);

    printf("%s\t%d\t%s", bond.actor, bond.year, bond.title);
    putchar('\n');

    fclose(jbdb);
    return 0;
}
