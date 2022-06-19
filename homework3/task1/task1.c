#include <stdio.h> // printf

#define N 35

void print_array(const char str[], int size)
{
  printf("print_array  = [");
  for (int i = 0; i != size; ++i)
  {
    printf("'%c (%i)' ", str[i], str[i]);
  }
  printf("]\n");
}

int length(const char *str)
{
  int count = 0;
  // TODO: implement 'length'
  for (int i=0;i<N;i++){
    if(str[i]==0){
      break;
    }
    count++;
  }
  return count;
}

int main()
{
  {
    char str[N] = "Hallo Welt!";
    print_array(str, N);
    printf("\"%s\" hat %i Zeichen (ohne Terminierung).\n", str, length(str));
    printf("\n");
  }

  {
    char str[N] = "Hallo Welt! Hier gehts weiter!";
    print_array(str, N);
    printf("\"%s\" hat %i Zeichen (ohne Terminierung).\n", str, length(str));
    printf("\n");
  }
}