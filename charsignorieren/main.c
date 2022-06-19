#include <stdio.h>
#define NUM 25

void remove10(char *str){
  int lenstr = strlen(str);
  for (int i = 0;i<lenstr;i++){
    if(str[i] == 10)
      str[i] = '\0';
  }
}

int main(void) {
  char igno[NUM];
  char str[10*NUM];
  printf("Überlesene Zeichen:");
  fgets(igno, NUM, stdin);
  remove10(igno);
  printf("Texteingabe:");
  fgets(str, 10*NUM, stdin);
  remove10(str);

  for (int i = 0; i<10*NUM;i++){
    for (int j = 0; j<NUM;j++){
      if(igno[j]==0){
        break;
      }
      if(str[i]==igno[j]){
        str[i] = 1;
      }
    }
  }
  // printf("\n whythef: %s", igno);
  
  printf("Textausgabe: %s", str);
}

//Erstellen Sie ein Programm, 
//das Zeichen aus einem eingegebenen Text ignoriert.
