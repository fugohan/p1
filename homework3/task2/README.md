# Aufgabe 2: Kopieren von Zeichenketten

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task2.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung fehlerfrei durchläuft: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task2.c && ./a.out`

In `task2.c` ist ein lauffähiges Programm gegeben, das bereits die Funktionsrümpfe der zwei Funktionen `copy` und `copy_n` enthält und diese Funktionen auch aufruft. 
Ihre Aufgabe ist es, die Funktionen `copy` und `copy_n` nach der untenstehenden Spezifikation zu implementieren.

Sie dürfen für Ihre Impelementierung **nicht** auf Funktionen der Standardbibliothek (z.B. `strcpy`) zurückgreifen. 


**1. Teilaufgabe: Kopieren nullterminierter Strings**

```c
char *copy(char *dest, const char *src);
```
Funktionsbeschreibung: Kopiert den String, auf den `src` zeigt (samt Terminierungszeichen `\0`) an den Zielort, der durch einen Zeiger auf das erste Element (`dest`) übergeben wird.

Annahmen:

- Sowohl `src` als auch `dest` sind Zeiger auf nullterminierte Strings.
- Das Array an der Zieladresse `dest` ist groß genug, um alle zu kopierenden Werte zu speichern.

Parameter:

- `dest`: Zeiger auf den String in den hineingeschrieben wird
- `src`: Zeiger auf den String von dem gelesen wird

Rückgabewert:

- Eine Kopie des Zeigers `dest` (kein funktionaler Grund, sondern weil dies eine angenehme syntaktische Einbettung erlaubt, siehe `task2.c`)


**2. Teilaufgabe: Kopieren einer festen Anzahl an Zeichen**

```c
char *copy_n(char *dest, const char *src, int count);
```
Funktionsbeschreibung: 

Kopiert maximal `count` Zeichen des nullterminierten Strings, auf den `src` zeigt (samt Terminierungszeichen `\0`, jedoch keine Zeichen die nach einem `\0` folgen) an den Zielort, der durch die Adresse auf das erste Element (`dest`) übergeben wird.

Falls `count` erreicht wird, bevor das Terminierungszeichen in `src` kopiert wird, ist der resultierende String in `dest` **nicht** nullterminiert. 

Falls nach dem Kopieren des Terminierungszeichens in `src` noch weniger als `count` Zeichen kopiert wurden, werden bis zum Erreichen von `count` weitere Terminierungszeichen in `dest` geschrieben.

Annahmen:

- Sowohl `src` als auch `dest` sind Zeiger auf Strings (nicht notwendigerweise nullterminiert).
- Das Array an der Zieladresse `dest` hat mindestens `count` Elemente.
- Das Array an der Leseadresse `src` hat mindestens `count` Elemente oder enthält ein Terminierungszeichen.

Parameter:

- `dest`: Zeiger auf den String in den hineingeschrieben wird
- `src`: Zeiger auf den String von dem gelesen wird

Rückgabewert:

- Eine Kopie des Zeigers `dest` (Grund: kein funktionaler Grund, sondern weil dies eine angenehme syntaktische Einbettung erlaubt, siehe `task2.c`)


