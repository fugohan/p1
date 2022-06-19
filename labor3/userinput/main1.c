#include <stdio.h> // scanf printf
#include <math.h> // NAN

int main()
{

  // using a single call to scanf 
  double arg1 = NAN;

  printf("enter float (%%lf):\n");
  printf(">");
  scanf("%lf", &arg1);
  printf("you entered: %lf\n", arg1);

  return 0;
}