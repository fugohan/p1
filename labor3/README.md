# Labor 3

Zeitlich ist die heutige Laboreinheit in 2 Teile aufgeteilt:

**1. Teil** (30min): Ausarbeitung von Programmieraufgaben (Angaben und Abgaben über TUWEL). Ihre Lösungen werden im Nachgang bewertet.

**2. Teil** (90min): Sie erarbeiten sich selbstängig (Diskussionen unter Studierenden sind erlaubt und erwünscht) die vorgegeben Aufgabenstellungen. Sie können jederzeit Fragen stellen. Ziel ist es, dass Sie die unter **Demonstration** vorgegebenen Arbeitschritte und Aufgaben lösen.
Sobald Sie sich in der Lage fühlen, diese Arbeitschritte und Aufgaben zu demonstrieren, rufen Sie bitte einen Betreuer zu Ihrem Arbeitsplatz.

---

# 1. Teil (30min): Bewertete Programmieraufgaben

 **Aufgabenstellung über TUWEL:**

`Hausübung 3 (2. Teil der Abgabe)`

# 2. Teil (90min): Labor mit den Schwerpunkten formatierendes Einlesen/Ausgeben und Benutzereingabe

**Fragen fragen:** Nutzen Sie die Gelegenheit bei den Laborterminen bitte auch, um Ihre Fragen im Hinblick auf das Programmieren in C oder auch allgemeinerer Art zu stellen!

# Demonstration


0. Laden Sie sich diese Angabe (samt Quelldateien) als `.zip`-Datei herunter und entpacken Sie diese.

1. **Ausgeben:** in `print/main.c` wird ein Array aus 3 Elementen jeweils in die Konsole (`printf`), in eine Datei (`fprintf`) und einen String (`sprintf`) geschrieben. Ihre Aufgaben sind: 
    1. Diskutieren Sie: Warum ist es bei `sprintf` nötig die Schreibposition *manuell* zu erhöhen, und bei `fprintf` nicht?
    2. Entfernen Sie die `for`-Schleifen, indem Sie alle 3 Elemente mit einem Funktionsaufruf schreiben.
    3. Ändern Sie die Formatierung für Fliesskommazahlen so, dass die "kleinen Zahlen" im Array nicht als `0.000000` ausgegeben werden.

2. **Einlesen:** in `scan/main.c` wird ein Array aus 3 Elementen einmal aus einer Datei (`fscanf`) und einmal aus einem String (`sscanf`) gelesen. Ihre Aufgaben sind:
    1. Ändern Sie die Datei, die gelesen wird (`scan/array.txt`) und den String `string`, der gelesen wird so, dass die Konvertierung teilweise oder ganz fehlschlägt. 
    2. Diskutieren Sie: Welche Bedeutung hat der Rückgabewert bei den *scan*-Funktionen? Warum ist es wichtig diesen Wert auch zu überprüfen?  

3. **Benutzereingaben**: Im Ordner `userinput` befinden sich 3 Programme, die jeweils eine Fließkommazahl von der Konsole einlesen. Ihre Aufgaben sind:
    1. Diskutieren Sie: Was unterscheidet die drei Programme?
    2. Passen Sie `userinput/main3.c` so an, dass eine Zeile mit 3 durch jeweils ein `;` abgegrenzte Fließkommazahlen gelesen werden und geben 
    Verwenden Sie hierzu folgendes Format:
        ```c
        "%lf;%lf;%lf"   // matches 3 floats delimited by ';'
        ```    
        Geben Sie die konvertierten Werte aus.

    3. Passen Sie `userinput/main3.c` weiter an, so dass vor den 3 Fließkommazahlen ein ebenfalls mit `;` abgegrenzter String gelesen wird. Verwenden Sie hierzu folgendes Format:
        ```c
        "%[^;]"            // matches everything until a ';' occurs
        "%lf;%lf;%lf"      // matches 3 floats delimited by ';'     
        "%[^;];%lf;%lf;%lf"   // above two combined 
        ```  
        Geben Sie die konvertierten Werte aus.


# Hintergrundwissen


## Ausgeben und Einlesen

Sobald ein Datentyp für den Menschen lesbar ausgegeben werden soll, muss eine Konvertierung/Formatierung stattfinden.
Ebenso ist eine solche Konvertierung/Formatierung auch in der anderen Richtung nötig, wenn menschenlesbare Daten eingelesen werden sollen. 
In der C Standardbibliothek stehen dafür Funktionen bereit.

### Formatierendes Ausgeben

Für die formatierende Ausgabe stehen zwei leicht unterschiedliche `print`-Funktionen bereit (https://en.cppreference.com/w/c/io/fprintf):

**`fprintf`** -- Ausgabe in einen Datenstrom (engl. *stream*), z.B. in eine zum Schreiben geöffnete Datei.

**`sprintf`** -- Ausgabe in einen String; dieser String kann dann weiterverarbeitet werden.

### Formatierendes Lesen

Ebenso stehen für das formatierende Einlesen analog zwei `scan`-Funktionen bereit (https://en.cppreference.com/w/c/io/fscanf):

**`fscanf`** -- Lesen aus einem Stream, z.B. aus einer zum Lesen geöffneten Datei.

**`sscanf`** -- Lesen aus einem String; dieser String kann dann weiterverarbeitet werden.


### Formatierendes Ausgeben/Einlesen von der Konsole

**`printf`, `scanf`** -- Sind sozusagen "Spezialversionen" von `fprintf` und `fscanf`, bei denen der Datenstrom bereits festgelegt ist, nämlich auf `stdout` beim Schreiben und `stdin` beim Lesen.

### Ausgeben/Einlesen ohne Formatierung

**`fgets`, `fputs`** -- Einlesen und Ausgeben von Strings in einen Stream.

**`fgetc`, `fgetc`** -- Einlesen und Ausgeben von einzelnen Buchstaben in einen Stream.

## Serialisierung und Deserialisierung

Solange ein Objekt (z.B. eine Struktur, oder ein Array von Strukturen) nur "intern" während der Ausführung eines Programms benötigt wird, besteht kein Drang dieses Objekt abzuspeichern und über die Ausführung des Programms hinaus verfügbar zu halten.  
Es kann jedoch aus vielerlei Gründen (z.B. Debugging, Speichern eines Bearbeitungszustandes, Weitergabe an andere Nutzer) notwendig werden, Objekte abzuspeichern. 
Je nachdem, welcher Benutzerkreis (und welche anderen Systeme) die gespeicherten Daten verwenden können sollen, können unterschiedliche Formatkonventionen zum Einsatz kommen. 

**Serialisierung**

Umwandlung eines Objekts (während das Programm ausgeführt wird) in einen Datenstrom der abgespeichert werden kann.

**Deserialisierung**

Umwandlung eines Datenstroms zurück in eine Objekt, das wieder in den Programmablauf eingebunden werden kann. 

**Spezifikation des Datenstroms**

Es gibt natürlich viele Möglichkeiten, wie solch ein Datenstrom aussehen kann.
Jedenfalls muss sich der Anwenderkreis einig sein, wie der Datenstrom aufgebaut ist, da sonst keine fehlerfreien Serialisierung- und Deserialisierungfunktionen entwickelt werden können.

**Beispiele**

Serialisierung und Deserialisierung werden in der Praxis häufig eingesetzt, ohne dass Sie sich dessen vielleicht bewusst sind, hier einige Beispiele:
- Excel-Dateiformate:
    - `.csv`, trennzeichenbasiert (ASCII)
    - `.xls`, *Excel 97*-Format (binär)
    - `.xlsx`: XML-basiert (ASCII-Basis, eingebettete Binärdaten)
    - `.ods`: XML-basiert (ASCII-Basis, eingebettete Binärdaten)
- Bild-Dateiformate
    - `.jpg`, binär
    - `.svg`, ASCII
- Audio-Dateiformate
    - `.mp3` binär

... also schlichtweg alle Dateien auf Ihrem Rechner und auch alle Datenströme zu oder von Ihrem Browser ins Internet.

