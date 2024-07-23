#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

int main()
{
    const float amp=50;
    const float lambda=0.1;
    float graph,s,x;

    for (graph=-M_PI/2; graph<M_PI/2; graph+=lambda)
    {
        s = cos(graph);
        for (x=0; x<s*amp; x++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
