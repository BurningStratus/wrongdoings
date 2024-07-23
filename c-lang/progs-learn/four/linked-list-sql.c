#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct lili {
    int value;
    struct lili *next;
};
struct lili *first;
struct lili *current;

int menu(void);
void add(void);
void show(void);
void delrec(void);
struct lili *create(void);

/* main only handles input */
int main()
{
    /* init the variables */
    int choice='\0';
    first=NULL;
    
    while (choice != 'Q')
    { 
        choice=menu();
        switch (choice)
        {
            case 'S':
                show();
                break;
            case 'A':
                add();
                break;
            case 'R':
                delrec();
                break;
            case 'Q':
                break;
        }
    }
    return 0;
}

int menu(void)
{
    int ch;
    
    printf("S)how, A)dd, R)emove, Q)uit: ");
    ch=getchar();
    
    /* filter input */
    while (getchar() != '\n')
        ;
    return (toupper(ch));
}


void add(void)
{
    /* special case for the first item */
    if (first == NULL)
    {
        first=create();
        current=first;
    /* otherwise, find the last one */
    } else {
        current=first;
        /* find the null */
        while ((*current).next)
        {
            current=(*current).next;
        }
        (*current).next=create();
        current=(*current).next;
    }
    printf("Type a value: ");
    scanf("%d", &(*current).value);
    (*current).next=NULL;
    /* filter input */
    while (getchar() != '\n')
        ;
}

void show(void)
{
    int count=1;
    
    /* check if the list is empty */
    if (first == NULL)
    {
        puts("Nothing to show");
        return;
    }
    printf("All records: \n");
    current=first;

    /* print all recs until current=NULL */
    while (current)
    {
        printf("Record %d: %d\n", count, current->value);
        current=current->next;
        count++;
    }
}

/* delete a record from the list */
void delrec(void)
{
    /* save prev record */
    struct lili *previous;
    int r,c;
    
    /* check if the list is empty */
    if (first == NULL)
    {
        puts("Nothing to remove");
        return;
    }

    puts("Choose a record to remove: ");
    /* print the list */
    show();
    printf("Record #: ");
    scanf("%d", &r);
    /* filter the input */
    while (getchar() != '\n')
        ;
    c = 1;
    
    /* reset the list */
    current=first;
    /* initialize the previous ptr */
    previous=NULL;
    while (c != r)
    {
        previous=current;
        current=current->next;
        c++;
        /* bail if the list ends */
        if (current == NULL)
        {
            puts("Record not found");
            return;
        }
    }
    
    /* current now holds the record to delete */
    /* check if it is first */
    if (previous == NULL)
    {
        first=(*current).next;
    } else {
    /* if not, reset the next reference */
        (*previous).next=(*current).next;
    }
    printf("Record %d removed.\n", r);
    /* release the memory from deleted element */
    free(current);
}

/* create struct and return the pointer to it */
struct lili *create(void)
{
    struct lili *a;
    
    a = (struct lili *)malloc(sizeof(struct lili) * 1);
    if (a == NULL)
    {
        puts("Could not allocate memory.");
        exit(1);
    }
    return a;
}

