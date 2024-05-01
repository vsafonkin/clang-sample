#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define line printf("-----\n");

int counter();

int main(void) {
  short int si;
  printf("short int value: %d, size: %lu\n", si, sizeof(si));
  line;
  int d;
  printf("int value: %d, size: %lu\n", d, sizeof(d));
  line;
  long int li;
  printf("long int value: %ld, size: %lu\n", li, sizeof(li));
  line;
  char ch = 'a';
  printf("char value: %c, size: %lu\n", ch, sizeof(ch));
  return EXIT_SUCCESS;
}

int counter() {
  static int counter = 0;
  counter++;
  printf("counter: %d\n", counter);
  return counter;
}
