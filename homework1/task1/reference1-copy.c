#include <stdio.h>

int main()
{

  // rectangle with sides 'a' and 'b'
  double a = 1.0;
  double b = 2.0;
  printf("a: %f\n", a);
  printf("b: %f\n", b);

  // calculate and print area of rectangle
  double area = a * b;
  printf("area: %f\n", area);

  // calculate and print perimeter of rectangle
  double perimeter = 2 * a + 2 * b;
  printf("perimeter: %f\n", perimeter);

  return 0;
}