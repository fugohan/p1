# Aufgabe 2: Vergleich von Zeichenketten

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task3.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung fehlerfrei durchläuft: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task3.c && ./a.out`

In `task3.c` ist ein lauffähiges Programm gegeben, das bereits die Funktionsrümpfe der zwei Funktionen `compare` und `compare_n` enthält und diese Funktionen auch aufruft. 
Ihre Aufgabe ist es, die Funktionen `compare` und `compare_n` nach der untenstehenden Spezifikation zu implementieren.

Sie dürfen für Ihre Impelementierung **nicht** auf Funktionen der Standardbibliothek (z.B. `strcmp`) zurückgreifen. 

**1. Teilaufgabe: Vergleich von Strings**

```c
int compare(const char *a, const char *b);
```
Funktionsbeschreibung: Vergleicht zwei  Strings `a` und `b` lexikographisch (hier: anhand der ASCII-Werte). 
Zeichen nach dem Terminierungszeichen werden beim Vergleich nicht berücksichtigt.

Annahmen:

- `a` und `b` sind Zeiger auf nullterminierte Strings.
 
Parameter:

- `a`, `b`: Zeiger auf die Strings die verglichen werden

Rückgabewert:

- `0` falls beide Strings die identische Reihenfolge von Zeichen beinhalten
- `-1` falls der Wert von `a` an der ersten nicht identischen Stelle **kleiner** dem Wert von `b` ist.
- `+1` falls der Wert von `a` an der ersten nicht identischen Stelle **größer** dem Wert von `b` ist.


**2. Teilaufgabe: Vergleich bis zu einer festen Anzahl an Zeichen**

```c
int compare_n(const char *a, const char *b, int count);
```
Funktionsbeschreibung: Vergleicht maximal `count` Zeichen zweier Strings `a` und `b` lexikographisch (hier: anhand der ASCII-Werte). 
Zeichen nach dem Terminierungszeichen werden beim Vergleich nicht berücksichtigt.

Annahmen:

- `a` und `b` sind Zeiger auf nullterminierte Strings.
 
Parameter:

- `a`, `b`: Zeiger auf die Strings die verglichen werden

Rückgabewert:

- `0` falls bei Strings die identische Reihenfolge von Zeichen beinhalten oder `count` `0` ist.
- `-1` falls der Wert von `a` an der ersten nicht identischen Stelle **kleiner** dem Wert von `b` ist.
- `+1` falls der Wert von `a` an der ersten nicht identischen Stelle **größer** dem Wert von `b` ist.
