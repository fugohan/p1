
# Hausübung 0
Zur Ausarbeitung der nachfolgenden Hausübungen 1-4 benötigen Sie eine lokale Entwicklungsumgebung, die es Ihnen erlaubt C-Quellcode zu kompilieren und die erzeugten Programme auszuführen.

Ziel dieser Hausübung ist es, Ihnen ein generelles Überblickswissen zu vermitteln und aufzuzeigen, welche Möglichkeiten sich abhängig von Ihrem Betriebssystem bieten um sich eine lokale Entwicklungsumgebung einzurichten, die der Entwicklungsumgebung in unseren Laborräumen nahekommt.

Lesen Sie hierzu zuallererst aufmerksam das Dokument [`overview.md`](overview.md): Es soll ein einheitliches Grundverständis vermitteln und Ihnen ermöglichen, (auch untereinander) gezielter Fragen zu stellen, z.B. falls beim Einrichten Ihrer lokalen Entwicklungsumgebung Fragen oder Probleme auftauchen.

Entscheiden Sie sich für ein System, auf dem Sie ihre Entwicklungsumgebung einrichten wollen. 
Folgende Voraussetzungen sollte Ihr System jedenfalls erfüllen:

- Sie können Administrator-Rechte erlangen (andernfalls erschwert sich die Installation, bzw. weicht stark von einschlägigen Online-Ressourcen ab).
- Ein Internetzugang ist eingerichtet.

**Setup im Labor** 

In unseren Laborräumen finden Sie ein Linux-Betriebssystem (OpenSUSE), das für die Entwicklung von C-Programmen vorkonfiguriert ist:

- Es ist die `GNU/gcc`-Toolchain zum Kompilieren und Linken von C-Programmen installiert.
- Es ist Visual Studio Code (VSCode) installiert.

Während der Übungen benötigen Sie 2 Fenster:

1. Das erste Fenster ist ein Terminal: 
    - Das Arbeitsverzeichnis des Terminals ist üblicherweise der Ordner mit dem Quellcode, an dem momentan gearbeitet wird.
    - Kompilier-Befehle (und auch einige andere Befehle die Sie erlernen werden) werden direkt in diesem Terminal ausgeführt.
    - Die Fehlermeldungen und Warnungen des Compilers werden direkt in diesem Terminal angezeigt. 
    - Kompilierte Programme werden aus diesem Terminal gestartet.
2. Das zweite Fenster ist eine Instanz von VSCode:
    - Wir verwenden VSCode nur als Multi-File-Editor und Datei-Browser und lassen alle anderen Konfigurationsmöglichkeiten unbeachtet/ungenutzt.
    - Das Editieren und Speichern des Quellcodes findet in VSCode statt.
    - Der Inhalt des aktuellen Arbeitsverzeichnisses wird neben dem Editor in VSCode angezeigt.

Warum haben wir uns für dieses "Setup" im Labor entschieden und verwenden nicht einfach **eine** IDE?

- IDEs lenken mit der Vielzahl von Optionen und Möglichkeiten leicht vom eigentlichen Programmieren ab.
- Die "Hilfs-Funktionalität" von IDEs kann oft erst sinnvoll eingesetzt werden, wenn ein tieferes Verständnis über die Sprache und Konfigurationsmöglichkeiten vorhanden ist.
- Für den Anwender ohne Expertenkenntnisse zu einer IDE ist es oft nicht ersichtlich, wie die tatsächliche Konfiguration eines in der IDE geöffneten Projekts zustandekommt. 
- Auch IDEs entwickeln sich weiter und die Vermittlung von Details in Hinblick auf die Verwendung einer bestimmten IDE sind höchstwahrscheinlich nicht von Dauer.
- Viele IDEs sind nicht auf allen Plattformen verfügbar oder sind fest an bestimmte Kompilerumgebungen gebungen.

Warum haben wir uns für VSCode entschieden?

- Es ist auf allen Plattformen verfügbar.
- Es bietet einen hervorragenden Multi-Datei-Editor, auf dem auch viele andere aktuelle IDEs basieren.
- Eine angenehme Ordnernavigation ist verfügbar.
- Nach den Programmier-LVAs 360.016 und 360.017 spricht nichts gegen eine Weiternutzung von VScode als "volle IDE": die verfügbaren *Extensions* decken umfangreiche Funktionalitäten für C und auch andere Programmiersprachen ab. 

Warum haben wir uns für die `GNU/gcc`-Toolchain entschieden?

- Diese Toolchain ist neben `LLVM/clang` der de-facto Standard für einen C-Compiler.
- Die Toolchains von `gcc` und `clang` sind in Hinblick auf die Optionen (*command line arguments*), die wir in den Programmier-LVAs verwenden werden, kompatibel.
- Es gibt momentan neben `GNU/gcc` und `LLVM/clang` keine weiteren frei verfügbaren Compiler/Toolchains, die moderne Optionen zur Fehlervermeidung in C/C++ (Sanitizers) voll unterstützen.


## Aufgabe 1: System Identifikation (Abgabe bis 21. März, 10:00 Uhr)
Finden Sie die genau Bezeichung und exakte Version des Betriebssystems, das Sie auf Ihrer Entwicklungsmaschine benutzen.

Erstellen Sie eine Textdatei `devsys.txt`, in die Sie die gefundenen Detailinformationen hineinkopieren.

Laden Sie ihre `devsys.txt`-Datei in den TUWEL-Kurs 

https://tuwel.tuwien.ac.at/course/view.php?idnumber=360016-2022S

unter der dafür vorgesehenen Abgabe unter **Einheit 0 --> Hausübung 0** hoch.

**Allgemeine Hinweise**

- Wir empfehlen, die Betriebssystem-Version über das Terminal herauszufinden (siehe weitere Hinweise).
- Kopieren Sie alle Details, die Sie über Ihr Betriebssystem herausfinden konnten, in Ihre Datei `devsys.txt`.

**Hinweise Windows**

1. Öffnen Sie ein Terminal (Tastenkombination `CMD+R`, dann `cmd` eingeben, dann mit `Enter` bestätigen).
2. Geben Sie im Terminal den Befehl `systeminfo` ein und bestätigen Sie mit `Enter`.

**Hinweise MacOS**

1. Öffnen Sie ein Terminal (Tastenkombination `CMD+Space`, dann `terminal` in die Suche eingeben, dann auf die `Terminal` Applikation klicken)
2. Geben Sie im Terminal den Befehl `sw_vers -productVersion` ein und bestätigen Sie mit `Enter`.

**Hinweise Linux**

1. Öffnen Sie ein Terminal (Tastenkombination für Ubuntu `CTRL+ALT+T`)
2. Probieren Sie einen oder mehrere der folgenden Befehle:
    - `lsb_release -a`
    - `cat /etc/*-release`
    - `uname -a`

## Aufgabe 2: System Setup 

Ziel dieser Aufgabe ist es, dass Sie auf Ihrem Rechner eine Entwicklungsumgebung einrichten, die der in unseren Laborräumen nahekommt. 

Wir bieten Hilfestellung, um eine `GNU/gcc` oder `LLVM/clang` Toolchain samt VSCode auf üblichen Betriebssystemen zu konfigurieren. 
Lesen Sie sich dazu aufmerksam die entsprechenden Dokumente durch:

**Windows:**  [`setup_windows.md`](setup_windows.md)

**MacOS:** [`setup_macos.md`](setup_macos.md)

**Linux:**  [`setup_linux.md`](setup_linux.md)

**Virtual Machine**: [`setup_vm.md`](setup_vm.md)

Testen Sie final die Konfiguration ihres Systems, indem Sie folgendes Test-Programm kompilieren und ausführen:

```C
#include <stdio.h>

int main()
{
    printf("Hallo Welt!\n");
    return 0;
}
```

Speichern Sie obigen Quellcode in eine Datei `test.c` in einem Verzeichnis Ihrer Wahl und führen Sie anschliessend folgende Befehle im Terminal aus:
```
cd XXX              # change directory to the folder XXX where your 'test.c' file is located
gcc test.c -o test  # compile/link and produce an executable called 'test'
./test              # execute the local executable 'test'
```
**Hinweis:** Die obigen Befehle gehen davon aus, dass ein Unix Terminal (MacOS) oder Linux Terminal (nativ, VM, oder via WSL)  verfügbar ist.

**Hinweis:** Falls Sie Probleme bei der Konfiguration Ihres Systems haben, können Sie:

- Die online-Fragestunde am 16. März, 12:00 wahrnehmen (siehe Link im TUWEL-Kurs). 
- Fragen im online-Forum des TUWEL-Kurses stellen.
- Beim von Ihnen gebuchten Termin in der ersten Laborwoche (*Labor 0*) Fragen stellen.
- Falls Ihr System mobil ist, können Sie dieses gerne zu Ihrem gebuchten Termin für das *Labor 0* mitbringen um konkrete Fragen zu stellen.
