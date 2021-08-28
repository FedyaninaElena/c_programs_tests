#include <stdio.h>

float f_003_004 (int side, int radius);

int main()
{
  float result_1 = f_003_004(10, 100);
  printf("%f\n", result_1);
  float result_2 = f_003_004(200, 100);
  printf("%f\n", result_2);
  float result_3 = f_003_004(10, 150);
  printf("%f", result_3);

  return 0;
}
