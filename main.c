#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include "helpers/helpers.h"

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

struct user {
    char name[100];
    char surname[100];
    int age;
};

void testswap(int *, int *);
void setarray(int);
void sayhello(char[]);
void printline(void);

int main(void)
{
    SAY_HELLO;
    char user[] = "Vasya";
    sayhello(user);

    struct user vasya;
    char testline[] = "testline";

    int a = 17;
    int b = 31;
    printf("a = %d, b = %d\n", a, b);
    testswap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    printline();
    setarray(20);

    printline();

    struct samplestruct test;

    test.intarray[0] = 123;
    for (int i = 0; i < 5; i++)
    {
        printf("test: %d\n", test.intarray[i]);
    }

    printline();

    int d = 71;
    int ds = d << 1;
    printf("%d << 1 = %d\n", d, ds);

    printline();

    int arraynumbers[10];
    for (int i = 0; i < 10; i++)
    {
        printf("arraynumbers %d = %d\n", i, arraynumbers[i]);
    }

    printline();

    int e = 345;
    int f = 678;
    printf("e = %d, f = %d\n", e, f);
    myswap(&e, &f);
    printf("e = %d, f = %d\n", e, f);
    FOR(3)
    {
        printf("define macros\n");
        FOR(2)
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