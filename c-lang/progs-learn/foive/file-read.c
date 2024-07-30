#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fd;
    int ch;
    
    fd=fopen("/tmp/hello.txt", "r");
    if (fd == NULL) {
        return 1;
    }
    
    while ( !feof(fd) ) {
        /* read char by char */
        ch=fgetc(fd);
        /* check for EOF */
        if ( ch == EOF ) {
            break;
        }
        /* print char */
        putchar(ch);
    }
    /* close the fd */
    fclose(fd);
    return 0;
}
