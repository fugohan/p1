#include <stdio.h> // printf, fscanf, sscanf, fopen, fclose
#include <math.h>  // NAN

// TODO1: change the input file and the input string such that the conversion fails

// TODO2: discuss what the return value of the scanf-functions indicates, and why it should always be checked

int main()
{

  {
    // fscanf: scan from file stream
    double array[3] = {NAN, NAN, NAN};
    FILE *stream = fopen("array.txt", "r");
    int num_matches = fscanf(stream, "array = [ %lf %lf %lf ]\n", &array[0],
                             &array[1], &array[2]);
    fclose(stream);
    printf("num_matches = %i\n", num_matches);
    printf("array = [ %e %e %e ]\n", array[0], array[1], array[2]);
  }

  {
    // sscanf: scan from string
    double array[3] = {-1, -1, -1};
    char string[256] = "array = [ 1e-1 1e-5 1e-10 ]";

    int num_matches = sscanf(string, "array = [ %lf %lf %lf ]\n", &array[0],
                             &array[1], &array[2]);

    printf("num_matches = %i\n", num_matches);
    printf("array = [ %e %e %e ]\n", array[0], array[1], array[2]);
  }
}