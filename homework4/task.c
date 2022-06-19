#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 100

struct Book
{
  int ID;
  char title[40];
  double price;
};


void print(const struct Book *book){
  printf("Book = [ ID=%i, title=%c%s%c, price=%.2f]", book->ID,34,book->title,34,book->price);
}


void print_n(const struct Book books[], int n){
  for (int i = 0; i<n;i++){
  printf("%i: Book = [ ID=%i, title=%c%s%c, price=%.2f]\n", i,books[i].ID,34,books[i].title,34,books[i].price);
  // printf("%i:",i);print(books[i]);
    
  }
}

int to_string(char *buffer, int buffersize, const struct Book *book){

  if (book != 0){
    // char id[buffersize],title[buffersize], price[buffersize];
    //// "%i,%s;%lf"
    // sprintf(id, "%i", book->ID);
    // sprintf(title, "%s", book->title);
    // sprintf(price, "%lf", book->price);
    sprintf(buffer, "%i,%s,%lf", book->ID, book->title,book->price);
    return 0;

    
  }
  return 1;
}

int from_string(const char *buffer, struct Book *book){ //TODO: ERROR WARNING FIX PLZ 
// "%i;%39[^;];%lf"
  char temp[40]; 
  int j = 0;
  int k =0; 
  char tempstr[40];
  for (int i = 0; i<BUFFERSIZE;i++){
    // printf("%s ", temp);
    strncat(temp, &buffer[i],1);
   
    if(j==1){
      k++;
    }
    if (buffer[i] == 59 && j == 0){
      //str in zahl convertieren
      int value; 
      // value = atoi(temp);
      // printf("%s", temp);
      sscanf(temp,"%i", &value);
      book->ID = value;
      j++;
      // char *temp; //  temp leeren 
      temp[0] = 0;
    }
    if((buffer[i] == 59 && j == 1) || k>=39){
      // book->title = &temp;
      printf("\nstr:%s\n", temp);
      strcpy(temp,tempstr);
      char title2 = (book->title)[0];
      sscanf(temp, "%c", &title2);
      // = title2;
      // char *temp; // temp leeren 
      temp[0]=0;
      //j++;
      
    }
    if( buffer[i] == 0 ){
      printf("\n\nstr2:%s", tempstr);
      sscanf(temp,"%lf", &book->price);
      printf("\n\nbook:%i;%s;%.2lf", book->ID,book->title,book->price);
      return 0;
    }

    // printf("%c", buffer[i]);
  }
  return 1;

}




int main()
{
  // idee 3 (erstellen und dann const machen)
  struct Book test = {133, "idee", 19.99};
  const struct Book *test2 = &test;
  // printf("%i", test2->ID);
  struct Book tests[3] = {{133, "idee", 19.99}, {123, "idee5", 19.39}, {135, "idee3", 19.94}};
  print(test2);
  printf("\n////////////////////////////////////////////////\n");
  print_n(tests, 3);
  printf("////////////////////////////////////////////////\n");
  
  struct Book *book = &test; 
  const char *buffer = "222;_ist_diese_Ding?;12.23\0";
  int check; 
  printf("hello\n");
  check = from_string(buffer, book);
  printf("\n%i\n\n", check);

  printf("////////////////////////////////////////////////\n");


}

// int main()
// {

//   struct Book single_book;

//   { // read single book
//     const char *filename = "single_book_in.txt";
//     if (!load("single_book_in.txt", &single_book))
//     {
//       printf("successfully loaded single Book from %s\n", filename);
//       print(&single_book);
//     }
//     else
//     {
//       printf("loading Book from %s was not successful\n", filename);
//     }
//   }

//   { // write single book
//     const char *filename = "single_book_out.txt";
//     if (!save("single_book_out.txt", &single_book))
//     {
//       printf("successfully wrote single Book to %s\n", filename);
//       print(&single_book);
//     }
//     else
//     {
//       printf("writing Book to %s was not successful\n", filename);
//     }
//   }

//   return 0;
// }