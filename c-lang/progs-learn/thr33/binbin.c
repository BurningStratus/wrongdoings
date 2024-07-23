#include <stdio.h>

char *binbin(unsigned n);

int main()
{
    unsigned num;
    printf("Enter a number from a range 0-65535: ");
    scanf("%u", &num);
    printf("%u == %s\n", num, binbin(num));
    return 0;
}

char *binbin(unsigned n)
{
    const int bits = 17;
    static char bin[17];
    int x;
    
    for (x=0; x<bits; x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return bin;
}
