#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include "helpers.h"

#define BEGIN_BLOCK {
#define END_BLOCK }
#define SAY_HELLO printf("Hello!\n");
#define SAY_GOODBYE printf("Goodbye!\n");
#define FOR_10 for (int i = 0; i < 10; i++)
#define FOR(n) for (int i = 0; i < n; i++)

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
void setarray(int);
void sayhello(char[]);
void printline(void);
void run(void);

int main(void)
{
    SAY_HELLO;
    char user[] = "USER";
    sayhello(user);
    printf("Magic const: %d\n", MAGIC);
    int a = 17;
    int b = 31;
    int c = 5;
    bool flag = false;
    printf("a = %d, b = %d\n", a, b);
    testswap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    printline();
    printf("Day: %d\n", sun);
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
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("sizeof b: %lu\n", sizeof(b));
    printline();

    int d = 71;
    int ds = d << 1;
    printf("a = %d, b = %d\n", d, ds);

    printline();

    int arraynumbers[10];
    for (int i = 0; i < 10; i++)
    {
        printf("arraynumbers %d = %d\n", i, arraynumbers[i]);
    }

    char vasya[] = "Vasya";
    sayhello(vasya);
    sayhello("test");
    printline();
    int e = 345;
    int f = 678;
    printf("e = %d, f = %d\n", e, f);
    myswap(&e, &f);
    printf("e = %d, f = %d\n", e, f);
    if (1 > 0)
        BEGIN_BLOCK;
    printf("block identifiers\n");
    END_BLOCK;
    SAY_GOODBYE;
    printline();
    FOR_10
    {
        printf("test\n");
        printf("*****\n");
    }
    printline();
    FOR(5)
    {
        printf("define macros\n");
        FOR(3)
        {
            printf(">>>\n");
        }
    }
    printline();
    run();
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

void run(void)
{
    printf("run...\n");
}
