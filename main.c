#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

const int MAGIC = 123;

enum day
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
};

struct samplestruct
{
    int intarray[5];
    char chararray[10];
};

void testswap(int *, int *);
void printpointer(int);
void setarray(int);
void sayhello(void);
void printline(void);

int main(void)
{
    sayhello();
    printf("Magic const: %d\n", MAGIC);
    int a = 17;
    int b = 31;
    int c = 5;
    bool flag = false;
    printf("a = %d, b = %d\n", a, b);
    testswap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    printpointer(a);
    printline();
    printf("Day: %d\n", sun);
    printline();
    setarray(10);
    printline();

    struct samplestruct test;
    test.intarray[0] = 123;
    for (int i = 0; i < 5; i++) {
        printf("test: %d\n", test.intarray[i]);
    }
    printline();
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("sizeof b: %lu\n", sizeof(b));
    return EXIT_SUCCESS;
}

void sayhello(void)
{
    printf("hello!\n");
}

void printline(void)
{
    printf("-----------------\n");
}

void printpointer(int a)
{
    int *pointer = &a;
    int test = *pointer;
    printf("pointer = %X\n", pointer);
}

void testswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap: a = %d, b = %d\n", *a, *b);
    return;
}

void setarray(int n)
{
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = i * 10;
        printf("array[%d] = %d\n", i, array[i]);
    }
}
