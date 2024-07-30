#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[32];
    int age;
};

typedef struct person human;

void fill_struct(void);
void print_struct(void);

const double PI = 3.14;
