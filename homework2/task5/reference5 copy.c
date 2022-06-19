#include <stdio.h>  // printf
#include <stdlib.h> // rand, RAND_MAX

#define NUM_DATA 10

void selectionsort(int array[], int size)
{
  for (int m = 0; m < size - 1; ++m)
  {
    int idx = m;
    for (int n = m + 1; n < size; ++n)
    {
      if (array[n] < array[idx]) // compare
      {
        idx = n;
      }
    }

    if (idx != m)
    {
      // swap
      int tmp = array[idx];
      array[idx] = array[m];
      array[m] = tmp;
    }
  }
}

void bubblesort(int array[], int size)
{
  for (int m = size - 1; m > 1; --m)
  {
    for (int n = 0; n < m; ++n)
    {
      if (array[n + 1] < array[n]) // compare
      {
        // swap
        int tmp = array[n];
        array[n] = array[n + 1];
        array[n + 1] = tmp;
      }
    }
  }
}

void init_random(int array[], int size, int min, int max)
{
  for (int n = 0; n < size; n = n + 1)
  {
    array[n] = (rand() / (RAND_MAX / (max - min + 1))) + min;
  }
}

void print_array(const int array[], int size)
{
  printf("[");
  for (int n = 0; n < size; n = n + 1)
  {
    printf(" %2i", array[n]);
  }
  printf("]\n");
}

int main()
{
  int data[NUM_DATA] = {-1};

  printf("bubblesort\n");
  init_random(data, NUM_DATA, 0, 10);
  print_array(data, NUM_DATA);
  bubblesort(data, NUM_DATA);
  print_array(data, NUM_DATA);

  printf("selectionsort\n");
  init_random(data, NUM_DATA, 0, 10);
  print_array(data, NUM_DATA);
  selectionsort(data, NUM_DATA);
  print_array(data, NUM_DATA);
}