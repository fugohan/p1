# Linux-kompatible Umgebungen auf Windows
Diese Dokument soll Ihnen Hinweise geben, welche Optionen Sie ausgehend von einem Windows-System haben, eine Linux-kompatible Umgebung zum Kompilieren von C-Projekten zu erlangen.

## Windows 10 und 11

Hier ist die klare Empfehlung, das *Windows Subsystem for Linux* WSL (siehe auch [`overview.md`](overview.md) für eine Einordnung) zu installieren.

Für die Installation gibt es eine offizielle Anleitung: https://docs.microsoft.com/en-us/windows/wsl/install

Wir konzentrieren uns deshalb in diesem Dokument auf: 
- Hinweise um die Situationen selbst besser einordnen zu können 
- Nützliche Tricks im Umgang/in der Handhabung der WSL nach der Installation.

**Lesen Sie sich untenstehende Punkte aufmerksam durch BEVOR Sie mit der Installation des WSL beginnen.**

***

## 0. Windows-Terminal im Admin-Modus öffnen:
1. Tastenkombination `WIN+R` (dann geht ein kleines Fenster auf).
2. `cmd` (oder auch `cmd.exe`) in das Fenster eingeben.
3. Tastenkombination `CTRL+SHIFT+Enter` (Es geht ein Pop-Up Fenster auf, mit "Ja/Yes" betätigen um im Admin-Modus zu öffnen)
4. Das Terminal wird im Admin-Modus geöffnent (ersichtlich oben rechts im Fensterrahmen)

## 1. System-Update 
Da es bei den letzten Windows-Updates starke Veränderungen gegeben hat (und auch immer wieder geben kann), wie das WSL installiert werden muss, ist es **äussert wichtig zuallererst ein System Update** durchzuführen. 

Anders ausgedrückt: Die offizielle Anleitung zur Installation der WSL erwähnt nur die Konfigurationschritte, die für eine **aktuelle** Windows Version notwendig sind.

Sie können die grafische Applikation (GUI) zum Durchführen von System-Updates aus dem Terminal heraus starten:
```shell
control udpate
```
Folgen Sie dann den Anweisungen im GUI um ein Update durchzuführen.

**Hinweis**: Es ist möglich, dass nach einem System Update ein Neustart erforderlich ist. Führen Sie diesen durch, bevor Sie das WSL installieren.

## 2. Hintergrundwissen: `wsl.exe`

Sowohl die Installation `wsl --install -d Ubuntu`, als auch die Administration des WSL (z.B. `wsl --list --verbose`) werden mit der Terminal-Applikation `C:\Windows\System32\wsl.exe` gehandhabt.

Sie können sich die Version der auf Ihrem System installierten `wsl.exe` mit diesem Befehl im Terminal ausgeben lassen:
```shell
wmic datafile where name="C:\\Windows\\System32\\wsl.exe" get Version /value
```

Dies kann nützlich sein, z.B. um festzustellen ob ein System-Update die Version geändert hat.

**Hinweis**: `wsl.exe` existiert auch schon auf ihrem System bevor sie das WSL installieren.

## 3. BIOS-Einstellungen
Unter Umständen erhalten Sie während der Installation des WSL einen Hinweise/Fehler wie z.B. 

```shell
... ensure virtualization is enabled in the BIOS ...`" 
```
oder
```shell
WslRegisterDistribution failed with error: 0x80370102
Error: 0x80370102 Der virtuelle Computer konnte nicht gestartet werden, da ein erforderliches Feature nicht installiert ist.
```

Dies bedeutet entweder:
- dass die Virtualisierungsuntertützung auf Ihrer Hardware verfügbar ist, diese jedoch in den BIOS-Einstellungen nicht aktiviert ist, oder
- dass Ihre Hardware keine Virtualisierungsuntertützung bietet.

**Hinweis:**
Sie können Ihre BIOS-Einstellungen nach einem Neustart erreichen, indem eine spezielle Taste (typischerweise `Entfernen` oder `F2`) während des Bootvorgangs gedrückt wird.

## 4. WSL 1 und WSL 2
Es existieren zwei Versionen des WSL (https://docs.microsoft.com/en-us/windows/wsl/compare-versions):
- WSL 1: kein voller Linux Kernel (dieser wird emuliert)
- WSL 2: voller Linux Kernel (viel bessere Performance als WSL 1, benötigt Virtualisierungsuntertützung durch die Hardware)

Sie können den Default mit diesem Befehl setzen
```shell
wsl --set-default-version 2 # change to 1 if needed
```

**Hinweis:** 
Es ist nur ratsam die WSL 1 einzusetzen, falls Ihre Hardware die erforderliche Virtualisierungsuntertützung für die WSL 2 nicht bieten kann.

## 5. Nach der erfolgreichen Installation der WSL
Wenn Sie nach der Installation im Windows-Terminal den Befehl `wsl` eintippen, wechseln Sie sofort in das Linux-Terminal.
Sie können das Linux-Terminal mit dem Befehl `exit` wider verlassen.
Falls Sie sich erneut die Option von `wsl.exe` anzeigen lassen wollen, können Sie 
```shell
wsl --help
```  
verwenden.

## 6. Dateisystem
Sie haben wechselseitigen Zugriff auf alle Ordner und Dateien zwischen Linux und Windows.

Sie können im Windows-Explorer (`explorer.exe`) die Dateien sehen, die das Linux-System darstellen. 
Der einfachste Weg hierzu ist es, im Linux-Terminal in den gewünschten Pfad zu navigieren und dann folgenden Befehl zu verwenden:
```shell
explorer.exe . 
```
Dies öffnet einen Windows-Explorer in dem das Arbeitsverzeichnis des Linux-Terminals geöffnet ist.

Sie können ebenso aus dem Windows-Explorer heraus ein Linux-Terminal im selben Pfad öffnen. Der einfachste Weg ist, mit dem Windows-Explorer in das gewünschten Verzeichnis zu navigieren, und dann die gesamte Addressleiste zu löschen, `wsl` einzutippen und mit `Enter` zu bestätigen: es öffnet sich ein Linux-Terminal im demselben Arbeitsverzeichnis.


## 7. Installation von der gcc-Toolchain
Das einzige was nach der erfolgreichen Installation der WSL noch fehlt, ist eine Toolchain zum Kompilieren. Diese lässt sich mit einem einzigen Befehl in der WSL installieren:
```shell
sudo apt-get install build-essential
``` 

## 8. IDE/Editor
Wir empfehlen VSCode als Multi-Datei-Editor.
VSCode wird "ganz normal" über Windows installiert (das WSL unterstützt keine Applikationen mit grafischen Oberflächen):
https://code.visualstudio.com/download

Nach der Installation von VSCode und einem Neustart der WSL 
```shell
wsl --shutdown
```
ist ein weiterer "Shortcut" verfügbar:
```shell
code .
```
öffnet aus dem Linux-Terminal heraus VSCode für das aktuelle Verzeichnis.

***

## Vor Windows 10 (also Windows 7 oder 8)
Hier gibt es die Optionen MSYS2 und MinGW (siehe auch [`overview.md`](overview.md) für eine Einordnung).
Falls sich Probleme bei der Installation ergeben, bitten wir Sie uns diese mitzuteilen.

## Alle Windows Versionen
Alternativ bietet sich auf Windows-Systeme als weniger integrierte Lösung an, eine virtuelle Maschine mit Linux als Gast-Betriebssystem aufzusetzen: 
[`setup_vm.md`](setup_vm.md)

Nachteile gegenüber der WSL sind

- der gesteigerte Ressourcenverbrauch,
- die schwierigere integration mit dem Windows Wirtssystem, und
- der erhöhte Konfigurations- und Wartungsaufwand.
