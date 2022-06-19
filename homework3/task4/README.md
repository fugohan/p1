# Aufgabe 1: Übergabe eines Sortierkriteriums mittels Funktionszeiger

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task4.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung fehlerfrei durchläuft: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task4.c && ./a.out`

In `task4.c` ist ein fertiges Programm gegeben, das ein Array von Strukturen vom Typ `struct Homework` aufsteigend nach der `ID` sortiert und ausgibt. 
Die Struktur `Homework` und die Signatur der Sortierfunktion `bubblesort` sehen so aus:
```c
struct Homework
{
  int ID;
  char title[NUM_CHAR_TITLE];
  char url[NUM_CHAR_URL];
  double price;
};

void bubblesort(struct Homework array[], int size);
```

Die Implementierung von `bubblesort` ist bereits insofern modularisiert, dass das Vergleichen und Vertauschen zweier Elemente `compare_ID_ascending` und `swap` in Funktionen gekapselt ist:
```c
int compare_ID_ascending(struct Homework a, struct Homework b);
void swap(struct Homework array[], int i, int j);
```

**1. Teilaufgabe: Umstellung auf Zeiger-Argumente**

Passen Sie die Implementierung (und den Aufruf) der Funktion `compare_ID_ascending` so an, dass nun "Zeiger mit Lesezugriff" (`const`) übergeben werden:

```c
int compare_ID_ascending(const struct Homework *a, const struct Homework *b)
```

**2. Teilaufgabe: Direkte Übergabe von Adressen**

Passen Sie die Implementierung (und den Aufruf) der Funktion `swap` so an, dass anstatt eines Arrays und zwei Indizes direkt die Adressen der zu tauschenden Elemente übergeben werden:
```c
void swap(struct Homework *a, struct Homework *b);
```

**3. Teilaufgabe: Vergleichsfunktion als Argument übergeben**

Passen Sie die Implementierungen (und den Aufruf) von `bubblesort` so an, dass die Funktion für den Vergleich nun als Funktionszeiger von außen (hier `comp`) übergeben wird:
```c
void bubblesort(struct Homework array[], int size,
                int (*comp)(const struct Homework *, const struct Homework*));
```

**4. Teilaufgabe: Zusätzliches Sortierkriterium**

Fügen (kopieren) Sie folgende Funktion (`compare_title_ascending`) als alternatives Sortierkriterium hinzu und erweitern Sie die `main`-Funktion um einen weiteren Aufruf von `bubblesort`, jedoch diesmal mit `compare_title_ascending` als Vergleichsfunktion. Geben Sie anschliessend das umsortierte Array erneut aus.
```c
int compare_title_ascending(const struct Homework *a, const struct Homework *b)
{
  return strcmp(a->title, b->title) < 0; 
}
```