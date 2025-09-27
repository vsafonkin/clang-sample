#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char c;
  c = 0x41;
  c = 0b01000001;
  c = 0b00111111;
  c = 0x3f;
  char* s;
  s = "\u026E";
  printf("char: %c\n", c);
  printf("s: %c\n", *s);

  return 0;
}
