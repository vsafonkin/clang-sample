#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include "helpers.h"

#define SAY_HELLO printf("Hello!\n");
#define FOR(n) for (int i = 0; i < n; i++)

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
void setarray(int);
void sayhello(char[]);
void printline(void);

int main(void)
{
    SAY_HELLO;
    char user[] = "USER";
    sayhello(user);
    int a = 17;
    int b = 31;
    int c = 5;
    bool flag = false;
    printf("a = %d, b = %d\n", a, b);
    testswap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    printline();
    setarray(10);
    printline();

    struct samplestruct test;
    test.intarray[0] = 123;
    for (int i = 0; i < 5; i++)
    {
        printf("test: %d\n", test.intarray[i]);
    }
    printline();
    printf("sizeof b: %lu\n", sizeof(b));

    int d = 71;
    int ds = d << 1;
    printf("%d << 1 = %d\n", d, ds);

    printline();

    int arraynumbers[10];
    for (int i = 0; i < 10; i++)
    {
        printf("arraynumbers %d = %d\n", i, arraynumbers[i]);
    }

    char vasya[] = "Vasya";
    sayhello(vasya);
    printline();
    int e = 345;
    int f = 678;
    printf("e = %d, f = %d\n", e, f);
    myswap(&e, &f);
    printf("e = %d, f = %d\n", e, f);
    FOR(5)
    {
        printf("define macros\n");
        FOR(3)
        {
            printf(">>>\n");
        }
    }
    return EXIT_SUCCESS;
}

void sayhello(char str[])
{
    printf("hello, %s!\n", str);
}

void printline(void)
{
    printf("-----\n");
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