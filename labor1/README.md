# Labor 1

Zeitlich ist die heutige Laboreinheit (so wie auch alle noch folgenden Laboreinheiten) in 2 Teile aufgeteilt:

**1. Teil** (45min): Ausarbeitung von 3 Programmieraufgaben (Angaben und Abgaben über TUWEL). Ihre Lösungen werden im Nachgang bewertet.

**2. Teil** (75min): Sie erarbeiten sich selbstängig die vorgegeben Aufgabenstellungen. Sie können jederzeit Fragen stellen. Ziel ist es, dass Sie die unter **Demonstration** vorgegebenen Teilschritte ohne Hilfe demonstrieren und kommentieren können.
Sobald Sie sich in der Lage fühlen, diese Teilschritte zu demonstrieren, rufen Sie bitte einen Betreuer zu Ihrem Arbeitsplatz.


***

# 1. Teil (45min): Bewertete Programmieraufgaben

Ihnen werden über TUWEL 3 Programmieraufgaben gestellt:

`Hausübung 1 (2. Teil der Abgabe)`

 **Bearbeiten Sie ZUERST diese Programmieraufgaben**: https://tuwel.tuwien.ac.at/course/view.php?idnumber=360016-2022S.

Die Bearbeitungszeit beträgt 45min. 
Nach der Bearbeitungszeit müssen Sie Ihre Lösungen wieder in TUWEL hochladen.
Ihre Lösungen werden dann bis Mitte der Folgewoche bewertet.

Erst **nach** dieser Abgabe widmen Sie sich den Themen des **2. Teils des Labortermins** (siehe unten). 

# 2. Teil (75min): 

# Demonstration

Rufen Sie einen Betreuer zu Ihrem Arbeitsplatz und demonstieren Sie ihm die selbständige Ausführung folgender Arbeitschritte:

0. Herunterladen dieser Angabe (samt Quelldateien) als `.zip`-Datei und 
    - Erstellen eines neuen Ordners (mittels `mkdir`), 
    - Verschieben der `.zip`-Datei dorthin (mittels `mv`), und
    - Entpacken im neuen Ordner (mittels `unzip`).
1. Manuelle Verbesserung der Formatierung **einer der beiden** Dateien `format/format1.c` oder `format/format2.c`:
    1. Legen Sie einen Wert für die Tiefe der Einrückungen fest.
    2. Legen Sie eine Regel fest, wie Sie `{` und `}` in Hinblick auf Zeilenumbrüche positionieren. 
    3. Formatieren Sie die Dateie nach Ihren Regeln.
    4. Kompilieren Sie den formatierten Quellcode und führen Sie Ihn aus.
2. Isoliertes Ausführen des Präprozessor-Schritts für die Datei `prepro/main.c`
    mit den Befehlen
    ```shell
    # performing only preprocessor step without compiling
    gcc -E main.c -lm 1> main.pre.c 
    # without including stdlib headers
    gcc -E -nostdinc main.c -lm 2> /dev/null 1> main.pre.nostdinc.c  
    ```
    mit anschließender Suche nach der Deklaration der `cos`-Funktion in der erzeugten Datei `main.pre.c`.
3. Nachschlagen der Funktionsbeschreibung für die `cos`-Funktion aus `math.h` auf der Internetseite https://en.cppreference.com 
4. Korrektur der Fehler in **mindesten 3** der folgenden Dateien

    - `fix/fix1.c`
    - `fix/fix2.c`    
    - `fix/fix3.c`        
    - `fix/fix4.c`     
    - `fix/fix5.c`        

    mit anschließendem Kompilieren und Ausführen.

    **Hinweis**: Sie können sich beim Aufspüren von Fehlern von Ihrem Kompiler unterstützen lassen
    ```shell
    gcc -g -fsanitize=address -Wall -Werror -pedantic -std=c11 fix1.c && ./a.out
    ```

# Hilfestellungen zum Lösen der Demonstrationsaufgaben

## Dateien kopieren/verschieben/umbennenen 

Sie können mittelse des Befehls `mv` (von engl. *move*) Dateien oder Ordner umbenennen:
```shell
mv lab1/ lab2/      # rename folder 'lab1' to 'lab2'
mv main.c main1.c   # rename file 'main.c' to 'main1.c'
```
Falls Sie eine Datei "nur" verschieben wollen (ohne Umbenennen), kann der Dateiname für den Zielort weggelassen werden:
```shell
mv Downloads/lab1-main.zip lab1/demo/           # moving only (keeping filename)
mv Downloads/lab1-main.zip lab1/demo/lab1.zip   # moving AND renaming to 'lab1.zip'
```
Alternativ könnnen Sie mit dem `cp`-Befehl (von engl. *copy*) Ordner und Dateien auch kopieren:
```shell
cp main.c main1.c       # creates copy of 'main.c' named 'main1.c'
cp -r lab1/ lab2/       # creates copy of folder 'lab1' named 'lab2'
```

**Hinweise**

- Alle Pfadangaben in obigen Befehlen werden *relativ* interpretiert (Sie könnten also immer ein vorangestelltes `./` hinzufügen, ohne die Effekte zu verändern).
- Bei Kopieren von Ordnern (samt Unterordnern und Dateien) wird zwingend die `-r`-Option für `cp` gebraucht.
- Sie können sich jederzeit im Terminal mit `man cp` oder `man mv` das Manual für den jeweiligen Terminal-Befehl ausgeben lassen.

## Dateien entpacken

Um eine `.zip`-Datei zu entpacken, steht Ihnen der `unzip`-Befehl zur Verfügung. 
Die einfachste Vorgehensweise ist wie folgt:

0. Erstellen Sie ggf. das Verzeichnis, in dem die Datei entpackt werden soll (`mkdir`).
1. Verschieben (oder kopieren) Sie die `.zip`-Datei in das Verzeichnis (`mv` oder `cp`).
2. Wechseln Sie in das Verzeichnis (`cd`).
3. Entpacken Sie die Datei (z.B. `unzip labor1-main.zip`).
4. Zeigen Sie sich zur Kontrolle die entpackten Dateien an (`ls` oder `ll`).

## Präprozessor

Der Präprozessor-Schritt ist die erste Transformation des Quellcodes, die durch einen Kompiliervorgang für eine Kompiliereinheit (engl. *compilation unit*) angestoßen wird. 
Sie können sich das Resultat dieses Schrittes anzeigen lassen (hier für die Datei `prepro/main.c`):
```shell
# only performs preprocessor-step, no compilation/linking 
# '-lm' links to the std math library
gcc -E main.c -lm  
```
So erhalten Sie die Ausgabe direkt in das Terminal. 
Sie können die Ausgabe aber auch in eine Datei umleiten, um diese Quelldatei (wie gewohnt) im Ihem Code-Editor zu betrachten:
```shell
# writes output of stdout ('1>') to file 'main.pre.c'
gcc -E main.c -lm 1> main.pre.c 
```
Da das Inkludieren der Header-Dateien aus der Standardbibliothek den Inhalt der erzeugten Dateien recht unübersichtlich gestaltet und oft auch nicht relevant ist, gibt es die Möglichkeit diese auszublenden/wegzulassen:
```shell
# disable stdlib includes (which produces preprocessor errors written to stderr)
# '2> /dev/null' neglects stderr output
# '1> main.pre.nostdinc.c' writes stdout output to file 'main.pre.nostdinc.c '
gcc -E -nostdinc main.c -lm 2> /dev/null 1> main.pre.nostdinc.c 
```

## Quellcode-Formatierung

Formatierung von Quellcode ist für menschliche Betrachter sehr wichtig, um die Interpretation zu beschleunigen oder überhaupt erst möglicht zu machen.
Konsistenz bei der Formatierung hilft dabei, diese Interpretationsgeschwidigkeit noch weiter zu erhöhen.

Der Sprachstandard für C erzwingt wenig Formatierung, lediglich die Sequenz der Zeichen ist relevant: Sie können alle Zeilenumbrüche, Einrückungen und mehrfache Leerzeichen aus formatiertem Quellcode entfernen (oder auch beliebig hinzufügen) ohne die Funktionalität des Programms zu beinflussen:

**Hinweis:** Obiges gilt **nachdem** die Transformationen des Präprozessors durchgeführt und alle Kommentarzeilen entfernt wurden.

Hier 3 Beispiele für Formatierungen des selben Quellcodes, um zu verdeutlichen, was alles erlaubt/möglich ist:

**Formatierung: 'Minimale Anzahl an Zeichen'**
```c
typedef double d; int main(){d v[10]={0.0};for(int n=0;n<10;n=n+
1){v[n]=n;}d s=0.0;for(int n=0;n<10;n=n+1){s=s+v[n];}return s;}
```

**Formatierung: 'Keine Konsistenz'**
```c
int main() { double vector[10] = {      0.0
     };
  for 
  (
  int n = 0; 
  n < 10;
  n = n + 1
  )
  { vector[n] = n; } double sum = 0.0;
  for (int n = 0; n < 10; n = n + 1)
  {
    sum 
    =
    sum 
    + 
    vector
    [
    n
    ];
  }
             return sum;}
```

**Formatierung: 'Normal'**
```c
int main()
{
  double vector[10] = {0.0};
  for (int n = 0; n < 10; n = n + 1)
  {
    vector[n] = n;
  }
  double sum = 0.0;
  for (int n = 0; n < 10; n = n + 1)
  {
    sum = sum + vector[n];
  }

  return sum;
}
```

## Fehlersuche

Trotz angenehmer und konsistenter Formatierung kann es sehr schwer sein, C-Programme auf Fehler zu überprüfen:
- Ein erfolgreiches **Kompilieren** alleine garantiert noch **gar nichts** in Hinblick auf das Verhalten zur Laufzeit.
- Ein "erfolgreiches" anschließendens **Ausführen** garantiert **auch noch gar nichts**:
    - Ein Ausführen bezieht sich immer auf die gegebenen Eingangsgrößen und sagt nichts auf das Verhalten für andere Eingangsgrößen aus.
    - Als Eingangsgrößen können auch der Compiler/die Toolchain und der Zustand des Systems während der Ausführung gesehen werden.

Wo die Regeln enden, die der C-Standard vorgibt, fängt sogenanntes *undefined behaviour* an: es wird nichts mehr garantiert, kann aber unter Umständen gutgehen, z.B. falls ein unerlaubter Speicherzugriff keinen Einfluss auf den weiteren Programmablauf nimmt. 

Sie sollten sich **nie** auf *undefined behaivour* "verlassen" und alle Möglichkeiten ausschöpfen, solche Situationen zu erkennen:

- Verwenden Sie "strenge" Einstellungen für den Compiler.
- Legen Sie sich beim kompilieren auf deinen C-Standard fest.
- Verwenden Sie während der Entwicklung Hilfestellungen, die Ihnen Ihre Toolchain bietet.

Unten finden Sie entsprechende Argumente, die Sie auch alle kombinieren können: 

```shell
gcc -Wall -Werror main.c # turns on all warnings, turns all warnings into errors  
gcc -std=c11 -pedantic main.c # only allows C11-Standard compatible source code 
gcc -g -fsanitize=address main.c # enable address/memory sanitizer to detect access violations at runtime 
```