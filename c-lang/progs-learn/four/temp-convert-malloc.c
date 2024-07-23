#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr_temp = malloc(sizeof(float) * 1);
    float kelvin_temp;
    char unit;

    printf("Convert the temp to kelvin.\n");
    printf("Enter the unit F/C: ");
    unit = getchar();
    printf("Enter the value: ");
    scanf("%f", ptr_temp);
    printf("received temp: %f %p\n", *ptr_temp, ptr_temp);
    
    if ( unit == 'C' || unit == 'c' || unit == 'F' || unit == 'f')
    {
        if (unit == 'C')
        {
            kelvin_temp = (*ptr_temp) + 273.15;
        } else {
            kelvin_temp = ((*ptr_temp) + 459.67) * (5.0/9.0);
        }
    } else {
        printf("Temp unit not recognized.\n");
        return 1;
    }
    
    printf("Temp converted to K : (%.2f %c) %.2f K\n", *ptr_temp, unit, kelvin_temp);
    return 0;
}
