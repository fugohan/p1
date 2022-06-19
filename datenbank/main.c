#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 20

// 5a 

typedef struct Stadt_s {
  char name[30];
  char land[5];
  long einwohner;
} Stadt_t;

void nothing(int scanf){
  //does nothing
  //used to bypass compiling errors
}

void printCity(Stadt_t *stadt);
long searchCity(Stadt_t staedte[], long len, char *name);
long largestCity(Stadt_t staedte[], long len);
long changeCity(Stadt_t *stadt, long einwohner, char *kuerzel);
long addCity(Stadt_t staedte[]);
long nukeOne(Stadt_t st[], long index);
long nukeAll(Stadt_t st[]);



int main(void) {
  long caseI = 0;
  int entries = 5; //wird nicht erhöht... 
  Stadt_t staedte[LEN] = {
    {"Wien", "AT", 1897000},
    {"Graz", "AT", 443066},
    {"Berlin", "DE", 3769000},
    {"Zuerich", "CH", 402762},
    {"Kopenhagen", "DK", 602481}
  };

 while(1){
   printf("Entries: %i\n", entries);
    printf("(1) Alle Städte ausgeben\n(2) Stadt suchen\n(3) Größte Stadt finden\n(4) Exit\n(5) Änderung\n(6) Hinzufügen\n(7) Lösche 1\n <---(8) NuKe Db\n> ");
    int here = scanf("%ld", &caseI);
   nothing(here);
    switch(caseI){
      case 1 :{
        for (int i = 0; i<LEN;i++){
          printCity(&staedte[i]);
        }
        break;
      }
      case 2:{
        //char *search = NULL;
	//search = malloc(50);
	char name[2*LEN];
        printf("Geben Sie die Gesuchte Stadt ein:");
//        fgets(search,50, stdin);
	here = scanf("%s", name);
//        printCity(&staedte[searchCity(staedte, 5, search)]);
	printCity(&staedte[searchCity(staedte, LEN, name)]);
        break;
      }
      case 3:{
        printCity(&staedte[largestCity(staedte, entries)]);
        break;
      }
      case 4: {exit(0);break;}
      case 5: {
        char name[2*LEN];
        long index = -1;
        printf("Geben Sie die Gesuchte Stadt ein:");
	      here = scanf("%s", name);
        index = searchCity(staedte,entries, name);
        if (index != -1){
          long einw = 0;
          char kurz[LEN/4];
          printf("Einwohner:");
          here = scanf("%ld", &einw);
          printf("Kürzel:");
          here = scanf("%s", kurz);
          changeCity(&staedte[index], einw, kurz);
          
        }
        else{
          printf("\nStadt nicht gefunden\n");
        }
        break;
      }
      case 6:{
        entries = addCity(staedte);
        break;
      }
      case 7:{
        char nukename[30];
        long index = -1;
        
        printf("Was soll weg?\n");
        here= scanf("%s", nukename);
        index = searchCity(staedte,entries, nukename);
      
        entries = nukeOne(staedte, index);
        break;
      }
      case 8:
        {
          entries = nukeAll(staedte);break;
        }
     default: printf("Ungueltige Auswahl!\n");   
    }
  } 
sleep(1);
  
  // printCity(&staedte[0]);
  // searchCity(staedte, 5, "Kopenhagen");
  //printCity(&staedte[largestCity(staedte, 5)]);
}

// Funktionen 

void printCity(Stadt_t *stadt){
  long compare = stadt[0].einwohner;
  if(compare>=1){
  // if(stadt!=0 && stadt->einwohner>0){
  printf("%s,%s,%ld\n", stadt->name, stadt->land, stadt->einwohner);
    }
}
long searchCity(Stadt_t staedte[], long len, char *name){

  for (int i = 0; i<len; i++){ 
    // printf("%s", name);
    // printf("%s", staedte[i].name);
    if(strcmp(staedte[i].name,name)==0){
      return i;
    }
  }
  return -1; 
}

long largestCity(Stadt_t staedte[], long len){
  long max=-1;  
  long index=-1;
  // printf("len %ld", len);
  for (int i = 0; i<len; i++){ 
    // printf("%s", name);
    // printf("%s", staedte[i].name);
    if(staedte[i].einwohner > max){
      max = staedte[i].einwohner;
      index = i;
    }
  }
  return index; 
}

long changeCity(Stadt_t *stadt, long einwohner, char *kuerzel){
  stadt->einwohner = einwohner;
  strcpy(stadt->land , kuerzel);
  printf("Änderung erfolgreich!\n");
  return 1;
}

long addCity(Stadt_t staedte[]){
  int count=0;
  for (int i = 0; i<LEN;i++){
    if (staedte[i].einwohner>0){
      count++;
    }
  }
  printf("%i\n\n", count);
  printf("%s", staedte[count].name);
  char cname[30];
  char kuerz[5];
  long einw=0;

  printf("Wie lautet der Name der Stadt?\n");
  int here = scanf("%s", cname);
  nothing(here);
  for (int i=0;i<LEN;i++){
    // printf("c%i",i);
    // if(cname == staedte[i].name){
    if(strcmp(staedte[i].name,cname)==0){
      printf("------------------------------\nEintrag existiert bereits!\n------------------------------\n");
      return count;
    }
  }
  printf("In welchem Land befindet sich die Stadt?\n");
  here= scanf("%s", kuerz);
  printf("Wie viele Einwohner hat diese Stadt?:");
  here = scanf("%ld", &einw);

  staedte[count].einwohner = einw;
  strcpy(staedte[count].land, kuerz);
  strcpy(staedte[count].name, cname);
  count++;
  return count;
}

long nukeOne(Stadt_t st[], long index){
    int count=0;
  for (int i = 0; i<LEN;i++){
    if (st[i].einwohner>0){
      count++;
    }
  }
  st[index].einwohner = 0;
  
  count--;
  return count;
}

long nukeAll(Stadt_t st[]){
  for (int i = 0;i<LEN;i++){
    st[i].einwohner=0;
  }
  return 0;
}
