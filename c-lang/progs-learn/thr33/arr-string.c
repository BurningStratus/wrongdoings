#include <stdio.h>

int main()
{
    // VVVV same thing
    // char letters[] = {'c', 'a', 't', '\0'}
    // char letters[] = "cat";
    char name[16];
    printf("Enter your name: ");
    scanf("%16s", name);
    printf("Name entered: %s\n", name);
    return 0;
}
