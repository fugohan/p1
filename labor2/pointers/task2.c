#include <stdio.h> // printf

// TODO:
// 1. discuss with your neighbours how this functions "works"
// 2. insert comments describing each of the arguments precisely
void init_range_using_indices(double array[], int begin, int end, double value)
{
  for (int n = begin; n != end; ++n)
  {
    array[n] = value;
  }
}

// TODO:
// 1. discuss with your neighbours how this functions "works"
// 2. insert comments describing each of the arguments precisely
void init_range_using_pointers(double *begin, double *end, double value)
{
  double *iter = begin;
  while (iter != end)
  {
    *iter = value;
    ++iter;
  }
}

#define NUM_DATA 10

int main()
{
  double array[NUM_DATA] = {0.0};

  double init = 7;
  int begin = 3;
  int end = 7;

  // call using array and indices
  init_range_using_indices(array, begin, end, init);

  // call using 'direct pointer arithmetic'
  init_range_using_pointers(array + begin, array + end, init * 10);

  // call using element access '[]' combined with the address operator '&'
  init_range_using_pointers(&array[begin], &array[end], init * 100);

  for (int n = 0; n != NUM_DATA; ++n)
  {
    printf("%f\n", array[n]);
  }

  return 0;
}
