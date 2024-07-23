#include <stdio.h>

// prog should convert bin to decimal (8 bit)
int char2int(char *string);
int power(int power);
int bin2dec(int binary);

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 1;
    /* INSERT A NUMBA(binary) */
    char binary[9];
    
    /* Copy chars manually from argv to variable */
    for (int c=0; c<=8; c++)
    {
        *(binary + c) = *( *(argv + 1) + c );
    }
    int base10;
    base10 = char2int(binary);
    printf("RESULT: %d\n", bin2dec(base10));
    return 0;
}


/* Takes string as input and converts it to an int. */
int char2int(char *string)
{
    int size = sizeof(string) / sizeof(string[0]);
    int conv = 0;

    for (int i=size-1; i>=0; i--)
    {
        if ( *(string + i) == 49 ) /* str[i] == 49(1 in ASCII) */
        {
            conv |= (0x80 >> i);
        }
    }
    return conv;
}

/* Power of 2 can be done using bit shift. [2 << 1 == 2^2] */
int power(int power)
{
    int result = 1;
    result <<= power;
    return result;
}

/* Manually translates bits from int to bits in another int. */
/*
EXAMPLE: input: 100 

*/
int bin2dec(int binary)
{
    int base10 = 0;
    int x = 0x01;
    for (int i=0; i<=7; i++)
    {
        if ( binary & x )
        {
            base10 += power(i);
        }
        x <<= 1;
    }
    return base10;
}
