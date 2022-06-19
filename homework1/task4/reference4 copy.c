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

void rectangle_print(struct Rectangle r)
{
  printf("Rectangle:\n");
  printf(" length: %f\n", r.length);
  printf(" width:  %f\n", r.width);
}

int main()
{

  // rectangle with sides 'a' and 'b'
  struct Rectangle rect = {1.0, 2.0};
  rectangle_print(rect);

  // calculate and print area of rectangle
  double area = rectangle_area(rect);
  printf("area: %f\n", area);

  // calculate and print perimeter of rectangle
  double perimeter = rectangle_perimeter(rect);
  printf("perimeter: %f\n", perimeter);

  return 0;
}