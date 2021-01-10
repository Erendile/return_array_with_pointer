#include <stdio.h>
#include <stdlib.h>
#define    COUNT    4
char* operations[COUNT] = {"x + y = ","x - y = ","x * y = ","x / y = "};

int* func(int* x, int* y);

int main()
{
    int x = 10,  y = 5;
    for(int i = 0; i < COUNT; i++)
        printf("%s%d\n", operations[i], func(&x, &y)[i]);

    return 0;
}

int* func(int* x, int* y)
{
    static int results[COUNT];
    for(int i = 0; i < COUNT; i++)
    {
        if(i == 0)
            results[i] = *x + *y;
        if(i == 1)
            results[i] = *x - *y;
        if(i == 2)
            results[i] = *x * *y;
        if(i == 3)
            results[i] = *x / *y;
    }
    return results;
}
/*
output:
x + y = 15
x - y = 5
x * y = 50
x / y = 2
*/
