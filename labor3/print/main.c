#include <stdio.h> // printf, sprintf, fprintf, fopen, fclose

// TODO1: discuss: why does 'sprintf' require to increment the "writing
// position", why is this not required for 'fprintf'

// TODO2: remove all for-loops

// TODO3: adapt formatting to not truncate "small numbers" to '0.000000'

int main()
{

  double array[3] = {1e-1, 1e-5, 1e-10};

  { // printf: print to console
    printf("array = [ ");
    for (int i = 0; i != 3; ++i)
    {
      printf("%e ", array[i]);
    }
    printf("]\n");
  }

  {
    // fprintf: print to file stream
    FILE *stream = fopen("array.txt", "w");
    fprintf(stream, "array = [ ");
    for (int i = 0; i != 3; ++i)
    {
      fprintf(stream, "%f ", array[i]);
    }
    fprintf(stream, "]");
    fclose(stream);
    printf("file array.txt has been written.\n");
  }

  {
    // sprintf: print to string
    char string[256] = {'\0'};
    char *iter = string;
    iter += sprintf(iter, "array = [ ");
    for (int i = 0; i != 3; ++i)
    {
      iter += sprintf(iter, "%f ", array[i]);
    }
    iter += sprintf(iter, "]");
    printf("%s\n", string);
  }
}