#include <math.h>
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

int rectangle_equal(struct Rectangle a, struct Rectangle b)
{
  if (a.length == b.length && a.width == b.width)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int rectangle_equal_area(struct Rectangle a, struct Rectangle b,
                         double tolerance)
{
  if (fabs(rectangle_area(a) - rectangle_area(b)) < tolerance)
  {
    return 1;
  }
  else
  {
    return 0;
  }
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

  double tolerance = 0.3;

  int r1r2_equal_area = rectangle_equal_area(r1, r2, tolerance);
  printf("r1r2_equal_area: %i\n", r1r2_equal_area);

  int r1r3_equal_area = rectangle_equal_area(r1, r3, tolerance);
  printf("r1r3_equal_area: %i\n", r1r3_equal_area);

  return 0;
}