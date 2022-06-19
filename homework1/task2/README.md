# Aufgabe 2: Kapselung von Teilaufgaben in eigenen Funktionen

**Hinweis:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task2.c` ab.

In dieser Teilaufgabe geht es darum, Ihr Programm aus Aufgabe 1 zu restrukturieren:
Die Berechnungen des Volumens und der Oberfläche sollen in jeweils eigenen Funktionen gekapselt werden, die dann in der `main`-Funktion aufgerufen werden.
Natürlich müssen alle für die Berechnung benötigten Werte als Argumente an die Funktionen übergeben werden. Die Ergebnisse der Berechnung werden über den Rückgabewert der Funktion verfügbar gemacht. 

Wenn Sie die Konventionen aus [`reference2.c`](reference2.c) übernehmen (was Ihnen freisteht), würden die Funktionsköpfe so aussehen:
```c
double cuboid_volume(double length, double width, double height);
double cuboid_surface(double l, double w, double h);
```
Achten Sie darauf, dass Sie Ihre Funktionen nicht nur implementieren, sondern auch wirklich in der `main`-Funktion aufrufen.

