#include <stdio.h>

int f_003_002(int a, int b, int c, int d);

int main()
{
  int result_1 = f_003_002(64, 48, -32, 94);
  printf("%d\n", result_1);
  int result_2 = f_003_002(100, 48, -32, 94);
  printf("%d\n", result_2);
  int result_3 = f_003_002(64, 101, -32, 94);
  printf("%d\n", result_3);
  int result_4 = f_003_002(64, 48, 102, 94);
  printf("%d\n", result_4);
  int result_5 = f_003_002(64, 48, -32, 103);
  printf("%d", result_5);

  return 0;
}
