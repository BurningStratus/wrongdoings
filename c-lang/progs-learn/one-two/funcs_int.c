#include <stdio.h>

#define OCT 10


void graph(int x);

int main()
{
    int x;
    printf("Draw a line with length of: ");
    scanf("%d", &x);
    graph(x);
    return 0;
}

void graph(int x)
{
    for (int i=0; i < x; i++)
    {
        printf("*%d", OCT);
    }
    printf("\n");
}
