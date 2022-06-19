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

void print_array_stats(const double array[], int size){
  double low;
  double max; 
  double av;
  for (int i=0;i<size;i++){
    av += array[i];
    if(i == 0){
      low = array[i];
      max = array[i];
      continue;
    }
    if(array[i]<low){
      low =array[i];
    }
    if(array[i]>max){
      max =array[i];
    }
  }
  printf("MY LOW num is : %f\n", low);
  printf("MY MAX num is : %f\n", max);
  printf("MY AVG num is : %f\n", (av/size));

}

int main()
{

  // init with 0.0
  double data[NUM_DATA] = {0.0};

  // init with random numbers between 10 and 20
  init_random(data, NUM_DATA, 10.0, 20.0);

  // print
  // print_array(data, NUM_DATA);
  print_array_stats(data,NUM_DATA);
  return 0;
}
