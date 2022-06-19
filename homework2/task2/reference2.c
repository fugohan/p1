#include <stdio.h> // printf
#include <math.h>  // cos

#define NUM_DATA 13
#define MATH_PI 3.1415


void sample_interval(double x[], int size, double start, double end){
  double step = (end - start) / (NUM_DATA - 1);
  for (int n = 0; n < NUM_DATA; n = n + 1)
  {
    x[n] = start + step * n;
  }
}

void sample_function(const double x[], double y[], int size){
 // sample function
  for (int n = 0; n < NUM_DATA; n = n + 1)
  {
    y[n] = cos(x[n]);
  }

}

void print_discrete_function(const double x[], const double y[], int size){
  // print discrete functions
  for (int n = 0; n < NUM_DATA; n = n + 1)
  {
    printf("func( %f ) = % f\n", x[n], y[n]);
  }
}

int main()
{

  // sampling interval
  double start = 0;
  double end = 2 * MATH_PI;

  // define arrays
  double x[NUM_DATA] = {0.0};
  double y[NUM_DATA] = {0.0};

  // // sample interval
  // double step = (end - start) / (NUM_DATA - 1);
  // for (int n = 0; n < NUM_DATA; n = n + 1)
  // {
  //   x[n] = start + step * n;
  // }
  sample_interval(x,NUM_DATA,start,end);

  // // sample function
  // for (int n = 0; n < NUM_DATA; n = n + 1)
  // {
  //   y[n] = cos(x[n]);
  // }
  sample_function(x,y,NUM_DATA);
  // // print discrete functions
  // for (int n = 0; n < NUM_DATA; n = n + 1)
  // {
  //   printf("func( %f ) = % f\n", x[n], y[n]);
  // }
  print_discrete_function(x,y,NUM_DATA);

  return 0;
}
