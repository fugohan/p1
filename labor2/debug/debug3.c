#include <stdio.h> // printf

struct Coord
{
  int x;
  int y;
  int z;
};

struct Coord add(struct Coord a, struct Coord b)
{
  struct Coord res;
  res.x = a.x + b.x;
  res.y = a.y + b.y;
  res.z = a.z + b.z;
  return res;
}

int main()
{
  struct Coord a = {1, 2, 3};
  struct Coord b = {3, 2, 1};
  struct Coord c = add(a, b);

  struct Coord array[5] = {{0, 0, 0}};

  for (int i = 0; i < 5; ++i)
  {
    array[i].x = i * 1000;
    array[i].y = i * 1000;
    array[i].z = i * 1000;
  }

  c = array[0]; // use unused variables
  array[0] = c; // use unused variables

  return 0;
}
