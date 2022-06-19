# Aufgabe 6: Umrechnung zwischen Polarkoordinaten und kartesischen Koordinaten

**Hinweise:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task6.c` ab.
Sorgen Sie dafür, dass Ihr Programm mit folgendem Kompilierbefehl ohne Fehler kompiliert und die Ausführung beendet: 

`gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 task6.c -lm && ./a.out`

Vorgegeben sind die zwei Strukturen `Polar` und `Cart`, die entsprechend Polarkoordinaten bzw. kartesische Koordinaten darstellen:
```c
struct Cart
{
  double x;
  double y;
};

struct Polar
{
  double r;
  double phi;
};
```

## 1. Teil
Es ist Ihre Aufgabe, zwei Funktionen zur Umrechnung zwischen diesen beiden Koordinatendarstellungen zu implementieren:
```c
struct Polar cart_to_polar(struct Cart c);
struct Cart polar_to_cart(struct Polar p);
```
Die Umrechnungsfunktionen sind (`polar_to_cart`)
```math
x =  r \cdot cos(\phi) \newline
y =  r \cdot sin(\phi)
```
und (`cart_to_polar`)
```math
r = \sqrt{ x^2 + y^2 } \newline
\phi = atan2(y,x)
```
Beachten Sie, dass Winkelfunktionen in `C` (wie in der Mathematik üblich) im Bogenmaß rechnen!

## 2. Teil
Zu Ihrer Aufgabe gehört es, in der `main`-Funktion einen Test zu implementieren, der überprüft, ob durch eine Transformation und anschließende Rücktransformation mit den von Ihnen implementierten Funktionen wieder die ursprünglichen kartesischen Koordinaten (bis auf Rundungsfehler) geliefert werden.
Testen Sie dies für folgende kartesische Koordinaten:
```c
struct Cart input[5] = {{0, 0}, {1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
```

## Referenz
Sie können sich für beide Teilaufgaben an der Referenz [`reference6.c`](reference6.c) orientieren: hier werden ebenfalls zwei Transformationsfunktionen (Umrechnung zwischen Grad und Radiant) benutzt und getestet.
