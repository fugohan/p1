#include <stdio.h>
#include <string.h>

#define TEXT_LEN 20
#define DB_LEN 10

struct Data_s {
    char name[TEXT_LEN];
    char brand[TEXT_LEN];
    char invNr[TEXT_LEN];
    long year;
};

typedef struct Data_s Data_t;

void initItems(Data_t *items, long len){
    if(len>0){    
        for (int i =0; i<len; i++){
            strcpy(items[i].name, "");
            strcpy(items[i].brand, "");
            strcpy(items[i].invNr, "");
            items[i].year = 0;
        }
        return;
    }
    fprintf(stderr, "Len <=0");
    return;
}

void printItem(Data_t *item){
    printf("Name:\t\t\t%s\n", item->name);
    printf("Marke:\t\t\t%s\n", item->brand);
    printf("Inventar-Nr.:\t\t%s\n", item->invNr);
    printf("Anschaffungsjahr:\t%ld\n", item->year);


}

void printDB(Data_t *items, long len){
    if(len >0){
        for (int i = 0; i<len; i++){
            if(items[i].year > 1970 && items[i].year < 2100){
                printf("---------------Eintrag  %i---------------\n", i+1);
                printItem(&items[i]);
            }

        }
        return;
    }
       fprintf(stderr, "Len <=0");

    return;
}


void setValue(Data_t *item, char *name, char *brand, char *inv, long year){
    strcpy(item->name,name);
    strcpy(item->brand,brand);
    strcpy(item->invNr,inv);
    item->year = year;
    return;
}

long readValue(char *name){
    
    long year;
 
    if ((strcmp("Jahr", name))==0){
            printf("%s: ", name);
            scanf("%ld", &year);
            return year;
    }
    fprintf(stderr, "Falsche Eingabe\n");
    
    
    printf("Was solleingelesen werden?  ");
    // fgets(choise, TEXT_LEN, stdin);
    scanf("%s", name);
    if ((strcmp("Jahr", name))==0){
            printf("%s: ", name);
            scanf("%ld", &year);
            return year;
    }
    return 0;
}

void readString(char *name, char *text, long len){
    //    char text[len];
 
    if (((strcmp("Name", name))==0)||((strcmp("Marke", name))==0)||((strcmp("Inventar-Nr.", name))==0)){
            printf("%s: ", name);
            scanf("%s", text);
            return;
    }
    fprintf(stderr, "Falsche Eingabe\n");

    return ;
}

long addItem(Data_t *items, long len){
    char choise[TEXT_LEN]; 

    for (int i =0; i<len;i++){
        if(items[i].year == 0){
            strcpy(choise,"Name");
            readString(choise,items[i].name,TEXT_LEN); 
            strcpy(choise,"Marke");
            readString(choise,items[i].brand,TEXT_LEN);         
            strcpy(choise, "Inventar-Nr.");
            readString(choise,items[i].invNr,TEXT_LEN); 
            strcpy(choise,"Jahr");
            items[i].year = readValue(choise);
            return 0; 
        }
    }
    
    return -1; 
}

void bubbleSort(Data_t feld[], long laenge) {
    long i;
    
    /* Schleife für die Teilvorgänge */
    for(i = 0; i < laenge; ++i) {
        /* Wenn getauscht wird, ist dieser Wert nicht 0.
            Wenn er nach einem Durchlauf immer noch 0 ist, ist das Feld sortiert */
        long getauscht = 0;
        
        long j;
        long anzahl_tausche = laenge - i - 1;
        for(j = 0; j < anzahl_tausche; ++j) {
            if(feld[j].year < feld[j+1].year) {
                Data_t temp = feld[j];
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


// void vertauschen(Data_t feld[], long len){ // aufrücken um lücken zu schließen... 


// }

long deleteItem(Data_t *items, long len){
    int j=0;
    printf("Welcher Eintrag soll gelöscht werden?\nIndex:");
    j = scanf("%i", &j);
    if (j>=0 && j<len){
        strcpy(items[j].name,"");
        items[j].year = 0;
        bubbleSort(items, DB_LEN);
        return 0;
    }
    return -1;

}

long saveDB(Data_t *items, long len, char *outputFile){
    char name[TEXT_LEN];
    char brand[TEXT_LEN];
    char inv[TEXT_LEN];
    // char export[];
    long year = 0;
    FILE export;
    for (int i = 0; i<len; i++){
        
        strcpy(name, items[i].name);
        strcpy(brand, items[i].brand);
        strcpy(inv, items[i].invNr);
        year = items[i].year;
        if (export = fopen(outputFile, "w")){

        }
        else{
            printf("Datei nicht geladen");
        }
    }

}


int main(){
    Data_t helloworld[DB_LEN];
    initItems(helloworld, DB_LEN/2);
    // Data_t helloworld[DB_LEN] = { {"iPhone-11", "Apple","FIKCKDICH", 2019} , {"SurfacePro6", "Kleinweich", "BLACKANDHOT", 2018}};
    setValue(&helloworld[0], "iPhone-11","Apple", "FICKDICH", 2019);
    setValue(&helloworld[1], "SurfacePro6","Kleinweich", "BlackandHOT", 2018);

    // // printItem(&helloworld[2]); //<--- Zugriff auf zweiten Eintrag
    // printDB(helloworld, DB_LEN);

    // ////////////////////////////////////////////////////7 B 
    // char choise[TEXT_LEN]; 
    // long value;
    // char buffer[TEXT_LEN];
    // printf("Was soll eingelesen werden?  ");
    // // fgets(choise, TEXT_LEN, stdin);
    // scanf("%s", choise);
    // value = readValue(choise);
    // printf("%ld\n\n", value);
    // printf("Welcher String soll eingelesen werden?  ");
    // scanf("%s", choise);
    // readString(choise, buffer, TEXT_LEN);
    // // printf("%s", buffer);
    // addItem(helloworld, DB_LEN);
    // printDB(helloworld,DB_LEN);
    // deleteItem(helloworld, DB_LEN);
    // printDB(helloworld,DB_LEN);

    long choise = 1000; 
    printf("1 - Alle Datensätze ausgeben\n");
    printf("2 - Eintrag hinzufügen\n");
    printf("3 - Eintrag löschen\n");
    printf("4 - Datei speichern\n");
    printf("0 - Programm beenden\n");

    while (choise != 0 ){
        printf("> ");
        scanf("%ld", &choise);
        switch(choise){
            case 0: {
                break;
            }
            case 1: {
                printDB(helloworld, DB_LEN);
                break;
            }
            case 2: {
               
                break; 
            }
            case 4: {
                char filename[TEXT_LEN];
                printf("Wie soll die Datei heißen?")
                scanf("%s", filename);
            }
            default: {
                fprintf(stderr, "Falsche Eingabe! - Versuch es nochmal.\n");
            }
        }
    }
    
    return 0;
}