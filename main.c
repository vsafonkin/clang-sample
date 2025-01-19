#include <stdio.h>

int main(void)
{
  printf("============\n");

  int nums[5] = {123, 456, 789, 444, 555};
  printf("%p\n", nums);
  printf("%p\n", nums + 1);
  printf("%p\n", &nums);
  printf("%p\n", &nums + 1);

  return 0;
}