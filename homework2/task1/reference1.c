#include <stdio.h>

#define NUM_DATA 17

int main()
{

  // // init with 0.0
  // double data[NUM_DATA] = {0.0};

  // // init with sequence
  // for (int n = 0; n < NUM_DATA; n = n + 1){
  //   data[n] = n + 1;
  // }

  // // print all entries smaller 10
  // for (int n = NUM_DATA - 1; n >= 0; n = n - 1)
  // {
  //   if (data[n] >= 10)
  //   {
  //     continue;
  //   }
  //   else
  //   {
  //     printf("array[%5i] = %f\n", n, data[n]);
  //   }
  // }

  // return 0;

  double data[NUM_DATA] = {0.0};

  // printf("arraytest[%i] = %f\n", 16, data[16]);

  int i = NUM_DATA-1;

  while(i>0){
    data[i] = i+1; 
   
    if (data[i] < 10)
    {
      printf("array[%2i] = %f\n", i, data[i]); 
    }
    i--;
    
    
    
 
  }
  

  return 0;

}