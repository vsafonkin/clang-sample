#include <stdio.h>
#include <stdlib.h>


void testswap(int *, int *);

void test() {
    printf("test function\n");
}

int main(void) {
    test();
    int a = 17;
    int b = 31;
    int c = 5;
    printf("%s\n", "Hello");
    printf("a = %d, b = %d\n", a, b);
    testswap(&a, &b);
    printf("a = %d, b = %d\n", a, b);    
    return EXIT_SUCCESS;
}


void testswap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap: a = %d, b = %d\n", *a, *b);
    return;
}
