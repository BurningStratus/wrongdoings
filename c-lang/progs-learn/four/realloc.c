#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input;
    int len;

    input = (char *)malloc(sizeof(char)*1024);
    if (input == NULL)
    {
        printf("Unable to initialize the mem space.\n");
        exit(1);
    }
    printf("Type a long ass text: ");
    fgets(input, 1023, stdin);
    len = strlen(input);
    
    input = realloc(input, sizeof(char) * (len+1));
    if (input == NULL)
    {
        return 1;
    }
    printf("Memory reallocated.\n");
    printf("You wrote:\n");
    printf("%s\n", input);
    return 0;
}
