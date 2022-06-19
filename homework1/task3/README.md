# Aufgabe 3: Verwendung von Strukturen für zusammengehörige Daten

**Hinweis:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task3.c` ab.

In dieser Teilaufgabe geht es darum, Ihr Programm aus Aufgabe 2 weiter zu restrukturieren:
Diesmal sollen Sie eine Struktur definieren und benutzen, die die zusammengehörigen Daten, die einen Quader beschreiben, enthält.

Wenn Sie die Konventionen aus [`reference3.c`](reference3.c) übernehmen (was Ihnen freisteht), würde die Struktur so aussehen:
```c
struct Cuboid {
  double length;
  double width;
  double height;
};
```

Passen Sie nun Ihre zwei Brechnungsfunktionen so an, dass die Struktur als Argument verwendet wird (anstatt der 3 einzelnen Argumente):
```c
double cuboid_volume(struct Cuboid c);
double cuboid_surface(struct Cuboid c);
```

Benutzen Sie diese Struktur nun auch in der `main`-Funktion und passen Sie alle notwendigen Stellen an (orientieren Sie sich ggf. am Referenz-Programm für Rechtecke).
