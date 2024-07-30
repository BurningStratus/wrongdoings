#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    if (unlink("/tmp/BUBBLEGUM") == -1)
    {
        return 1;
    }
    puts("File unlinked.");
    return 0;
}
