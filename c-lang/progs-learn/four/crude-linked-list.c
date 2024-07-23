#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct stk {
        char symbol[5];
        int quantity;
        float price;
        struct stk *next;
    };
    struct stk *first;
    struct stk *current;
    
    
    /* allocate the structure */
    first = (struct stk*)malloc(sizeof(struct stk) * 1);
    if (first == NULL)
    {
        return 1;
    }
    /* set the base */
    current=first;
    
    /* assign structure data */
    strcpy(current->symbol, "GOOG");
    (*current).quantity = 26;
    (*current).price = 1337.22;
    
    /* allocate the next struct */
    (*current).next = (struct stk *)malloc(sizeof(struct stk)*1);
    if ((*current).next == NULL)
    {
        return 1;
    }
    
    /* reference the new struct */
    current = (*current).next;

    strcpy((*current).symbol, "MSOF");
    (*current).quantity = 100;
    (*current).price = 14;
    
    /* print the resulting database */
    printf("Investment portfolio: \n");
    printf("Symbol\tShares\tPrice\tValue\n");
    
    current=first;
    while (current)
    {
        printf("%-6s\t%5d\t%.2f\t%.2f\n",
                    current->symbol,
                    (*current).quantity,
                    (*current).price,
                    (*current).quantity * (*current).price);
        current=current->next;
    }
    return 0;
}
