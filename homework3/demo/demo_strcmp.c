#include <stdio.h>  // printf
#include <string.h> // strcmp, strncmp

// https://en.cppreference.com/w/c/string/byte/strcmp
// https://en.cppreference.com/w/c/string/byte/strncmp

#define N 20

int main()
{
  char a[N] = "test";
  char b[N] = "test 3";
  int count = 3;
  printf("%i = strcmp(\"%s\",\"%s\")\n", strcmp(a, b), a, b);
  printf("%i = strcmp(\"%s\",\"%s\")\n", strcmp(b, a), b, a);
  printf("%i = strncmp(\"%s\",\"%s\",%i)\n", strncmp(a, b, count), a, b, count);
}