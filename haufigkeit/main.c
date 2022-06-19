#include <stdio.h>
#include <string.h>
#define NUM 5


void mygetline (char *str, long num){
  char c, *strende = str + num - 1; 
  if (num > 0 && str){
    while ((c = getchar())!='\n'){
      if ( str < strende){
        *str = c; 
        str = str+1;
      }
      else
        break;
      *str = 0;
    }
  }
}

// long getLine(char str[], long num) { // Aus Ref4
//     char c = 0;
//     long counter = 0;
    
//     if(num <= 0 || str == 0) {
//         return 0;
//     }
    
//     while((c = getchar()) != '\n') {
//         str[counter] = c;
//         ++counter;
        
//         if(counter == num) {
//             printf("Die eingegeben Zeichenkette ist zu lange! Nochmals eingeben\n");
//             counter = 0;
//             while(getchar() != '\n');
//         }
//     }   
//     str[counter] = '\0';
    
//     return counter;
// }


int main(void) {
  char search[NUM];
  char text[20*NUM];
  int found = 0;
  int count = 0;
  printf("Zeichenkette:");
  fgets(search,20*NUM,stdin);
  for (int i = 0; i<strlen(search);i++){
    // printf("%i ", search[i]);
    if(search[i] == 10){
      search[i] = 0;
    }
  }
  
  printf("Text:");
  // getLine(text, 20*NUM);
  mygetline(text, 20*NUM);
  
  // printf("Zeichenkette:");
  // scanf("%s", search);


  
  
  for (int i = 0; i<20*NUM;i++){
    // printf("%i\n", i);
    if(text[i]=='\0'){
      break;
      // printf("ups");
    }
    if(text[i]==search[0]){
      int lena = strlen(search);
      for (int c = 0; c<lena;c++){
        if (text[i+c] == search[c]){
          count++;
        }
        
      }
      // printf("lena:%i\ncount:%i", lena, count);
      if (lena==count){
        found++;
      }
      count=0;
    }
  }
  // printf("\n\nFound: %i", found);
  printf("Textausgabe: Die Zeichenkette \"%s\" wurde %i mal gefunden.", search, found);
  return 0;
}
