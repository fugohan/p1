# Hausübung 2 (Abgabe via TUWEL bis 2. Mai 10:00 Uhr)

Der Schwerpunkt dieser Hausübung liegt auf dem Umgang mit *Arrays* und *Schleifen*.
Für die Bewertung werden folgende Kompiliereinstellungen verwendet:
```shell
gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11
```
Wir empfehlen **dringend** auch beim Implementieren der Hausübung diese  Einstellungen zu verwenden (für detaillierte Erklärungen zu den verwendeten Einstellungen siehe Unterlagen zum [Labor 1](https://gitlab.tuwien.ac.at/360.016_programming_1/labor1]https://gitlab.tuwien.ac.at/360.016_programming_1/labor)).

---

[Aufgabe 1: Umwandlung von `for`- zu `while`-Schleifen](task1/)

[Aufgabe 2: Funktionen mit Array-Argumenten](task2/)

[Aufgabe 3: Minimum, Maximum und Mittelwert eines Arrays von Zufallszahlen](task3/)

[Aufgabe 4: Werte in einem Array finden und zählen](task4/)

[Aufgabe 5: Vergleich und Vertauschen von Elementen mittels gekapselter Funktionen](task5/)

[Aufgabe 6: Umrechnung zwischen Polarkoordinaten und kartesischen Koordinaten](task6/)             

---

## Allgemeine Hinweise

**Übergabe eines Arrays an eine Funktion:**

1. Da die Länge eines Arrays in C nicht direkt "im" Array hinterlegt werden kann, ist für die Übergabe ein Hilfsargument nötig, das die Länge angibt:
    ```c
    void function(double array[], int size);
    ``` 
2. Eine Funktion kann die Werte eines direkt übergebenen Arrays ändern, mit Auswirkung auch für den Aufrufenden:
    ```c
    int main() {
      double data[10] = {0.0};
      function(data, 10); 
      // values in 'data' might have changed 
    }
    ```
3. Falls eine Funktion die Werte eines übergebenen Arrays nicht ändert, ist dies auch für den Aufrufenden eine wichtige Information und wird mit dem `const`-Qualifizierer signalisiert:
    ```c
    void function(const double readonly_array[], int size);
    ``` 

**Zufallszahlen:**

In einigen der Aufgaben werden Arrays mit Zufallszahlen initialisiert. 
Es wird die Funktion `rand()` aus `stdlib.h` verwendet um ganzzahlige positive Pseudo-Zufallszahlen zu generieren, die dann auf den gewünschten Wertebereich (`min` bis `max`) skaliert werden:
```c
void init_random(double array[], int size, double min, double max)
{
  for (int n = 0; n < size; n = n + 1)
  {
    array[n] = (rand() / (RAND_MAX / (max - min))) + min;
  }
}
```


