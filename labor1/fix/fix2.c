#include <stdio.h>

#define N 10

int main()
{

  // init all zeros
  double vector[N] = {0.0};

  // init with range 0, 1, ...
  int n = 0;
  while (n < N)
  {
    n = n + 1;
    vector[n] = n;
  }

  // print
  int m = 0;
  while (m < N)
  {
    m = m + 1;
    printf("vector[%i]=%f\n", m, vector[m]);
  }

  return 0;
}
