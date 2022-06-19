/*

Ein einfacher Linter¶
Ein Linter ist ein Programm, dass Quelltext analysiert und automatisch Fehler erkennt und diese beheben kann. Sie sollen einen simplen Linter für die Sprache C programmieren:

Nach ;, {, } soll automatisch ein '\n' eingefügt werden
Vor und nach =, +, - *, / sollen Leerzeichen eingefügt werden
Nach , soll ein Leerzeichen eingefügt werden
Beispiel:

Texteingabe: int main(){long a=5,b=6;printf("%ld",a+b);return 0;}
Textausgabe:
int main(){
long a = 5, b = 6;
printf("%ld", a + b);
return 0;
}
Nun stimmt die Einrückung in diesem Beispiel noch nicht. Erweitern Sie ihr Programm:

Für jedes { sollen alle folgenden Zeilen um 4 Leerzeichen mehr eingerückt werden. Für jedes } wieder 4 weniger. Nach zwei { beginnen also alle Zeilen mit 8 Leerzeichen.
Nach jedem if und else soll ein Zeilenumbruch folgen, wenn kein { folgt
Ein Fehler soll ausgegeben werden, wenn nicht alle Klammern geschlossen sind
TIPP: Behandeln Sie jede dieser Ersetzungen einzeln mit eigenen Funktionen. Dadruch können Sie ein großes Problem in viele verständliche kleine Probleme zerlegen.

*/

#include <stdio.h>
#include <string.h>
#define NUM 100

long getLine(char str[], long num) {
    char c = 0;
    long counter = 0;
    
    /* wenn num oder str nicht valide sind */
    if(num <= 0 || str == 0) {
        return 0;
    }
    
    /* So lange kein \n kommt, Zeichen einlesen */
    while((c = getchar()) != '\n') {
        str[counter] = c;
        ++counter;
        
        /* Wenn die Zeichenkette voll ist, aber kein '\n' gefunden wurde */
        if(counter == num) {
            printf("Die eingegeben Zeichenkette ist zu lange! Nochmals eingeben\n");
            counter = 0; /* Zähler zurücksetzen */
            while(getchar() != '\n'); /* Input komplett leeren */
        }
    }
    
    /* Nullcharakter setzen */
    str[counter] = '\0';
    
    return counter;
}

// int longerString(char str[] ){
//   int templen = strlen(str);
//   // static char temp[templen+1];
//   strcpy(temp, str);
//   return &temp;
// }

void superLinter(char *str){
  // printf("%s", str);
  // int templen = strlen(str);  
  // char temp[templen+1]; 
  for (int i = 0; i<NUM; i++){
    if (str[i] == 0){
      // printf("\nJunge es ist vorbei!\n");
      break;
    }
    if (str[i]==';'||str[i]=='{'||str[i]=='}'){
      int templen = strlen(str);  
      char temp[templen+1]; 
      // printf("h");
      strncpy(str, str, (templen+1));
      // Reverse coping
      for (int r = templen+1; r>i; r--){
          str[r] = str[r-1];
      }
      // // forward coping (not working)
      // for (int f = i+1; f<templen+1;f++){
      //   str[f+1] = str[f]; 
      // }
      str[i+1] = '\n';
      continue;
    }
    if (str[i]==','){
      int templen = strlen(str);  
      char temp[templen+1]; 
      // printf("h");
      strncpy(str, str, (templen+1));
      // Reverse coping
      for (int r = templen+1; r>i; r--){
          str[r] = str[r-1];
      }
      // // forward coping (not working)
      // for (int f = i+1; f<templen+1;f++){
      //   str[f+1] = str[f]; 
      // }
      str[i+1] = ' ';
      continue;
    }
    if ( str[i] == '='||str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
      int templen = strlen(str);  
      
      // printf("h");
      strncpy(str, str, (templen+2));
      // Reverse coping
      for (int r = templen+2; r>i; r--){
          str[r] = str[r-2];
      }
      // printf("\n------\n%s\n", str);
   
      str[i+1] = str[i+2];
      str[i] = ' ';
      str[i+2] = ' ';
      //
      i++;
      i++;
      continue;
    }
  }
  
  // printf("\nhallo");
  
  printf("\n\n%s", str);
}

int main(void) {
  char str[NUM];
  
  printf("Geben Sie ihren Code ein:\n");
  //scanf("%s", &str[0]);
  getLine(str, NUM);
  superLinter(str);
  return 0;
}

