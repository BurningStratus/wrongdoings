#include <stdio.h>

int main()
{
    int hrs;
    int mins;
    printf("Input amt of hours: ");
    scanf("%d", &hrs);
    mins = hrs * 60;
    printf("%d hours equals to %d minutes\n", hrs, mins);
    return 0;
} 
