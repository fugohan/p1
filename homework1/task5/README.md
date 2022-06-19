# Aufgabe 5: Erweiterung der Ausgabefunktion

**Hinweis:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task5.c` ab.

In dieser Teilaufgabe sollen Sie die Ausgabefunktion aus Aufgabe 4 erweitern: Sie soll nun auch immer das Volumen und die Oberfläche des Quaders berechnen und ausgeben. 
Verwenden Sie hierzu die bereits gekapselten Funktionen für die Brechnungen.

Erstellen Sie nun in der `main`-Funktion mehrere Variablen Ihrer Quader-Struktur und geben Sie diese mit der erweiterten Ausgabefunktion aus. 

Wenn Sie die Konventionen aus [`reference5.c`](reference5.c) übernehmen (was Ihnen freisteht), würde Ihre `main`-Funktion jetzt z.B. so aussehen:
```c
int main() {

  struct Cuboid c1 = {1.0, 2.0, 3.0};
  struct Cuboid c2 = {3.0, 2.0, 1.0};
  struct Cuboid c3 = {1.1, 2.0, 3.0};

  cuboid_print(c1);
  cuboid_print(c2);
  cuboid_print(c3);

  return 0;
}
```

Die entsprechende Ausgabe könnte so aussehen:
```shell
Cuboid:
 length:  1.000000
 width:   2.000000
 height:  3.000000
 volume:  6.000000
 surface: 22.000000
Cuboid:
 length:  3.000000
 width:   2.000000
 height:  1.000000
 volume:  6.000000
 surface: 22.000000
Cuboid:
 length:  1.100000
 width:   2.000000
 height:  3.000000
 volume:  6.600000
 surface: 23.000000
```
