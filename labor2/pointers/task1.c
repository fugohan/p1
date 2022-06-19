#include <stdio.h> // printf

void swap_using_indices(int array[], int i, int j)
{
  int tmp = array[i];
  array[i] = array[j];
  array[j] = tmp;
}

// 'a': pointer to value which should be swapped
// 'b': pointer to value which should be swapped
void swap_using_pointers(int *a, int *b)
{
  // TODO 1: implement this function
  // TODO 2: call this function instead of 'swap_with_indices'
}

int main()
{
  int array[5] = {10, 20, 30, 40, 50};

  swap_using_indices(array, 0, 4);

  for (int i = 0; i != 5; ++i)
  {
    printf("%i \n", array[i]);
  }

  return 0;
}
