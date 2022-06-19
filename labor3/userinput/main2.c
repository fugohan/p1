#include <stdio.h> // scanf printf
#include <math.h> // NAN

int main()
{

  // using 'scanf' combined with cleanup
  double arg1 = NAN;
  
  printf("enter float (%%lf):\n");
  printf(">");
  while (1 != (scanf("%lf", &arg1)))
  {
    scanf("%*[^\n]"); // invalid input: clear full line
    printf(">");
  }
  scanf("%*[^\n]"); // clear unmatched remainder of input line
  printf("you entered: %lf\n", arg1);

  return 0;
}