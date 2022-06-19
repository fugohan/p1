#include <stdio.h>

double rectangle_area(double length, double width)
{
  double area = length * width;
  return area;
}

double rectangle_perimeter(double length, double width)
{
  double perimeter = 2 * length + 2 * width;
  return perimeter;
}

int main()
{

  // rectangle with sides 'a' and 'b'
  double a = 1.0;
  double b = 2.0;
  printf("a: %f\n", a);
  printf("b: %f\n", b);

  // calculate and print area of rectangle
  double area = rectangle_area(a, b);
  printf("area: %f\n", area);

  // calculate and print perimeter of rectangle
  double perimeter = rectangle_perimeter(a, b);
  printf("perimeter: %f\n", perimeter);

  return 0;
}