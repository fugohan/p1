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
  printf(" length:     %f\n", r.length);
  printf(" width:      %f\n", r.width);
  printf(" area:       %f\n", rectangle_area(r));
  printf(" perimeter:  %f\n", rectangle_perimeter(r));
}

int main()
{

  struct Rectangle r1 = {1.0, 2.0};
  struct Rectangle r2 = {2.0, 1.0};
  struct Rectangle r3 = {1.1, 2.0};

  rectangle_print(r1);
  rectangle_print(r2);
  rectangle_print(r3);

  return 0;
}