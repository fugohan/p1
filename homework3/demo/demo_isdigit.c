#include <stdio.h> // printf
#include <ctype.h> // isdigit

// https://en.cppreference.com/w/c/string/byte/isdigit
// https://en.cppreference.com/w/c/string/byte/isspace
// https://en.cppreference.com/w/c/string/byte/isalpha

int count_digits(const char *str)
{
  int count = 0;
  while (*str != '\0')
  {
    if (isdigit(*str))
    {
      ++count;
    }
    ++str;
  }

  return count;
}

int main()
{

  char str[] = "5 plus 10 is 15.";

  printf("\"%s\" enhält %i Digits.\n", str, count_digits(str));
}