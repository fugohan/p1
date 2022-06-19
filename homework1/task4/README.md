# Aufgabe 4: Kapselung der Ausgabe eines Objekts in einer eigenen Ausgabefunktion

**Hinweis:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task4.c` ab.

In dieser Teilaufgabe geht es darum, Ihr Programm aus Aufgabe 3 weiter zu restrukturieren:
Diesmal sollen die `printf`-Aufrufe, die einen Quader beschreiben, ebenfalls in einer eigenen Funktion gekapselt werden.

Wenn Sie die Konventionen aus [`reference4.c`](reference4.c) übernehmen (was Ihnen freisteht), würde die Funktion so aussehen:
```c
void cuboid_print(struct Cuboid c);
```

Verwenden Sie die Ausgabefunktion auch in der `main`-Funktion (anstatt der einzelnen `printf`-Aufrufe).
