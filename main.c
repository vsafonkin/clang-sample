#include <stdio.h>

int main(void)
{
  unsigned char c;
  c = 254;
  c = c + 5;
  printf("decimal c: %d\n", c);

  long double n;
  printf("size: %lu\n", sizeof(n));

  return 0;
}
