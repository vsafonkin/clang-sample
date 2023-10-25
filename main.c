#include <stdio.h>

int doSomething(void);
int runSomething(void);
int testSomething(void);

int main(void)
{
    int firstVar = 123;
    int secondVar = 231;
    int sum = firstVar + secondVar;
    printf("sum: %d\n", sum);
    doSomething();
    return 0;
}

int doSomething(void)
{
    printf("do something func\n");
    runSomething();
    return 123;
}

int runSomething(void) 
{
    printf("run something func\n");
    testSomething();
    return 456;
}

int testSomething()
{
    printf("test something func\n");
    return 789;
}
