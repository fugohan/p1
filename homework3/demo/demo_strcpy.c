#include <stdio.h>  // printf
#include <string.h> // strcpy, strncpy

// https://en.cppreference.com/w/c/string/byte/strcpy
// https://en.cppreference.com/w/c/string/byte/strncpy

#define N 20

int main()
{

  {
    printf("strcpy(dest, src):\n");
    char src[N] = "Hallo Welt!";
    printf("src         = [%s]\n", src);
    char dest[N] = "XXXXXXXXXXXXXX";
    printf("dest before = [%s]\n", dest);
    printf("dest after  = [%s]\n", strcpy(dest, src));
    printf("\n");
  }

  {
    int count = 5;
    printf("strncpy(dest, src, %i):\n", count);
    char src[N] = "Hallo Welt!";
    printf("src         = [%s]\n", src);
    char dest[N] = "XXXXXXXXXXXXXX";
    printf("dest before = [%s]\n", dest);
    printf("dest after  = [%s]\n", strncpy(dest, src, count));
    printf("\n");
  }
}