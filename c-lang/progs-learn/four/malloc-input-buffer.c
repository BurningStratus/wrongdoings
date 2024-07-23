#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input;
    char *s_buf;
    input = (char *)malloc(sizeof(char)*1024);
    if (input == NULL)
    {
        printf("Unable to initialize the mem space.\n");
        exit(1);
    }
    printf("Type a long ass text: ");
    fgets(input, 1024, stdin);
    for (int i=0; i<1024; i++)
    {
        *(s_buf + i) = *(input + i);
    }
    
    printf("You wrote:\n");
    printf("%s\n", s_buf);
    return 0;
}
