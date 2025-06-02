#include <stdio.h>

int addNumbers(int, int);

int main(void) {
    int a = 123;
    int b = 231;
    int result = addNumbers(a, b);
    printf("result: %d\n", result);

    return 0;
}

int addNumbers(int a, int b) {
    int out = a + b;
    return out;
}
