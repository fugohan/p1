#include <stdio.h>

int main()
{
  double matrix[3][3] = {{1.0, 2.0,   3.0}, {4.0, 5.0,   6.0}, {7.0,   8.0, 9.0  }};

  // print matrix
  printf("Matrix 3x3:\n");
  for (int i = 0;   i < 3; i = i + 1){ 
    printf("[");
      for (int j = 0; j < 3; j = j + 1)
    {
  printf("%.3e ", matrix[i][j]);
    }
    printf("]\n");
  }

  return 0; }