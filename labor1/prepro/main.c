#include <stdio.h>
#include <math.h>

#define PI 3.1415
#define N 10
#define DEBUG 0

int main()
{
  printf("Preprocessor define 'PI' = %f\n", PI);
  printf("Preprocessor define 'N' = %i\n", N);
  printf("Preprocessor define 'DEBUG' = %i\n", N);

  double data[N] = {0.0};
  for (int n = 0; n < N; n = n + 1)
  {
    data[n] = n * PI;
  }  

  double res[N] = {0.0};
  for (int n = 0; n < N; n = n + 1)
  {
    res[n] = cos(data[n]);
  }


  // print
  for (int n = 0; n < N; n = n + 1)
  {
#if DEBUG == 1      
    printf("res[%i]=%.16e\n", n, res[n]);
#else
    printf("res[%i]=%f\n", n, res[n]);
#endif    
  }

}