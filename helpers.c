#include "helpers.h"

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("swap: a = %d, b = %d\n", a, b);
}