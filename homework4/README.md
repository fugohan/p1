# Hausübung 4 (Abgabe via TUWEL bis 8. Juni 10:00 Uhr)

Der Schwerpunkt dieser Hausübung liegt auf dem *formatierenden Einlesen und Ausgeben* von *nullterminierten Zeichenketten* und *Dateien*.
Für die Bewertung werden folgende Kompiliereinstellungen verwendet:
```shell
gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11
```
Wir empfehlen **dringend** auch beim Implementieren der Hausübung diese Einstellungen zu verwenden (für detaillierte Erklärungen zu den verwendeten Einstellungen siehe Unterlagen zum [Labor 1](https://gitlab.tuwien.ac.at/360.016_programming_1/labor1) ).

Vorgegeben ist die Definition einer Struktur `struct Book`, die ein Buch modelliert:

```c
struct Book
{
  int ID;
  char title[40];
  double price;
};
```

- `ID`: ganzzahlige Identifikationsnummer
- `title`: Titel (nullterminierte Zeichenkette mit maximal 39 Zeichen + 1 Terminierungszeichen)
- `price`: Preis als Fließkommazahl

Ihre Aufgabe besteht darin, untenstehende Funktionen zu implementieren. 
Erstellen Sie hierzu eine Datei `task.c` und

- übernehmen Sie die Definition der Struktur `struct Book`,
- implementieren Sie alle geforderten Funktionen (Aufgabe 1-5), und
- legen Sie ebenfalls eine `main`-Funktion an.

Die detaillierten Funktionsbeschreibungen sind für jede Aufgabe separat beschrieben.
Ferner stellen wir zwei Test-Dateien und Beispiele, wie eine Verwendung der zu implementierenden Funktionen aussehen könnte, in [TEST.md](TEST.md) zur Verfügung.

**Übersicht über die in Aufgaben 1-5 zu implementierenden Funktionen:**
```c
// 1
void print(const struct Book *book);
void print_n(const struct Book books[], int n);

// 2
int to_string(char *buffer, int buffersize, const struct Book *book);
int from_string(const char *buffer, struct Book *book);

// 3
int save(const char *filename, const struct Book *book);
int load(const char *filename, struct Book *book);

// 4
int save_n(const char *filename, const struct Book books[], int n);
int load_n(const char *filename, struct Book books[], int n);

// 5
void apply(struct Book books[], int n, void (*transform)(struct Book *));
void add_inflation_2021(struct Book *b); // increase price by 3.6%
void add_inflation_2022(struct Book *b); // increase price by 12.0%
```

**Hinweis:** Die Aufgaben 1-5 erweitern stetig die Funktionalität Ihres Programms in `task.c`. Final geben Sie **nur diese einzige** Datei via TUWEL ab.


---

[Aufgabe 1: Ausgeben in die Konsole](TASK1.md)

[Aufgabe 2: Serialisierung/Deserialisierung](TASK2.md)

[Aufgabe 3: Speichern/Laden](TASK3.md)

[Aufgabe 4: Speichern/Laden von Arrays](TASK4.md)

[Aufgabe 5: Transformation eines Datensatzes](TASK5.md)

---

