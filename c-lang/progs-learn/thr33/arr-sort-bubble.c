#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int i;
    int x = sizeof(int);
    printf("Size of x: %d\n", x);
    char num[x];
    for (i=0; i<x; i++)
    {
        num[i] = 'F';
    }
    printf("Got a hex number: %s\n", num);
    
 
    int size = strtol(num, NULL, 16);
    printf("Converting num to int: %d\n", size);
    int inner, outer, temp;
    int bubble[size];
    
    srand( time(NULL) );

    for (i=0; i<size; i++)
    {
        bubble[i] = rand() ;
    }

    /* original array */
    printf("Original array: \n");
    for (i=0; i<size; i++)
    {
        printf("%d\t", bubble[i]);
    }
    putchar('\n');
    
    /* Bubble sort */
    for (outer=0; outer < size; outer++)
    {
        for (inner=outer+1; inner < size; inner++)
        {
            if ( bubble[outer] < bubble[inner] )
            {
                temp = bubble[outer];
                bubble[outer] = bubble[inner];
                bubble[inner] = temp;
            }
        }
    }
    
    /* Sorted array */
    printf("Sorted array: \n");
    for (i=0; i<size; i++)
    {
        printf("%d\t", bubble[i]);
    }
    putchar('\n');
    return 0;
}
