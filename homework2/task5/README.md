# Aufgabe 5: Vergleich und Vertauschen von Elementen mittels gekapselter Funktionen

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task5.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung beendet: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task5.c -lm && ./a.out`

In [`reference5.c`](reference5.c) ist ein Programm gegeben, das ein Array von Zufallszahlen zwischen 0 und 10 anlegt, sortiert (Bubble-Sort und Selection-Sort) und ausgibt.
Um den modularen Aufbau des Programms zu verbessern, sollen
das in beiden Sortieralgorithmen vorkommende
- Vergleichen zweier Elemente (`<`) und
- Vertauschen zweier Elemente (engl. *swap*)  

in eigenen Funktionen gekapselt werden.

**Vergleich zweier Elemente**
```c
int compare(int a, int b);
```
Die Funktion `compare` vergleicht die beiden übergebenen Werte und liefert 1 (True) zurück falls `a` kleiner `b` ist. Andernfalls wird 0 (False) zurückgegeben.

**Vertauschen zweier Elemente** 
```c
void swap(int array[], int i, int j);
```
Die Funktion `swap` vertauscht im übergebenen `array` den Eintrag an der Stelle `i` mit dem Eintrag an der Stelle `j`.

Passen Sie die zwei Sortierfunktionen `selectionsort` und `bubblesort` so an, dass nun anstelle des direkten Vergleichens und Vertauschens die von Ihnen implementierten Funktionen aufgerufen werden.
