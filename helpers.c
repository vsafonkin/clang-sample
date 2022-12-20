#include <stdio.h>
#include "helpers/helpers.h"

void myswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap: a = %d, b = %d\n", *a, *b);
    return;
}

int getnumber()
{
    return 123;
}