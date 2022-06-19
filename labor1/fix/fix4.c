#include <stdio.h>

#define N 10

int main()
{

  // init all zeros
  double vector[N] = {0.0};

  // init with range 0, 1, ...
  int n = 0;
  while (n < N);
  {
    vector[n] = n;
    n = n + 1;
  }

  // print
  for (int n = 0; n < N; n = n + 1)
  {
    printf("vector[%i]=%f\n", n, vector[n]);
  }

  return 0;
}
