#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


enum day { sun, mon, tue, wed, thu, fri, sat };

void testswap(int *, int *);

void sayhello() {
    printf("hello!\n");
}

void printline() {
    printf("-----------------\n");
}

int main(void) {
    sayhello();
    int a = 17;
    int b = 31;
    int c = 5;
    bool flag = false;
    printf("a = %d, b = %d\n", a, b);
    testswap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    printline();
    printf("Day: %d\n", sun);
    return EXIT_SUCCESS;
}


void testswap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap: a = %d, b = %d\n", *a, *b);
    return;
}
