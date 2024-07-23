#include <stdio.h>

void fn(char* wd);

int main()
{
    char word[10];
    printf("Enter arg: ");
    // scanf("%s", word);
    fgets(word, 10, stdin);
    fn(word);
    return 0;
}

void fn(char* wd)
{
    printf("Function called! with arg: %s\n", wd);
}
