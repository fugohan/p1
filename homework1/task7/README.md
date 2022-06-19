# Aufgabe 7: Vergleich von Objekten mit Toleranzen

**Hinweis:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task7.c` ab.

**Hinweis:** Da im Referenz-Programm die Funktion `fabs` aus `math.h` verwendet wird, ist es nötig, explizit mit der Mathematik-Bibliothek zu Linken (`-lm`): 
```shell
gcc reference7.c -lm -o ref7.exe && ./ref7.exe 
```

In dieser Teilaufgabe sollen Sie Ihre Implementierung von Aufgabe 6 mit einer Funktion erweitern, die zwei Quader auf Grundlage Ihres Volumens vergleicht: 
- falls die Volumina sich um einen Betrag unterscheiden, der unterhalb eines Toleranzwertes liegt, wird `1` (True) zurückgegeben, 
- sonst `0` (False).

Wenn Sie die Konventionen aus [`reference7.c`](reference7.c) übernehmen (was Ihnen freisteht), würde diese Vergleichsfunktion für Volumina mit Toleranz so aussehen:
```c
int cuboid_equal_volume(struct Cuboid a, struct Cuboid b, double tolerance);
```

Passen Sie dann Ihre `main`-Funktion dahingegen an,
dass Sie mehere Strukturen erzeugen, eine Toleranz wählen, und die Strukturen bzgl. ihrer Volumina mittels der neuen Vergleichsfunktion vergleichen (Sie können sich hierzu - wie immer - am Referenz-Progamm orientieren).