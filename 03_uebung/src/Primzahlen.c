#include <stdio.h>

////////////////////////////////////////////////////////////////
//  MIN A
////////////////////////////////////////////////////////////////
long readNumber(){
    long rn;
    printf("\nGeben Sie eine Ganze Zahl ein!:");
    scanf("%ld", &rn);
    return rn;
}

long isPrime(long num){
    long count = 0; 
    if(num >= 0){

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

////////////////////////////////////////////////////////////////
//  MIN B
////////////////////////////////////////////////////////////////

// void primeFactors(long zahl){
//     long temp = zahl;
//     while (temp > 0){
//         for (int i = 2; i<zahl;i++){
//             long rest = temp%i;
//             if (rest == 0){
//                 jkljkljkljkljkljkl
//             }
//         }
//         printf("%ld", temp);
//     }
//     printf("done");
// }

// void arrayAppend(){
//     int lenght = 2;
//     int i,j,len;
//     int array[lenght],output[lenght];
//     printf("Enter 10 digit nuber separated by space:\n");
//     for (i=0; i<lenght; i++){
//         scanf ("%d", &array[i]);
//     }
//     len = sizeof(array)/sizeof(array[0]);
//     for(i=0;i<len;i++){
//         if(array[i]!=0){
//             for(j=0;j<array[i];j++){
//                 printf("%d", array[j]);
//             }
//         }
//     }
// }

int* createArray(){
    static int zahlen[1];
    int i=0; 
    char choise;
    printf("Füge zahl hinzu");
    scanf("%d", &zahlen[i]);
    printf("%d", zahlen[i]);
    i +=1;
    printf("Weitere Zahl hinzufügen? [Y/n]");
    scanf("%s", &choise);
    switch(choise){
        case 'Y':
            printf("y");
            break;
        case 'n':
            printf("n");
            break;
        default:
            printf("fehler");
    }
    return zahlen;
}

// MAIN


void main(){
    // long test = readNumber();
    // printf("%ld\n", test);
    int* test = createArray();
    // int test2 = &test;
    int i;
    for (i=0; i<4;i++){
        printf("%d ", test[i]);
    }
    printf("\n\n########################\n\n");
    int a =5;
    printf("%d\n", a);
    // arrayAppend();
    // printf("\n%ld\n\n",isPrime(test));
    // primeFactors(test);

}