#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
    char curdir[255];
    
    /* get current working directory == pwd */
    getcwd(curdir, 255);
    printf("cwd: %s\n", curdir);
    
    /* make new directory AKA mkdir */
    mkdir("/tmp/C_mkdir", S_IRWXU);
    printf("/tmp/C_mkdir created.\n");
    
    /* cd into new dir and pwd */
    chdir("/tmp/C_mkdir");
    getcwd(curdir, 255);
    printf("cwd: %s\n", curdir);
    
    return 0;
} 
