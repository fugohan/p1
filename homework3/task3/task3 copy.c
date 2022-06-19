#include <stdio.h> // printf

#define N 10

void print_array(const char str[], int size)
{
  printf("print_array  = [");
  for (int i = 0; i != size; ++i)
  {
    printf("'%c (%i)' ", str[i], str[i]);
  }
  printf("]\n");
}

// TODO: implement 'compare'
int compare(const char *a, const char *b)
{
  return 0;
}

// TODO: implement 'compare_n'
int compare_n(const char *a, const char *b, int count)
{
  return 0;
}

int main()
{

  { // Test: equal strings
    char a[N] = "test";
    char b[N] = "test";
    int count = 3;
    printf("%i = compare(\"%s\",\"%s\")\n", compare(a, b), a, b);
    printf("%i = compare_n(\"%s\",\"%s\",%i)\n", compare_n(a, b, count), a, b,
           count);
    printf("\n");
  }
  { // Test: unequal strings a < b
    char a[N] = "test";
    char b[N] = "test 2";
    int count = 4;
    printf("%i = compare(\"%s\",\"%s\")\n", compare(a, b), a, b);
    printf("%i = compare_n(\"%s\",\"%s\",%i)\n", compare_n(a, b, count), a, b,
           count);
    printf("\n");
  }
  { // Test: unequal strings a > b
    char a[N] = "test 3";
    char b[N] = "test 2";
    printf("%i = compare(\"%s\",\"%s\")\n", compare(a, b), a, b);
    printf("\n");
  }

  return 0;
}
