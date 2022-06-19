# Aufgabe 4: Speichern/Laden von Arrays

Erweitern Sie die Funktionalität in `task.c` um folgende Funktionen. 

**Hinweis:** Beim Testen Ihrer Funktionen sollten Sie immer auch versuchen die Fehlerbehandlung zu testen, z.B. in dem Sie beim Lesen absichtlich die Formatierungskonvention verletzen.

## `save_n`: Array von Büchern speichern 
```c
int save_n(const char *filename, const struct Book books[], int n);
```
Funktionsbeschreibung: Speichert die ersten `n` Elemente des übergebenen Arrays nach einer Serialisierung durch `to_string` jeweils in einer Zeile einer Datei ab. 
Falls ein Element nicht erfolgreich geschrieben werden kann, werden keine weiteren Elemente mehr gespeichert.

Parameter:

- `filename`: Datei in die geschreiben wird.
- `books`: Zeiger auf das Array, das gespeichert werden soll.
- `n`: Anzahl der zu speichernden Elemente.

Annahmen:

- `books` hat mindestens `n` Elemente.

Rückgabewert:

- Anzahl der erfolgreich gespeicherten Elemente.


## `load_n`: Array von Büchern lesen 
```c
int load_n(const char *filename, struct Book books[], int n)
```
Funktionsbeschreibung: Liest die ersten `n` Zeilen aus der übergebenen Datei und führt jeweils eine Deserialisierung dieser Zeilen mittels `from_string` durch. 
Zielort für die Deserialisierung sind die ensprechenden Einträge im übergebenen Array `books`. 
Falls eine Zeile nicht erfolgreich gelesen werden kann, werden keine weiteren Zeilen mehr eingelesen.

Parameter:

- `filename`: Datei aus der gelesen wird.
- `books`: Zeiger auf das Array, das befüllt werden soll.
- `n`: Anzahl der zu lesenden Zeilen.

Annahmen:

- `books` hat mindestens `n` Elemente.

Rückgabewert:

- Anzahl der erfolgreich geladenen Elemente.

