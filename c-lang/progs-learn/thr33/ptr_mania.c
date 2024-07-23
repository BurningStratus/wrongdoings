#include <stdio.h>

int main()
{
    char a, b, c;
    char *p;
    a = 'A', b = 'B', c = 'C';
    
    printf("Know your enemy: ");
    p = &a;
    printf("%c\n", *p);
    p = &b;
    printf("%c\n", *p);
    p = &c;
    printf("%c\n", *p);
    return 0;
}
