#include <stdio.h> // printf

// 1. fixed comparison / fixed value
int count_if_greater_10(double array[], int size)
{
  int count = 0;
  for (int n = 0; n != size; ++n)
  {
    if (array[n] > 10.0)
    {
      ++count;
    }
  }
  return count;
}

// 2. fixed comparison / value as argument
int count_if_greater(double array[], int size, double value)
{
  int count = 0;
  for (int n = 0; n != size; ++n)
  {
    if (array[n] > value)
    {
      ++count;
    }
  }
  return count;
}

// 3a. unary predicate function as argument
int count_if(double array[], int size, int (*pred)(double))
{
  int count = 0;
  for (int n = 0; n != size; ++n)
  {
    if (pred(array[n]))
    {
      ++count;
    }
  }
  return count;
}

// 3b. unary predicate, returns true if value > 10, else false
int predicate_greater_10(double value)
{
  if (value > 10.0)
    return 1;
  else
    return 0;
}

// TODO: Discuss (with your neighbours) the implementation effort required when
// - many more separate conditions/predicates would be required, or
// - the implementation is adapted to support a counting only in a subrange of
// the array. Note your main discussion points as comments in this file.

int main()
{
  double array[5] = {10.0, 20.0, 30.0, 10.0, 50.0};

  int count1 = count_if_greater_10(array, 5);
  int count2 = count_if_greater(array, 5, 10.0);
  int count3 = count_if(array, 5, predicate_greater_10);

  printf("%i \n", count1);
  printf("%i \n", count2);
  printf("%i \n", count3);

  return 0;
}
