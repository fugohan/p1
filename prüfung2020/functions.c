#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void initNumbers(Number_t numbers[], long len)
{

    if (len > 0)
    {
        long i;
        for (i = 0; i<len; i++){

            numbers[i].number = i-3;
            numbers[i].prime = FALSE;
        }
    }
    else
    {
        fprintf(stderr, "Feldlänge < 0!\n");
        exit(-1);
    }
}

long isPrime(long num){
    long count = 0; 
    if(num >= 2){
    // printf("%ld", num);
        for (int i=1; i<num;i++){
            long rest = num % i; 
            // printf("%ld", rest);
            if (rest == 0){
                count = count +1;
            }
            else if (count >=2){
                return 0;
            }
        }
        // printf("%ld", count);
        return 1;
    }
    return -1;
    
}

void find_prime(Number_t numbers[], long len)
{
    for (int i = 0; i < len; i++){

        if (isPrime(numbers[i].number)==1){
            numbers[i].prime = TRUE;
        } 
        // printf("%ld\n", numbers[i].number);
    }
}

long count_words(char *input)
{   double count = 0;
    int len = strlen(input);
    int temp = 0;
    for (int i = 0; i<len; i++){
        if ((input [i] == ' '||input [i] == '\t'||input [i] == '\n') && temp == 0 && input[i+1]!='\0'){
            temp = 1;
        }
        else if (input [i] == ' ' && temp == 1){
            continue;
        }
        else if (input [i] != ' ' && temp == 1){
            temp = 0;
            count++;
        } 

    }
    printf("%g", count);
    return count;
}

void printGrades(Grade_t *grades, long len)
{
  for (long i = 0; i < len; i++)
    printf("%5ld %s\n", grades[i].points, grades[i].name);
}


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
long readGrades(char *filename, Grade_t *grades, long len)
{   
    // FILE *a; // Liest zu viel ein
    // char name[20];
    // // char temp[20];
    // long number =0; 
    // int i = 0;
    // a = fopen(filename, "r");
    // int len = strlen(a);
    // printf("\n%i\n", len);
    // for (i = 0; i<MAX_GRADES; i++){
    //     fscanf(a, "%ld %s", &number, name);
    //     grades[i].points = number;
    //     strcpy(grades[i].name, name);
    // }
    // return i;

    // FILE *quelle; // Buch Seite 250
    // long v; 
    // // long i = 0;
    // char buffer[50];
    // if((quelle = fopen(filename, "r"))){
    //     while((v = fgetc(quelle))!=EOF){
    //         // fputc(v,&buffer[i]);
    //         // fread(buffer, sizeof(char), 24, quelle);
    //         // i++;
    //         printf("%s", buffer);
    //         // if(buffer[i-1] == '\n'){
    //         //     printf("here we are");
    //         //     i=0;
    //         // }
    //     }
    // }
    // return 0;

    // FILE *fp; //internet 
    // // char c[] = "34 Michael";
    // char buffer[100]; 
    // fp = fopen(filename, "r");
    // fseek(fp, 0, SEEK_SET);
    // fread(buffer, sizeof(char), 1, fp);
    // printf("\n%s\n", buffer);
    // return 0; 
    printf("\n");
    FILE *file; 
    long i = 0;
    long number; 
    char name[MAX_NAME_LEN];
    // char temp[MAX_NAME_LEN];
    file = fopen(filename, "r");
    for (i = 0; i<MAX_GRADES;i++){
        // if((fgets(temp, MAX_NAME_LEN, file))==0){
        //     break;
        // }
        if ((fscanf(file, "%ld %s", &number, name))==EOF){
            break;
        }
        grades[i].points = number;
        strcpy(grades[i].name, name);
        // printf("%ld %s\n", number, name);

    }
    return i;
}


void bubbleSort(Grade_t feld[], long laenge) {
    long i;
    
    /* Schleife für die Teilvorgänge */
    for(i = 0; i < laenge; ++i) {
        /* Wenn getauscht wird, ist dieser Wert nicht 0.
            Wenn er nach einem Durchlauf immer noch 0 ist, ist das Feld sortiert */
        long getauscht = 0;
        
        long j;
        long anzahl_tausche = laenge - i - 1;
        for(j = 0; j < anzahl_tausche; ++j) {
            if(feld[j].points > feld[j+1].points) {
                Grade_t temp = feld[j];
                feld[j] = feld[j+1];
                feld[j+1] = temp;
                /* Es wurde zumindest einmal getauscht */
                getauscht = 1;
            }
        }
        
        /* Die Schleife kann beendet werden, wenn nicht getauscht wurde */
        if(!getauscht) {
            break;
        }
    }
}


void sortGrades(Grade_t *grades, long len)
{
    // int sorted[sizeof(grades)/sizeof(Grade_t)];
    bubbleSort(grades, len);
    // for (int i = 0; i < MAX_GRADES; i++){

    // }
}

