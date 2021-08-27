#include <stdio.h>

float f_002_001(float a);

int main()
{
  float result_1 = f_002_001(2.4);
  printf("%f\n", result_1);
  float result_2 = f_002_001(-0.5);
  printf("%f", result_2);

  return 0;
}
