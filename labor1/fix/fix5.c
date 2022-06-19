#include <stdio.h>

double maximum(double a, double b)
{
  double max;
  if (a > max)
  {
    max = a;
  }
  if (b > max)
  {
    max = b;
  }
  return max;
}

int main()
{

  double a = 10.0;
  double b = 1.0;

  double max = maximum(a, b);
  printf("Maximum of [%f, %f] is %f\n", a, b, max);

  return 0;
}
