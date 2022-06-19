#include <stdio.h> // printf

#define N 15

void print_array(const char str[], int size)
{
  printf("print_array  = [");
  for (int i = 0; i != size; ++i)
  {
    printf("'%c (%i)' ", str[i], str[i]);
  }
  printf("]\n");
}

char *copy(char *dest, const char *src)
{
  char *res = dest;
  // TODO: implement 'copy'
  for (int i=0;i<N;i++){
    if(src[i]==0){
      res[i] = src[i];
      break;
    }
    res[i] = src[i];
  }
  return res;
}

char *copy_n(char *dest, const char *src, int count)
{
  char *res = dest;
  // TODO: implement 'copy_n'
    for (int i=0;i<count;i++){
    // if(src[i]==0){
    //   res[i] = src[i];
    //   break;
    // }
    res[i] = src[i];
  }
  return res;
}

int main()
{
  char src[N] = "Hallo Welt!";
  printf("src         = [%s]\n", src);
  printf("\n");

  { // Test: copy
    printf("copy(dest, src):\n");
    char dest[N] = "XXXXXXXXXXXXXX";
    printf("dest before = [%s]\n", dest);
    printf("dest after  = [%s]\n", copy(dest, src));
    printf("\n");
  }

  { // Test: copy_n: count < length of 'src'
    int count = 11;
    printf("copy_n(dest, src, %i):\n", count);
    char dest[N] = "XXXXXXXXXXXXXX";
    printf("dest before = [%s]\n", dest);
    printf("dest after  = [%s]\n", copy_n(dest, src, count));
    printf("\n");
  }

  { // Test: copy_n: count > length of 'src'
    int count = 15;
    printf("copy_n(dest, src, %i):\n", count);
    char dest[N] = "XXXXXXXXXXXXXX";
    printf("dest before = [%s]\n", dest);
    printf("dest after  = [%s]\n", copy_n(dest, src, count));
    printf("\n");
  }
}