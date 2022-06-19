#include <stdio.h>

struct Rectangle
{
  double length;
  double width;
};

double rectangle_area(struct Rectangle r)
{
  double area = r.length * r.width;
  return area;
}

double rectangle_perimeter(struct Rectangle r)
{
  double perimeter = 2 * r.length + 2 * r.width;
  return perimeter;
}

int main()
{

  // rectangle with sides 'a' and 'b'
  struct Rectangle rect = {1.0, 2.0};
  printf("length: %f\n", rect.length);
  printf("width: %f\n", rect.width);

  // calculate and print area of rectangle
  double area = rectangle_area(rect);
  printf("area: %f\n", area);

  // calculate and print perimeter of rectangle
  double perimeter = rectangle_perimeter(rect);
  printf("perimeter: %f\n", perimeter);

  return 0;
}