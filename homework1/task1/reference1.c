#include <stdio.h>

int main()
{

  // rectangle with sides 'a' and 'b'
  double a = 1.0;
  double b = 2.0;
  double c = 3.0;

  printf("a: %f\n", a);
  printf("b: %f\n", b);
  printf("c: %f\n", c);
  // calculate and print area of rectangle
  double area = a * b *c;
  printf("Volume: %f\n", area);

  // calculate and print perimeter of rectangle
  double perimeter = 2*(a*b+b*c+a*c);
  printf("surface: %f\n", perimeter);

  return 0;
}