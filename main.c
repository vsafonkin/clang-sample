#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("============\n");

  char *name = "Alice";
  printf("%s\n", name);

  int len = strlen(name);
  printf("%d\n", len);

  return 0;
}
