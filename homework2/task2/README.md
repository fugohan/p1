# Aufgabe 2: Funktionen mit Array-Argumenten

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task2.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung beendet: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task2.c -lm && ./a.out`

In [`reference2.c`](reference2.c) ist ein Programm gegeben, das die `cos`-Funktion mit fester Schrittgröße in einem gegebenen Intervall berechnet:
1. Es werden zwei Felder von identischer fester Länge definiert (für die diskreten x- und y-Werte).
2. Es wird eine konstante Schrittweite berechnet und das erste Feld mit den diskreten x-Werten belegt.
3. Das zweite Feld wird mit den zugehörigen y-Werten der `cos`-Funktion belegt.
4. Die Wertepaare der diskreten Funktion werden ausgegeben.

Es ist Ihre Aufgabe, die Funktionalität der Punkte 2., 3. und 4. in `main()` durch geeignete Funktionen zu ersetzen. Entwerfen Sie hierzu die Funktionen
```c
void sample_interval(double x[], int size, double start, double end);
void sample_function(const double x[], double y[], int size);
void print_discrete_function(const double x[], const double y[], int size);
```

und gestalten Sie die `main`-Funktion so um, dass nun diese 3 Funktionen aufgerufen werden.
Achten Sie dabei darauf, dass die Funktionalität des Programms nicht verändert oder eingeschränkt wird (dass dieselben Daten ausgegeben werden). 


