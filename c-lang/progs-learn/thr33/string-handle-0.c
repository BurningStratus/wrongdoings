#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "Bober w sklepe! Ja perdole ....";
    int index, alpha, space, punct;
    alpha = space = punct = 0;
    
    index = 0;
    while (phrase[index])
    {
        if ( isalpha(phrase[index]) )
            alpha++;
        if ( isspace(phrase[index]) )
            space++;
        if ( ispunct(phrase[index]) )
            punct++;
        index++;
        
    }
    printf("Phrase: %s\nStats:\n", phrase);
    printf("%d alphabetic characters\n", alpha);
    printf("%d spaces\n", space);
    printf("%d punct symbols\n", punct);
    return 0;
}
