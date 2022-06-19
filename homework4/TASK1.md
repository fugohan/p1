# Aufgabe 1: Ausgeben in die Konsole

Erweitern Sie die Funktionalität in `task.c` um folgende Funktionen:

## `print`: Ausgabe eines einzelnen Buches
```c
void print(const struct Book *book);
```
Funktionsbeschreibung: Gibt alle Komponenten der übergebenen Struktur in einer Zeile in die Konsole aus.

Parameter:

- `book`: Zeiger auf das `Book`, das ausgegeben werden soll.

Formatierungsbeispiel:
```
Book = [ ID=133, title="Programming in C++", price=19.99 ]
```

## `print_n`: Ausgabe eines Arrays von Büchern
```c
void print_n(const struct Book books[], int n);
```
Funktionsbeschreibung: Gibt alle Elemente im übergebenen Array in die Konsole aus, wobei pro Zeile ein Element inklusive der Angabe des Index ausgeben wird.

Parameter:

- `book`: Zeiger auf das Array, dessen ausgegeben werden sollen.

Formatierungsbeispiel:
```
0: Book = [ ID=133, title="Programming in C++", price=19.99 ]
1: Book = [ ID=324, title="Programming in C", price=29.99 ]
2: Book = [ ID=532, title="Programming in D", price=39.99 ]
3: Book = [ ID=521, title="Programming in Python", price=49.99 ]
4: Book = [ ID=104, title="Programming in C#", price=59.99 ]
```
