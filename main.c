#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("============\n");

  char str[] = "hello, clion";
  printf("str length: %lu\n", sizeof(str) / sizeof(char));
  printf("%s\n", str);

  int nums[4] = {123, 456, 789, 444};
  printf("%p\n", nums);
  printf("%p\n", nums + 1);
  printf("%d\n", *(&nums + 1) - nums);
  printf("============\n");
  printf("nums length: %lu\n", sizeof(nums) / sizeof(int));
  printf("nums pointer: %p\n", &nums);
  printf("nums pointer: %p\n", &nums + 1);

  int const *ptr = &nums[0];
  int const *item2 = &nums[1];
  int const *item3 = &nums[2];
  printf("ptr value: %p\n", ptr);
  printf("ptr value: %p\n", item2);
  printf("ptr value: %p\n", item3);
  int const *n = &nums;
  printf("n: %d\n", *n);

  char *names[] = {"Alice", "Bob", "Mike"};
  printf("%p\n", names);

  return 0;
}