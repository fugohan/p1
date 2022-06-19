# Aufgabe 1: Anpassung von 2D (Rechteck) zu 3D (Quader)

**Hinweis:** Geben Sie Ihre Lösung als Quelldatei mit dem Namen `task1.c` ab.

Orientieren Sie sich am Referenz-Programm [`reference1.c`](reference1.c), das die Fläche und den Umfang für ein **Rechteck** berechnet und die Ergebnisse im Terminal ausgibt. Sie können das Referenz-Programm sofort kompilieren und ausführen, z.B. mit diesem kombinierten Befehl
```shell
gcc reference1.c -o ref1.exe && ./ref1.exe 
```
Die Ausgabe des Referenz-Programm sieht so aus:
```shell
a: 1.000000
b: 2.000000
area: 2.000000
perimeter: 6.000000
```

Ihre Aufgabe ist es, eine Quelldatei `task1.c` zu erstellen und in der `main`-Funktion (analog zum Referenz-Programm) das Volumen und die Oberfläche eines **Quaders** zu berechnen und auszugeben. Nach Fertigstellung sollte die Ausgabe Ihres Programms in etwa so aussehen:
```shell
a: 1.000000
b: 2.000000
c: 3.000000
volume: 6.000000
surface: 22.000000
```

Volumen eines Quaders:
```math
V_{\text{cuboid}} =  \text{length}\times\text{width}\times\text{height}
```

Oberfläche eines Quaders:
```math
A_{\text{cuboid}} =  2 (\text{length}\times\text{width} + \text{width}\times\text{height} + \text{height}\times\text{length})
```

