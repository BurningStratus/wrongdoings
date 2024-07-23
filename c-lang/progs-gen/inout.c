#include <stdio.h>

int main()
{
    int number;                 // define a variable of int
    printf("Enter a number: "); 
    scanf("%d", &number);                // input from stdin(0)
    printf("You entered: %d\n", number); // output  to stdout(1)
    return 0; // compiled with extreme prejudice
}
