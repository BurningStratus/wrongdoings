#include <stdio.h>

int main()
{
    int mins;
    int hrs;
    int totMins;

    printf("Enter amt of hours: ");
    scanf("%d", &hrs);
    printf("Enter amt of mins: ");
    scanf("%d", &mins);
    totMins = hrs * 60 + mins;
    printf("Total mins: %d.\n", totMins);

    return 0;
}
