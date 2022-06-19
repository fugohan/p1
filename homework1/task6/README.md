# Aufgabe 6: Vergleich von Objekten

**Hinweis:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task6.c` ab.

In dieser Teilaufgabe sollen Sie Ihre Implementierung von Aufgabe 5 mit einer Funktion erweitern, die zwei Quader vergleicht:
- falls jede der drei Seitenlängen exakt gleich ist, soll `1` (True) zurückgeben werden,
- sonst `0` (False).

Wenn Sie die Konventionen aus [`reference6.c`](reference6.c) übernehmen (was Ihnen freisteht), würde diese Vergleichsfunktion so aussehen:
```c
int cuboid_equal(struct Cuboid a, struct Cuboid b);
```

Passen Sie dann Ihre `main`-Funktion dahingegen an,
dass Sie mehere Strukturen erzeugen, vergleichen, und das Ergebnis des Vergleichs ausgeben (Sie können sich hierzu - wie immer - am Referenz-Progamm orientieren).