#include <stdio.h>

int main()
{
    int score_amt = 10;
    int array[score_amt];
    int i;

    for (i=0; i<score_amt; i++)
    {
        printf("Hi score #%d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Highest scores: \n");

    for (i=0; i<score_amt; i++)
    {
        printf("\nHi score #%d : %d", i + 1, array[i]);
    }
    return 0;
}
