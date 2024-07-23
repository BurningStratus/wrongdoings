#include <stdio.h>

void discount(float *a);

int main()
{
    float price = 42.99;
    printf("Your dumb ass thing costs %.2f\n", price);
    discount(&price);    
    printf("W/ discount, the thing costs %.2f\n", price);
    return 0;
}

void discount(float *a)
{
    *a *= 0.90;
}
