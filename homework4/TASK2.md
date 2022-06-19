# Aufgabe 2: Serialisierung/Deserialisierung 

Erweitern Sie die Funktionalität in `task.c` um folgende Funktionen:

## `to_string`: Serialisierung 
```c
int to_string(char *buffer, int buffersize, const struct Book *book);
```
Funktionsbeschreibung: Gibt die übergebene Struktur (alle Komponenten) in einem vorgegebenen Format in eine einzeilige nullterminierte Zeichenkette aus.

Vorgegebenes Format für die Ausgabe: `"%i;%s;%lf"`

Parameter:

- `buffer`: Zeichenkette, in die geschrieben wird.
- `buffersize`: Länge der Zeichenkette `buffer`
- `book`: Zeiger auf das Buch, das ausgegeben werden soll.

Annahmen:

- `book` ist kein Nullzeiger

Rückgabewert:

- `0` falls keine Fehler aufgetreten sind
- `> 0` falls Fehler aufgetreten sind

## `form_string`: Deserialisierung 
```c
int from_string(const char *buffer, struct Book *book)
```
Funktionsbeschreibung: Liest eine Struktur aus einer einzeiligen Zeichenkette (vorgegebenes Format) ein.

Vorgegebenes Format für das Einlesen: `"%i;%39[^;];%lf"`

Parameter:

- `buffer`: nullterminierte Zeichenkette, aus der gelesen wird.
- `book`: Zeiger auf das Buch, das befüllt werden soll.

Annahmen:

- `book` ist kein Nullzeiger

Rückgabewert:

- `0` falls keine Fehler aufgetreten sind
- `> 0` falls Fehler aufgetreten sind

