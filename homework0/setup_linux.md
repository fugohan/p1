## Linux Systeme

Hier gehen wir davon aus, dass bereits ein lauffähiges Linux-System vorliegt auf das man sich einloggen kann, gleichgültig ob es sich um eine physikalische Linux-Maschine oder eine virtuelle Linux-Maschine durch Neuinstallation oder aus einem Systemabbild handelt.

Sollte das Defaultpasswort der Installation noch nicht geändert worden sein, so sollte man dies tunlichst tun.

Im weiteren wird detailliert auf das Ubuntu System eingegangen, hingegen werden andere Varianten nur peripher behandelt. 
Auch andere Unix-Derivate verhalten sich in den Grundzügen ähnlich. Hierbei sei nur auf das Internet verwiesen.

### Das Terminalfenster

Anders als in manchen anderen Betriebssystemen sind in Linux eine Vielzahl von Operationen nicht nur in grafischen Applikationen verfügbar, sondern 
können auch mittels Befehlseingabe vorgenommen werden. 
Hierfür wird das Terminalprogramm aufgerufen und in diesem die Kommandos abgesetzt. Terminalprogramme sind beispielsweise `terminal`, `xfce-terminal`, `konsole`, `xterm`.  
Hier kann gleich das Userpasswort mit dem Befehl `passwd` geändert werden.

### Softwareinstallation und erweiterte Benutzerrechte

Systemsoftware kann meist über einen Paketmanager (zumeist auch grafisch) nachinstalliert werden. 
Zu beachten ist, dass hierfür meist erweiterte Benutzerrechte notwendig sind. Auf einigen Systemen muss man sich hierzu als eigener Benutzer (meist `root`) mit eigenem Passwort anmelden.
Auf Ubuntu Systemen geschieht dies durch den Befehl `sudo` und Programme können mit dem Befehl `sudo apt install Paketname` nachinstalliert werden.

### Benötigte Software und hilfreiche Befehle

Für die Entwicklung von C-Programmen sind die folgenden Komponenten notwendig und praktisch. Nach Belieben können auch andere Komponenten verwendet werden. 
Die Programmentwicklung soll jedenfalls für den Benutzer bequem, übersichtlich und nicht verborgen sein.

- der C-Compiler `gcc` und verwandte Werkzeuge werden mittels  
```sudo apt install build-essential```  
installiert. 

- der Internet Browser ist zumeist `firefox`

- als Texteditor wird hier ebenfalls `VSCode` verwendet, welcher aus dem Internet installiert werden muss.  
https://code.visualstudio.com/  

- eine kleine Einführung in die Linux Befehle ist beispielsweise unter
https://wiki.ubuntuusers.de/Shell/Befehls%C3%BCbersicht/  

### Typische Abfolge bei der Programmerstellung

Zur Übersicht wird meist ein eigenes Unterverzeichnis zur Programmentwicklung angelegt.
In diesem werden C-Sourcedateien angelegt und editiert.
Danach wird der Sourcecode kompiliert und gegebenenfalls nachbearbeitet.
Ausgeführt werden kann das Programm direkt aus dem Terminalfenster.

Abschließend wird dies an einem kleinen Beispiel dargestellt:

Das Programmverzeichnis wird angelegt und in dieses hineingewechselt:
``` 
mkdir Desktop/testdir1
cd Desktop/testdir1
```
Danach eine C-Datei angelegt:
```
code test.c
```
Der Sourcecode eingegeben:
```
#include <stdio.h>
int main()
{
	printf("Hallo Welt\n");
	return 0;
}
```
Dieser Sourcecode wird hoffentlich erfolgreich kompiliert:
```
gcc test.c -o test
```
Wodurch das ausführbare Programm `test` erzeugt wurde, welches mit
```
./test
```
ausgeführt wird und folgende Ausgabe liefert:
```
Hallo Welt
```

