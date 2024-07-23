#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc( sizeof(int)*10 );
    if (p == NULL)
    {
        printf("Unable to allocate memory.\n");
        return 1;
    }
    printf("%p\n", p);
    
    printf("Number: ");
    scanf("%d", p);
    printf("U put %d.\n", *p);
    return 0;
}
