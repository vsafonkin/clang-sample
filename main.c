#include <stdio.h>

int doSomething(void);
int runSomething(void);

int main(void) {
  int a = 253;
  int b = 167;
  doSomething();
  int c = 123;
  int d = 231;
  int sum = a * b + c + d;
  printf("%d\n", sum);
  return 0;
}

int doSomething(void) {
  int a = 113;
  int b = 114;
  runSomething();
  int c = 115;
  int d = 117;
  int sum = a + b + c + d;
  return sum;
}

int runSomething(void) {
  int e = 999;
  return e;
}
