# Aufgabe 4: Werte in einem Array finden und zählen

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task4.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung beendet: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task4.c -lm && ./a.out`

In [`reference4.c`](reference4.c) ist ein Programm gegeben, das ein Array von Zufallszahlen zwischen 0 und 10 anlegt und ausgibt.
Es ist Ihre Aufgabe, die Implementierung um zwei Funktionen zu erweitern:

**Ersten Index für einen Wert finden**

```c
int find_if_equal(const int array[], int size, int value);
```
Die Funktion `find_if_equal` gibt den Index zurück, an dem der gesuchte Wert `value` das erste Mal im übergebenen `array` gefunden wird.
Falls der Wert nicht vorkommt, wird `-1` zurückgegeben.

**Anzahl der Einträge mit einem Wert** 
```c
int count_if_equal(const int array[], int size, int value);
```
Die Funktion `count_if_equal` gibt die Anzahl von Einträgen im übergebenen `array` zurück, die den Wert `value` haben.

Rufen Sie die von Ihnen implementierten Funktionen in der `main`-Funktion auf und geben Sie das Ergebnis aus. Achten Sie auf eine übersichtliche Ausgabe.
