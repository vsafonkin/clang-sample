#include <stdio.h>

int main(void)
{
  printf("============\n");
  int n = 123456789;
  short k = (short)n;

  printf("%d %d\n", n, k);

  return 0;
}