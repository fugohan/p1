#include <stdio.h>  // printf
#include <string.h> // strlen

// https://en.cppreference.com/w/c/string/byte/strlen

#define N 25

void print_array_as_int(const char str[], int size)
{
  printf("array (ints) = [");
  for (int i = 0; i != size; ++i)
  {
    printf("'%i' ", str[i]);
  }
  printf("]\n");
}

void print_array(const char str[], int size)
{
  printf("array (chars)= [");
  for (int i = 0; i != size; ++i)
  {
    printf("'%c' ", str[i]);
  }
  printf("]\n");
}

int main()
{
  {
    printf("##### Test: 'regular' null-terminated string:\n");
    char str[N] = "Hallo! Welt!";
    print_array(str, N);
    print_array_as_int(str, N);
    printf("str = [%s]\n", str);
    printf("\n");
  }

  {
    printf(
        "##### Test: null-terminated string with intermediate ' ' (space):\n");
    char str[N] = "Welt! Unterwelt! Keller!";
    print_array(str, N);
    printf("str      = [%s]\n", str);
    printf("str + 2  = [%s]\n", str + 2);
    printf("str + 6  = [%s]\n", str + 6);
    printf("str + 17 = [%s]\n", str + 17);
    printf("\n");
  }

  {
    printf(
        "##### Test: null-terminated string with intermediate '\\0' (null):\n");
    char str[N] = "Welt!\0Unterwelt!\0Keller!";
    print_array(str, N);
    printf("str      = [%s]\n", str);
    printf("str + 2  = [%s]\n", str + 2);
    printf("str + 6  = [%s]\n", str + 6);
    printf("str + 17 = [%s]\n", str + 17);
    printf("\n");
  }

  {
    printf("##### Test: length of a null-terminated strings:\n");
    char str[N] = "Welt!\0Unterwelt!\0Keller!";
    print_array(str, N);
    printf("length(str)    = %li  (%s)\n", strlen(str), str);
    printf("length(str+2)  = %li  (%s)\n", strlen(str + 2), str + 2);
    printf("length(str+6)  = %li (%s)\n", strlen(str + 6), str + 6);
    printf("length(str+17) = %li  (%s)\n", strlen(str + 17), str + 17);
    printf("\n");
  }
}