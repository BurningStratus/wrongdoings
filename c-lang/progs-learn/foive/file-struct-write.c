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

    printf("Enter the year: ");
    scanf("%d", &bond.year);

    printf("Enter the actor name: ");
    while ( getchar() != '\n' );
    fgets(bond.actor, 32, stdin);

    printf("Enter the film name: ");
    // while ( getchar() != '\n' );
    fgets(bond.title, 32, stdin); 

    jbdb=fopen("/tmp/bond.db", "a");
    if (!jbdb)
    {
        puts("Strömberg wins!");
        return 2;
    }
    fwrite(&bond, sizeof(struct agent), 1, jbdb);
    fclose(jbdb);
    puts("Record written.");
    return 0;
}
