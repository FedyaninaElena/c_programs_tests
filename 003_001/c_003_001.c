#include <stdio.h>

int f_003_001(int a, int b);

int main()
{
  int result_1 = f_003_001(125, 323);
  printf("%d\n", result_1);
  int result_2 = f_003_001(0, 323);
  printf("%d\n", result_2);
  int result_3 = f_003_001(125, 0);
  printf("%d", result_3);

  return 0;
}
