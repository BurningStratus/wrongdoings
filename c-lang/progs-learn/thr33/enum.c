#include <stdio.h>

int verify(int check);

int main()
{
    int s;
    printf("Enter a value: ");
    scanf("%d", &s);
    if (verify(s))
    {
        printf("%d is in range.\n", s);
    }
    return 0;
}

int verify(int check)
{
    enum { false, true };
    if (check < 0 || check > 100)
    {
        return false;
    }
    return true;
}
