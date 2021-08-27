int f_003_002(int a, int b, int c, int d)
{
  int n, m;

  if (a>b){
    n = a;
  }
  else{
    n = b;
  }
  if (c>d){
    m = c;
  }
  else{
    m = d;
  }
  if (n>m){
    return n;
  }
  else{
    return m;
  }
}
