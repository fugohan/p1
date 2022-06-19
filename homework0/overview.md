# Überblickswissen

Beim Programmieren ist es in der Praxis wichtig, sich nicht allein auf die Funktionalität und Regeln der Programmiersprache zu konzentieren, sondern auch das Umfeld im Blick zu haben. 
Das Umfeld wird weitestgehend durch die vorliegende Aufgabenstellung bestimmt:

- **Für** welches System wird das Programm geschrieben?
    - z.B. für einen Microcontroller, einen Desktop/Laptop-Rechner oder ein Mobiltelefon
- **Auf** welchem System findet die Entwicklung des Programms statt?
    - typischerweise ist dies der Arbeitsplatzrechner des Entwicklers

In 360.016 konzentieren wir uns auf die Programmierung in der Sprache C **für und auf** einer der derzeit üblichen Rechnerarchitekturen für Laptops und Desktop-Rechner, da dies den einfachsten Einstieg darstellt: Es wird keine spezielle Hardware (neben dem eigenen Rechner/Laptop) benötigt.

Zunächst wird anhand eines kleinen Beispiel-Programms auf die Bezüge eines Programms zu seinem Umfeld eingegangen. 

***

## Beispiel-Programm

Dies ist der *Quellcode* eines minimalen *Hallo Welt!*-Programms in der Sprache C:
```C
#include <stdio.h>

int main()
{
    printf("Hallo Welt!\n");
    return 0;
}
```

**Quellcode**

Der Quellcode eines Programs wird in einer Textdatei gespeichert (es können auch mehere sein). 
Dass sich in einer Datei C-Quellcode befindet, wird überlichweise mit der Dateiendung `.c` signalisiert.
Der Quellcode kann mit einem Compiler zu einem lauffähigen Programm übersetzt (kompiliert) werden, falls der Quellcode

1. valide *Syntax* enthält (also die einzelnen Zeichen/Buchstaben nur in den erlaubten Reihenfolgen und Abständen vorkommen), und 
2. valide *Semantik* enthält (nicht valide Semantik wäre z.B. der versuchte Aufruf einer Funktion, die nicht vorher bekanntgemacht wurde).

Welche Syntax valide ist und welche Semantik-Regeln es gibt, wird im C-Standard definiert. 
Der oben abgebildete Quellcode hat valide Syntax und Semantik und wird beim Aufruf des komplierten Programms `Hallo Welt!` in der Standard-Ausgabe ausgegeben und danach die Ausführung beendet.

**Umfeld**

Es stellt sich also sofort die Frage nach dem Umfeld der Programms:

- Wie kann man dem Programm mitteilen, was genau die Standard-Ausgabe ist? (also *wohin* geschrieben werden soll) 
- Wo liegt die Datei `stdio.h`?
- Offensichtlich wird `stdio.h` *inkludiert* (mittels `#include`), wieso ist dies nötig?
- Welche Voraussetzungen müssen geschaffen werden, um das Programm kompilieren zu können?
- Wie kann man das Programm nach dem Kompilieren aufrufen?
- Was genau passiert eigentlich beim Kompilieren?

Diese Fragen sollen verdeutlichen, dass vieles von Details des Umfelds abhängt:

- Wie die Standard-Ausgabe angesprochen werden kann, hängt vom Betriebssystem ab; die C-Standardbibliothek bietet betriebssystemübergreifende Schnittstellen, u.A. auch um in die Standard-Ausgabe zu schreiben.    
- Wo genau die relevante Version der Datei `stdio.h` liegt, hängt von der Systemkonfiguration ab.
- Die Datei `stdio.h` ist Teil der C-Standardbibliothek und macht u.a. die Funktion `printf` bekannt, die später im Quellcode aufgerufen wird.
- Zum Kompilieren muss ein C-Compiler installiert sein, der das Zielsystem, **für** das kompilieren werden soll, untertützt.
- Der Compiler erstellt eine ausführbare Datei, die in der Kommandozeile ausgeführt werden kann.
- Das Kompilieren umfasst eigentlich mehrere Teilschritte; ein wichtiger Teilschritt nach dem eigentlichen Übersetzen (Kompilieren) ist das Auflösen von Verweisen zwischen beteiligten Programmteilen (Linking). Im vorliegenden Fall wird der Verweis auf die `printf` Funktion in der installierten C-Standardbibliothek hergestellt. 

**Entwicklungsarbeit**

Wenn man einem Entwickler über die Schulter schauen könnte, würde man wahrscheinlich feststellen:

1. Mit der Sprache unerfahrene Entwickler verbringen sehr viel Zeit mit "Kleinigkeiten", weil Syntax und Semantik ungewohnt sind; die mangelnde Erfahrung führt u.U. zu umständlichen Lösungen.
2. Erfahrenere Entwickler haben weniger Probleme mit Syntax und Semantik, legen aber bereits Wert auf aussagekräftigen und wartbaren Quellcode.
3. In größeren Projekten wächst der Aufwand für die Entwickler, der nötig ist, um die gewünschte Funktionalität robust und konsistent zur Verfügung stellen zu können (Konventionen, Programmierstil, Design, Tests, Verteilung). 

In allen Könnensstufen ist jedoch der geübte Umgang mit dem Compiler sehr wichtg:

- Der Compiler gibt Fehlermeldungen und Warnungen beim Kompilieren aus: die Fähigkeit die Fehlermeldungen einzuordnen und zuzuordnen zu können ist **enscheidend für den schnellen Lernfortschritt in Bezug auf Syntax und Semantik**.
- Der Compiler bietet zahlreiche fortgeschrittene Optionen, die mit wachsender Erfahrung an Bedeutung gewinnen. 

In der Praxis gibt es für einen Entwickler viele Möglichkeiten sich die persönliche *Entwicklungsumgebung* einzurichten: 

- Es gibt nicht nur einen C-Compiler.
- Es stehen eine Vielzahl von Applikationen bereit, die darauf ausgerichtet sind, eine effiziente Entwicklungsarbeit zu unterstützen.
- Manche Applikationen stehen jedoch nicht für alle gängigen Betriebssysteme zur Verfügung, bzw. die Installation ist aufwendig, oder die Funktionalität ist eingeschränkt.

***

## Betriebssysteme 
Es ist wichtig, sich klarzumachen, dass alle gängigen Betriebssysteme folgende Werkzeuge/Applikationen vorhalten, auch wenn Sie vielleicht noch nicht aktiv von allen Gebrauch gemacht haben.

### Benutzerverwaltung
Nach dem Hochfahren des Betriebssystems ist keine Interaktion möglich (außer Ausschalten), ohne sich vorher als Benutzer identifiziert zu haben (meistens mittels Passwort). 
Einem Benutzer ist nach der Anmeldung immer eine gewisse Konfiguration zugewiesen, diese umfasst u.a.

- Schreib- und Leserechte auf eigene Ordner/Dateien, und
- die Erlaubnis (oder auch nicht) die Systemkonfiguration anzupassen (Administrator-Rechte).

### Dateisystem
Nachdem sich ein Benutzer angemeldet hat, steht ein Dateisystem zur Verfügung (Hierarchie von Ordnern und Dateien).
Ordner und Dateien können auf lokale Daten (eingebaute Festplatten/USB-Sticks) oder aber auf entfernte Dateien (z.B. ein Netzlaufwerk) verweisen.

### Terminal
Ein Terminal erlaubt es dem Benutzer, mittels Befehlseingabe (Texteingabe) mit dem Betriebssystem und den verfügbaren Programmen zu interagieren. 
Oft bieten Applikationen neben einer grafischen Schnittstelle auch die Möglichkeit der Steuerung über das Terminal.
Befehlseingabe über das Terminal bietet gegenüber dem "Navigieren und Klicken" auf grafischen Oberflächen entscheidende Vorteile: **einfache Reproduzierbarkeit und damit auch einfache Automatisierung**. 

Nachfolgend noch einige Eigenschaften von Terminals, von denen man ausgehen kann (und muss):

- Jeder Benutzer kann ein Terminal öffnen.
- Es können mehrere Terminals gleichzeitig geöffnet werden.
- Der Effekt einer Anpassung der Systemkonfiguration wird nicht unbedingt vollumfänglich in allen bereits geöffneten Terminals wirksam (oft ist ein Schließen und wieder Öffnen des Terminals die einfachste Lösung).
- Aus Sicherheitsgründen müssen Terminal-Befehle, die die Systemkonfiguration ändern, mit Adminisrator-Rechten ausgeführt werden.
- Es ist für berechtigte Benutzer möglich im Terminal in einen *Administrator-Modus* zu wechseln.
- Die Befehlsmöglichkeien, die ein Terminal bietet, können zwischen unterschiedlichen Betriebssystemen abweichen.
- Die genauen Befehle und Konventionen bei der Befehlseingabe unterscheiden sich u.U. drastisch zwischen den Betriebssystemen.
- Es gibt viele häufig verwendete Synonyme für "Terminal" bzw. die Eingabeaufforderung im Terminal:
    - Konsole (console)
    - Kommandozeile (prompt)
    - CLI (**C**ommand **L**ine **I**nterface)
    - shell (auf Unix-Systemen)

***

## Entwicklungsumgebung

Es gibt unter Entwicklern unterschiedliche Meinungen, was die beste Entwicklungsumgebung darstellt. 
In der Praxis hängt dies natürlich auch von den tatsächlichen Entwicklungsaufgaben und Programmiersprachen ab.
Die extremen Ausprägungen lassen sich vielleicht so gruppieren:

**"Terminals only"**

Hier macht der Entwickler fast alles über das Terminal, bzw. über die im Terminal verfügbaren Hilfsprogramme: 

- Systemkonfiguration: neue Komponenten installieren/deinstallieren/konfigurieren
- Dateimanagement: Navigation im Dateisystem, Erstellen/Löschen/Kopieren/Umbenennen/Verschieben von Dateien und Ordnern
- Editieren von Textdateien: dazu zählen auch Quellcode-Dateien und Konfigurations-Dateien 
- Kompilieren und Fehlersuche
 
Das Ausleben dieser Ausprägung ist nur möglich, falls die Plattform (Betriebssystem) ausreichend komfortable Hilfsprogramme mit Terminal-Schnittstelle anbietet.

**"Full IDE"**

Hier legt der Entwickler sich auf eine IDE mit der gewünschten Funktionalität fest und setzt diese Funktionalität auch ein, z.B.:

- automatische Konfigurationsanpassung sobald Quellcode-Dateien hinzugefügt werden
- Auto-Vervollständigung beim Editeren der Quellcode-Dateien
- automatisches Anlegen von speziellen Konfigurationen für Fehlersuche (Debug) und Veröffentlichungen (Release)
- Starten des Kompiliervorgangs auf Knopfdruck

Das Ausleben dieser Ausprägung ist nur möglich, falls für die Plattform (Betriebssystem) und Programmiersprache eine geeignete IDE verfügbar ist.

**Vor- und Nachteile**

Beide oben erwähnten Szenarien haben Vor- und Nachteile, die natürlich abhängig von der genauen Situation unterschiedlich gewichtet sein können.

Für IDEs könnte man Folgendes als Nachteile werten:

- IDEs können durch Ihren Funktionsumfang überwältigend sein und benötigen u.U. viel Einarbeitungszeit bevor eine effiziente Benutzung möglich ist.
- Um die Portabilität eines Software-Projekts zu erhalten, ist es wahrscheinlich, dass auf IDE-unabhängige Konfigurationstools zurückgegriffen werden muss; falls die gewählte IDE mit diesen Tools nicht gut integrierbar ist, wird dies zum Problem. 
- Die Festlegung auf eine IDE stellt u.U. eine starke Abhängigkeit auch in Bezug auf die freie Wahl der Plattform (Betriebssystem) dar.
- Beim Erlernen einer Programmiersprache mit Fokus auf einer IDE, ist u.U. die (oftmals im Hintergrund) stattfindende automatische (Re-)Konfiguration des Projekts nicht greifbar, was u.U. ein tieferes Verständnis von Details der Sprache verhindert. 

Auch der rein terminal-zentrierte Ansatz hat Nachteile:

- Es ist wahrscheinlich, dass der Entwickler sich auf das Vorhandensein eines bestimmen Sets an Hilfsprogrammen im Terminal verlässt; dies schränkt die freie Wahl der Plattform u.U. stark ein.
- Es ist durchaus üblich für verschiedene Aufgaben zwischen mehreren Terminals zu wechseln; dies macht es nötig sich mit der (Re-)Positionierung der Terminals und deren Arrangement auf dem Bildschirm zu beschäftigen und schränkt abermals u.U. die Wahl der Plattform ein.
- Verweise zwischen Quellcode-Dateien oder Verweise von Kompilier-Fehlern auf die entsprechenden Zeilen in der Quellcode-Datei müssen oft "manuell" hergestellt werden.

***

## Compiler/Toolchains/IDEs
Es ist wichtig sich zu verinnerlichen, dass ein C-Compiler nie "alleine" kommt: um ausführbare Programme zu erzeugen, ist es zwingend nötig, mit den Schnittstellen der Plattform (Betriebssystem) zu kommunizieren:

- Speicherzuweisung/Allokation
- Datei Ein- und Ausgabe
- Signale (z.B. Abbruch des Programms)
- Multi-Threading

Deshalb wird neben dem eigentlichen Compiler eine für die Plattform passende Implementierung der C-Standardbibliothek benötigt, die mit dem Compiler und der Laufzeitumgebung (Runtime) kompatibel ist.
Das Herstellen der Abhängigkeiten zwischen einzelnen Programmteilen (Linking) passiert danach, auf Grundlage der für die Plattform geltenden Regeln und den dafür vorhandenen Werkzeugen.
Alles zusammen (Standardbibliothek, Compiler, Linker) wird als Toolchain bezeichnet.

Ein Weg sich einen Überblick zu verschaffen, ist es sich die "3 großen" Plattformen mit den jeweiligen "Defaults" anzusehen:

**Windows**

- C-Runtime: UCRT https://support.microsoft.com/en-us/topic/update-for-universal-c-runtime-in-windows-c0514201-7fe6-95a3-b0a5-287930f3560c
- C-Standardbibliothek: kommt mit dem MSVC-Compiler
- C-Compiler: MSVC-Compiler (`cl.exe`) https://en.wikipedia.org/wiki/Microsoft_Visual_C%2B%2B 
- C-Linker: (`link.exe`) https://docs.microsoft.com/en-us/cpp/build/reference/linkin
- IDE: Visual Studio  (Achtung: *Visual Studio Code* ist eine **gänzlich** andere Applikation)

**MacOS**

- C-Standardbibliothek: fester Teil des Betriebssystems 
- C-Compiler: `clang` https://clang.llvm.org/
- C-Linker: `ld64`  
- IDE: Xcode https://en.wikipedia.org/wiki/Xcode

**Linux**

- C-Standardbibliothek: libc https://www.gnu.org/software/libc/
- C-Compiler: `gcc` https://gcc.gnu.org/
- C-Linker: `ld` https://de.wikipedia.org/wiki/GNU_Binutils
- IDE: kein Default

**Kompatibilität**

Plattformen *MacOS* und *Linux* sind stark verwandt und der C-Compiler `clang` ist weitestgehend kompatibel zum C-Compiler `gcc`.
Der standardmäßige C-Compiler auf *Windows* ist jedoch **gänzlich** inkompatibel zu `gcc` und `clang`.
Deshalb gibt es schon immer Projekte die darauf abzielen `gcc` oder auch `clang` auf einer Windows-Plattform verfügbar zu machen, am weitesten verbreitet sind diese beiden:

- MinGW: https://www.mingw-w64.org/
- MSYS2: https://www.msys2.org/

Diese beiden Projekte zielen darauf ab, möglichst viele Komponenten der "Default-Linux-Toolchain" auf Windows verfügbar zu machen.
Am Ende muss natürlich immer noch Rücksicht auf die native Plattform (Windows) genommen werden, um ausführbare Programme zu erzeugen. 
Hierfür müssen viele "Kleinigkeiten" für jedes Linux-Tool, das portiert werden soll, angepasst werden. 
Dies führt dazu, dass nur ausgewählte Tools und oft nicht die komplette Funktionaliät (z.B. Compileroptionen) portiert werden können.

**WSL (Windows Subsystem for Linux)**

Neuerdings (ab Windows 10) nimmt Microsoft dieses Anliegen (die Kompatibilität zu Linux) mit einem grundlegend neuen Ansatz selbst in die Hand und hat das *Windows Subsystem for Linux*, kurz WSL geschaffen:
 https://en.wikipedia.org/wiki/Windows_Subsystem_for_Linux

Das WSL ist ein "echtes" Linux-System: es stehen alle Linux-Anwendungen (die keine grafische Oberfläche benötigen) zur Verfügung.
Deshalb ist das WSL für Entwickler eine äußerst attraktive Option.

***

## IDEs

In letzter Zeit sind bei IDEs wohl mehrere Trends auszumachen:

- Benutzeroberflächen: Web-Technologien sind dominant (d.h. die Oberfläche wird mit den gleichen Mitteln gestaltet wie eine Website im Browser)
- Plattformübergreifend: Die meisten IDEs versuchen auf allen Plattformen verfügbar zu sein.
- Modularität/Erweiterbarkeit: Durch die notwendige Integration mit unzähligen "Hintergrund-Tools" wird auf Erweiterbarkeit durch die Entwicklergemeinde geachtet.

**VSCode**

Der Vorreiter/Treiber bei diesen Trends ist Visual Studio Code (VSCode) https://en.wikipedia.org/wiki/Visual_Studio_Code , das auf einem Open-Source Projekt unter der Kontrolle von Microsoft basiert.

Nach einer "frischen" Installation von VSCode steht nur Grundfunktionalität (Editor/Datei-Browser) zur Verfügung.
Die Funktionalität kann umfangreich erweitert werden (durch sogenannte *Extensions*); hierbei gilt es jedoch zu beachten, dass viele dieser Extensions spezielle Anforderungen an die Konfiguration der unterliegenden Plattform haben.

Hinweis: *Visual Studio **Code*** hat **nichts** mit dem fast namensgleichen Produkt *Visual Studio* (ebenfalls Microsoft) https://en.wikipedia.org/wiki/Microsoft_Visual_Studio) zu tun.




