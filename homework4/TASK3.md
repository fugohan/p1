# Aufgabe 3: Speichern/Laden

Erweitern Sie die Funktionalität in `task.c` um folgende Funktionen:

**Hinweis:** Beim Testen Ihrer Funktionen sollten Sie immer auch versuchen die Fehlerbehandlung zu testen, z.B. in dem Sie beim Lesen absichtlich die Formatierungskonvention verletzen.

## `save`: Einzelnes Buch speichern 
```c
int save(const char *filename, const struct Book *book);
```
Funktionsbeschreibung: Speichert die übergebene Struktur nach einer Serialisierung durch `to_string` in die erste Zeile einer Datei ab.

Parameter:

- `filename`: Datei in die geschreiben wird.
- `book`: Zeiger auf das Buch, das gespeichert werden soll.

Annahmen:

- `book` ist kein Nullzeiger

Rückgabewert:

- `0` falls keine Fehler aufgetreten sind
- `> 0` falls Fehler aufgetreten sind

## `load`: Einzelnes Buch lesen 
```c
int load(const char *filename, struct Book *book);
```
Funktionsbeschreibung: Liest die erste Zeile aus der übergebenen Datei und führt eine Deserialisierung dieser Zeile mittels `from_string` durch.

Parameter:

- `filename`: Datei in die gelesen wird.
- `book`: Zeiger auf das Buch, das befüllt werden soll.

Annahmen:

- `book` ist kein Nullzeiger

Rückgabewert:

- `0` falls keine Fehler aufgetreten sind
- `> 0` falls Fehler aufgetreten sind
