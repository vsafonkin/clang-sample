#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main(void) {
    int a = 17;
    int b = 31;
    printf("%s\n", "Hello, Xcode");
    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);    
    return EXIT_SUCCESS;
}