#include <stdio.h>  // printf
#include <stdlib.h> // rand, RAND_MAX

#define NUM_DATA 100

void init_random(int array[], int size, int min, int max)
{
  for (int n = 0; n < size; n = n + 1)
  {
    array[n] = (rand() / (RAND_MAX / (max - min + 1))) + min;
  }
}

void print_array(const int array[], int size)
{
  for (int n = 0; n < size; n = n + 1)
  {
    printf("array[%2i]=% i\n", n, array[n]);
  }
}

int find_if_equal(const int array[], int size, int value){
  for (int i =0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

int count_if_equal(const int array[], int size, int value){
  int count = 0;
  for (int i =0;i<size;i++){
    if(array[i]==value){
      count++;
    }
  }
  return count;
}

int main()
{

  // init with -1
  int data[NUM_DATA] = {-1};

  // init with random values bewtween 0 and 10
  init_random(data, NUM_DATA, 0, 10);

  // print
  print_array(data, NUM_DATA);

  int pos = find_if_equal(data,NUM_DATA,4);
  printf("Die Pos ist: %i\n", pos);
  int cou = count_if_equal(data,NUM_DATA,4);
  printf("SO viel: %i\n", cou);

  return 0;
}
