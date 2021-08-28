#include <stdio.h>

int f_003_003(int a, int b, int c, int d);

int main()
{
  int result_1 = f_003_003(-10, 0, -6, -2);
  printf("%d\n", result_1);
  int result_2 = f_003_003(-1, 0, -6, -2);
  printf("%d\n", result_2);
  int result_3 = f_003_003(-10, -1, -6, -2);
  printf("%d\n", result_3);
  int result_4 = f_003_003(-10, 0, 0, -2);
  printf("%d\n", result_4);
  int result_5 = f_003_003(-10, 0, -6, -1);
  printf("%d\n", result_5);

  return 0;
}
