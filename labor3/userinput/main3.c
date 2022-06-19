#include <stdio.h> // scanf printf
#include <math.h> // NAN

#define BUFFER_SIZE 5


int main()
{
  char buffer[BUFFER_SIZE];

  // using 'fgets' and a subsequent 'sscanf'
  double arg1 = NAN;

  printf("enter float (%%lf):\n");
  do
  {
    printf(">");
    fgets(buffer, BUFFER_SIZE, stdin);
  } while (1 != sscanf(buffer, "%lf", &arg1));
  printf("you entered: %lf\n", arg1);

  return 0;
}