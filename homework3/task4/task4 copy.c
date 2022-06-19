#include <stdio.h>  // printf
#include <string.h> // strcmp

#define NUM_CHAR_TITLE 28
#define NUM_CHAR_URL 60

struct Homework
{
  int ID;
  char title[NUM_CHAR_TITLE];
  char url[NUM_CHAR_URL];
  double price;
};

// TODO: adapt 'compare_ID_ascending' according to task
int compare_ID_ascending(struct Homework a, struct Homework b)
{
  return a.ID < b.ID;
}

// TODO: adapt 'swap' according to task
void swap(struct Homework array[], int i, int j)
{
  struct Homework tmp = array[j];
  array[j] = array[i];
  array[i] = tmp;
}

// TODO: adapt 'bubblesort' according to task
void bubblesort(struct Homework array[], int size)
{
  for (int m = size - 1; m > 1; --m)
  {
    for (int n = 0; n < m; ++n)
    {
      if (compare_ID_ascending(array[n + 1], array[n]))
      {
        swap(array, n, n + 1);
      }
    }
  }
}

void print_homeworks(const struct Homework array[], int size)
{
  printf("[\n");
  for (int n = 0; n < size; n = n + 1)
  {
    printf("ID:% 2i, title:%*s, url:%*s, price:% 4.2f\n", array[n].ID,
           NUM_CHAR_TITLE, array[n].title, NUM_CHAR_URL, array[n].url,
           array[n].price);
  }
  printf("]\n");
}

int main()
{
  struct Homework homeworks[5] = {
      {2, "Arrays und Schleifen",
       "https://gitlab.tuwien.ac.at/360.016_programming_1/homework2", 0.0},
      {3, "Zeiger und Strings",
       "https://gitlab.tuwien.ac.at/360.016_programming_1/homework3", 0.0},
      {0, "Systemidentifikation",
       "https://gitlab.tuwien.ac.at/360.016_programming_1/homework0", 0.0},
      {4, "TBD", "TBD", 0.0},
      {1, "Strukturen und Funktionen",
       "https://gitlab.tuwien.ac.at/360.016_programming_1/homework1", 0.0}};

  print_homeworks(homeworks, 5);
  bubblesort(homeworks, 5);
  print_homeworks(homeworks, 5);

  return 0;
}
