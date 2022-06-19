#include <stdio.h>

#define SOL 0 //0 führt neues aus 1 altes!  

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


struct Cuboid {
  double length;
  double width;
  double height;
};

double cuboid_volume(struct Cuboid c){
  double volume = c.length * c.width * c.height;
  return volume;
}

double cuboid_surface(struct Cuboid c){
  double surface = 2*(c.length*c.height+c.height*c.width+c.length*c.width);
  return surface; 
}


int main()
{
  #if SOL
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
  #endif
  ////////////////////////////////////////////////

  struct Cuboid cube = {1.0, 2.0, 3.0};
  printf("length: %f\n", cube.length);
  printf("width: %f\n", cube.width);
  printf("height: %f\n", cube.height);


  double vol = cuboid_volume(cube);
  printf("area: %f\n", vol);

  double surface = cuboid_surface(cube);
  printf("Surface: %f\n", surface);
  return 0;


}