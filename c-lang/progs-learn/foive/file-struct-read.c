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
        puts("Strömberg wins!");
        return 2;
    }
    while ( !feof(jbdb) )
    {
        r = fread(&bond, sizeof(struct agent), 1, jbdb);
        if ( r==0 )
            break;
    }
    printf("NAME\tYEAR\tMOVIE\n");
    printf("%s\t%d\t%s", bond.actor, bond.year, bond.title);
    fclose(jbdb);
    return 0;
}
