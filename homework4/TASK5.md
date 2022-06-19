# Aufgabe 5: Transformation eines Datensatzes

Erweitern Sie die Funktionalität in `task.c` um folgende Funktionen: 

## `apply`: Transformation anwenden
```c
void apply(struct Book books[], int n, void (*transform)(struct Book *));
```
Funktionsbeschreibung: Wendet für jedes Element im übergeben Array die Transformationsfunktion `transform` an.

Parameter:

- `books`: Zeiger auf das Array, dessen Elemente transformiert werden.
- `n`: Anzahl der Elemente im Array `books`.
- `transform`: Funktionszeiger auf die Funktion, die für jedes Element ausgeführt wird.


## `add_inflation_2021`: Inflation im Jahr 2021 
```c
void add_inflation_2021(struct Book *book);
```
Funktionsbeschreibung: Führt eine Inflationsanpassung um **3.6%** durch, indem der Preis (`price`) der übergebenen Struktur erhöht wird.

Parameter:

- `book`: Zeiger auf das Buch, dessen Preis angepasst werden soll

Annahmen:

- `book` ist kein Nullzeiger.

## `add_inflation_2022`: Inflation im Jahr 2022 
```c
void add_inflation_2022(struct Book *book);
```
Funktionsbeschreibung: Führt eine Inflationsanpassung um **12.0%** durch, indem der Preis (`price`) der übergebenen Struktur erhöht wird.

Parameter:

- `book`: Zeiger auf das Buch, dessen Preis angepasst werden soll

Annahmen:

- `book` ist kein Nullzeiger.
