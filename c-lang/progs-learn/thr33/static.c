#include <stdio.h>

void proc(void);

int main()
{
    puts("First call");
    proc();
    puts("Second call");
    proc();
    return 0;
}

void proc(void)
{
    static int a;
    printf("The val of a is %d\n", a);
    printf("Enter new val of a: ");
    scanf("%d", &a);
}
