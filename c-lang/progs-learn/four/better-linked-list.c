#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ITEMS 5

struct stk {
    char symbol[5];
    int quantity;
    float price;
    struct stk *next;
};

struct stk *make_struct(void);
void fill_struct(struct stk *a, int c);
void print_struct(struct stk *a);

int main()
{
    struct stk *first;
    struct stk *current;
    int x;
    
    /* make an ITEMS sized linked list */
    for (x=0; x<ITEMS; x++)
    {
        if (x == 0)
        {
            first=make_struct();
            current=first;
        } 
        else
        {
            (*current).next=make_struct();
            current=(*current).next;
        }
        fill_struct(current, x+1);
    }
    /* cap the list */
    (*current).next = NULL;
    
    /* print the database */
    printf("Investment portfolio: \n");
    printf("Symbol\tShares\tPrice\tValue\n");
    current=first;
    
    while (current)
    {
        print_struct(current);
        current=(*current).next;
    }
    
    return 0;
}

/* alloc mem for struct */
struct stk *make_struct(void)
{
    struct stk *a;
    a =(struct stk *)malloc(sizeof(struct stk)*1);
    if (a == NULL)
    {
        puts("struct malloc err");
        exit(1);
    }
    return a;
}

/* fill the struct w/ data */
void fill_struct(struct stk *a, int c)
{
    printf("ITEM #%d/%d: \n", c, ITEMS);
    printf("STOCK SYMBOL: ");
    scanf("%s", &(*a).symbol);
    printf("AMT OF SHARES: ");
    scanf("%d", &(*a).quantity);
    printf("PRICE OF SHARES: ");
    scanf("%f", &(*a).price);
}

void print_struct(struct stk *a)
{
    printf("%-6s\t%5d\t%.2f\t%.2f\n",
            (*a).symbol,
            (*a).quantity,
            (*a).price,
            (*a).price * (*a).quantity);
}
