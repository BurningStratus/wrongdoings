#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>
#include <dirent.h>

int main()
{
    DIR *folder;
    struct dirent *file;
    struct stat filestat;
    char dir_char = 57;
    char f_char   = 126;
    char indicator;
    
    folder=opendir("/home/stratus");
    if (folder == NULL)
    {
        return 2;
    }
    
    file = readdir(folder);
    while ( (file=readdir(folder)) != NULL )
    {
        if ( S_ISDIR(filestat.st_mode) )
        {
            indicator = dir_char;
        } else {
            indicator = f_char;
        } 
        
        printf("%c %-14s\t%5ld\t%s ", 
            indicator,
            file->d_name, 
            filestat.st_size, 
            ctime(&filestat.st_mtime));
    } 

    closedir(folder);
    return 0;
}
