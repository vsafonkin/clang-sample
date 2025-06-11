#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int addNumbers(int, int);
int randNum(int);

int main(void) {
  int a = 123;
  int b = 231;
  int result = addNumbers(a, b);
  printf("result: %d\n", result);

  double d, res;
  d = 4;
  res = sqrt(d);
  printf("test: %f\n", res);
  printf("test: %f\n", pow(3, 4));

  return 0;
}

int addNumbers(int a, int b) {
  int out = a + b;
  return out;
}

int randNum(int limit) { return rand() % limit; }
