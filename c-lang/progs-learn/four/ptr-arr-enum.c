#include <stdio.h>

int main()
{
    enum workdays { mon, tue, wed, thu, fri };
    float temps[5] = { 18.7, 22.8, 25.0, 23.3, 23.2 };
    float *ptr;    
    
    ptr = temps;

    printf("Temp on tuesday is: %.2f\n", *(ptr + tue));
    printf("Temp on friday  is: %.2f\n", *(ptr + fri));
    return 0;
}
