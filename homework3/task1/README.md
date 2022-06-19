# Aufgabe 1: Länge von Zeichenketten

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task1.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung fehlerfrei durchläuft: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task1.c && ./a.out`

In `task1.c` ist ein lauffähiges Programm gegeben, das bereits den Funktionsrumpf der Funktion `length` enthält und diese Funktion auch aufruft. 
Ihre Aufgabe ist es, die Funktion `length` nach der untenstehenden Spezifikation zu implementieren.

```c
int length(const char *str);
```
Funktionsbeschreibung: Berechnet die Anzahl an Zeichen, die in der Zeichenkette (auf deren erstes Element `str` zeigt) vor dem ersten Terminierungszeichen (`\0`) vorkommen. 
Sie dürfen für Ihre Impelementierung **nicht** auf Funktionen der Standardbibliothek (z.B. `strlen`) zurückgreifen. 

Annahmen:

- `str` ist ein Zeiger auf einen nullterminierten String.

Parameter:

- `str`: Zeiger auf einen String. 

Rückgabewert:

- Länge des Strings, auf den `str` zeigt.
