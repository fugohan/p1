/*** Datei: Rechteck.c ***/

#include <stdio.h> 
void main (){
    // Definition der Variablen 

    double hoehe;
    double breite; 
    double flaeche; 
    double umfang; 
    //  hier stehen die Aufrufe von printf(), siehe oben

    // Wertzuweisungen
    hoehe = 7.5;
    breite = 13.2;

    // Berechnungen 
    flaeche = hoehe * breite; 
    umfang = 2 * hoehe * 2 *breite;

    // Ausgabe
    printf("Höhe = %g\n", hoehe);
    printf("Breite = %g\n", breite);
    printf("Flaeche = %g\n", flaeche);
    printf("Umfang = %g\n", umfang);
}