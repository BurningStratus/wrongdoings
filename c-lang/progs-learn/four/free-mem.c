#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *age;
    /* allocate memory */
    age = (int *)malloc(sizeof(int)*1);
    if (age == NULL)
        return 1;
    /* use the memory */
    printf("How old are you?: ");
    scanf("%d", age);
    
    *age *= 365;
    
    printf("You are %d days old.\n", *age);

    /* free the mem space */
    free(age);
    
    return 0;
}
