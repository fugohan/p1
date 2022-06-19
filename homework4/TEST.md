## Test-Datei mit einem Eintrag

Die Datei [single_book_in.txt](single_book_in.txt) enthält 1 Buch im vorgegebenen Format. 
Sie können die Datei nutzen, um Ihre Funktionalität zu testen. 
Das könnte dann z.B so aussehen:

```c
...
int main()
{

  struct Book single_book;

  { // read single book
    const char *filename = "single_book_in.txt";
    if (!load("single_book_in.txt", &single_book))
    {
      printf("successfully loaded single Book from %s\n", filename);
      print(&single_book);
    }
    else
    {
      printf("loading Book from %s was not successful\n", filename);
    }
  }

  { // write single book
    const char *filename = "single_book_out.txt";
    if (!save("single_book_out.txt", &single_book))
    {
      printf("successfully wrote single Book to %s\n", filename);
      print(&single_book);
    }
    else
    {
      printf("writing Book to %s was not successful\n", filename);
    }
  }

  return 0;
}
```

## Test-Datei mit 5 Einträgen

Die Datei [all_books_2020.txt](all_books_2020.txt) enthält 5 Bücher im vorgegebenen Format. 
Sie können die Datei nutzen, um Ihre Funktionalität zu testen. 
Das könnte dann z.B so aussehen:

```c
... 
#define NUM_BOOKS 5
...

int main()
{
  struct Book all_books[NUM_BOOKS] = {0};
  int n = NUM_BOOKS;

  { // read array
    const char *filename = "all_books_2020.txt";
    int count = load_n("all_books_2020.txt", all_books, n);
    printf("successfully loaded %i books from %s\n", count, filename);
    print_n(all_books, n);
  }

  { // apply "inflation 2021" and write
    const char *filename = "all_books_2021.txt";
    apply(all_books, n, add_inflation_2021);
    int count = save_n(filename, all_books, n);
    printf("successfully saved %i books to %s\n", count, filename);
    print_n(all_books, n);
  }

  { // apply "inflation 2022" and write
    const char *filename = "all_books_2022.txt";
    apply(all_books, n, add_inflation_2022);
    int count = save_n(filename, all_books, n);
    printf("successfully saved %i books to %s\n", count, filename);
    print_n(all_books, n);
  }

  return 0;
}
```
