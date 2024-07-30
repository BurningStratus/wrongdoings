#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fh;
    
    /* open the file */
    fh=fopen("/tmp/hello.txt", "w+");
    
    /* check for errors */
    if (fh == NULL) {
        return 1;
    }
    /* output text */
    fprintf(fh, "look at this!\n"); 
    fprintf(fh, "My C prog wrote this.\n");
    /* close the file handle */
    fclose(fh);
    printf("File written.\n");
    return 0;
}
