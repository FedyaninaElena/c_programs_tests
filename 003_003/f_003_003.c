int f_003_003(int a, int b, int c, int d)
{
  int n = 0;
  int arr[4] = {a, b, c, d};
  int max = arr[0];
  int pmax = arr[0];
  for (int i = 0; i < 4; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
      n = i;
    }
  }
  for (int j = 0; j < 4; j++)
  {
    if (j != n)
    {
      if (pmax < arr[j])
      {
        pmax = arr[j];
      }
    }
  }
  return pmax;
}
