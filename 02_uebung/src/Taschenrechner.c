#include <stdio.h>
#include <math.h>

#define MATH 0

float grundrechenart(){
    float op1;
    float op2;
    char operation;
    float ans;
    printf("\n\nGeben Sie den ersten Operand ein:");
    scanf("%f", &op1);
    printf("Geben Sie einen Operator ein:");
    scanf("%s", &operation); //Warum wird hier kein %c verwendet sondern %s?
    printf("Geben Sie den zweiten Operand ein:");
    scanf("%f", &op2);
    switch(operation){
        case 43:
            ans = op1 + op2;
            printf("Das Ergebnis lautet: %g", ans);
            break;
        case 45:
            ans = op1 - op2;
            printf("Das Ergebnis lautet: %g", ans);
            break;
        case 42:
            ans = op1 * op2;
            printf("Das Ergebnis lautet: %g", ans);
            break;
        case 47:
            if (op2 == 0){
                printf("DIV durch 0 ungültig!!!!");
                break;
            }
            ans = op1 / op2;
            printf("Das Ergebnis lautet: %g", ans);
            break;
        #if MATH
        case 'p':
            ans = pow(op1,op2);
            printf("Das Ergebnis lautet: %g", ans);
            break;
        case 'c':
            ans = cos(op1)/op1;
            printf("Das Ergebnis lautet: %g", ans);
            break;
        case 'e':
            ans = exp(op1);
            printf("Das Ergebnis lautet: %g", ans);
            break;
        #endif 
        default:
            printf("FEHLER!");
    }
      
    return ans;
}

void runden(float zahl){
    char runden;
    printf("Die Anwort kann nun Gerundet werden (Y/n)");
    scanf("%s", &runden);
    switch(runden){
        case 'Y':
            printf("%.4g",zahl);
            break;
        case 'n':
            printf("no");
            break;
        default:
            printf("fehler");
    }

}

void main(){
   float test =  grundrechenart();
   runden(test);
}