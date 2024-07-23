#include <stdio.h>

int main()
{
    // TODO: print hex vals for 0-F
    for (char alpha = 65; alpha <= 71; alpha++)
    {
        for (int code = 0; code <= 6; code++)
        {
            printf("%c%d\a  ", alpha, code);
        }
        printf("\n");
    }
    return 0;
}
