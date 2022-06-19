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

double cuboid_volume(double length, double width, double height){
  return length*width*height;
}

double cuboid_surface(double length, double width, double height){
  return 2*(length*width+ length*height+width*height);
}

int main()
{

  // rectangle with sides 'a' and 'b'
  double a = 1.0;
  double b = 2.0;
  double c=3.0;
  printf("a: %f\n", a);
  printf("b: %f\n", b);
  printf("c: %f\n", c);
  // calculate and print area of rectangle
  double area = cuboid_surface(a, b,c);
  printf("area: %f\n", area);

  // calculate and print perimeter of rectangle
  double perimeter = cuboid_volume(a, b,c);
  printf("perimeter: %f\n", perimeter);

  return 0;
}