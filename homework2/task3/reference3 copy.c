#include <stdio.h>  // printf
#include <stdlib.h> // rand, RAND_MAX

#define NUM_DATA 30

void init_random(double array[], int size, double min, double max)
{
  for (int n = 0; n < size; n = n + 1)
  {
    array[n] = (rand() / (RAND_MAX / (max - min))) + min;
  }
}

void print_array(const double array[], int size)
{
  for (int n = 0; n < size; n = n + 1)
  {
    printf("array[%2i]=%f\n", n, array[n]);
  }
}

int main()
{

  // init with 0.0
  double data[NUM_DATA] = {0.0};

  // init with random numbers between 10 and 20
  init_random(data, NUM_DATA, 10.0, 20.0);

  // print
  print_array(data, NUM_DATA);

  return 0;
}
