double add(double a, double b)
{
  double res = a + b;
  return res;
}

int main()
{
  int a = 10;
  int b = 15;
  int c = add(a, b);
  int d = add(a, c);

  ++d;

  return 0;
}
