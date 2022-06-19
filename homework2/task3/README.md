# Aufgabe 3: Minimum, Maximum und Mittelwert eines Arrays von Zufallszahlen

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task3.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung beendet: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task3.c -lm && ./a.out`

Es ist Ihre Aufgabe, statistische Kennwerte für eine Menge von (Pseudo-)Zufallszahlen in einem Array zu berechnen.

In [`reference3.c`](reference3.c) werden zwei Funktionen
```c
void init_random(double array[], int size, double min, double max);
void print_array(const double array[], int size);
```
aufgerufen, welche 
ein `double`-Array mit Zufallszahlen initialisieren beziehungsweise ausgeben.

Es ist Ihre Aufgabe, das Referenz-Programm mit einer Funktion
```c
void print_array_stats(const double array[], int size);
```
zu erweitern, die folgende Werte für das übergebene Array berechnet und ausgibt:
- kleinste Zahl (minium)
- größte Zahl (maximum)
- arithmetisches Mittel (average)

Rufen Sie Ihre Funktion `print_array_stats` in der `main`-Funktion auf und achten Sie auf eine übersichtliche Ausgabe.
