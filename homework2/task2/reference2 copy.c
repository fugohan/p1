#include <stdio.h> // printf
#include <math.h>  // cos

#define NUM_DATA 13
#define MATH_PI 3.1415

int main()
{

  // sampling interval
  double start = 0;
  double end = 2 * MATH_PI;

  // define arrays
  double x[NUM_DATA] = {0.0};
  double y[NUM_DATA] = {0.0};

  // sample interval
  double step = (end - start) / (NUM_DATA - 1);
  for (int n = 0; n < NUM_DATA; n = n + 1)
  {
    x[n] = start + step * n;
  }

  // sample function
  for (int n = 0; n < NUM_DATA; n = n + 1)
  {
    y[n] = cos(x[n]);
  }

  // print discrete functions
  for (int n = 0; n < NUM_DATA; n = n + 1)
  {
    printf("func( %f ) = % f\n", x[n], y[n]);
  }

  return 0;
}
