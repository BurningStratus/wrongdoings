#include <stdio.h>

int main()
{
    float radius;
    double volume;
    double PI = 3.14;
    printf("Enter the radius of a sphere: ");
    scanf("%f", &radius);
    volume = 4.0/3.0 * PI * (radius * radius * radius);
    printf("\nVolume of a sphere with r = %f is %f\n", radius, volume);
    return 0;
}   
