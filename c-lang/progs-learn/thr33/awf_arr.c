#include <stdio.h>

int main() {
    int h1, h2, h3;
    
    printf("Your hi score #1: ");
    scanf("%d", &h1);
    printf("Your hi score #2: ");
    scanf("%d", &h2);
    printf("Your hi score #3: ");
    scanf("%d", &h3);
    
    printf("\nYour three high scores: \n");
    printf("Your hi score #1: %d \n", h1);
    printf("Your hi score #2: %d \n", h2);
    printf("Your hi score #3: %d \n", h3);
    return(0);
}
