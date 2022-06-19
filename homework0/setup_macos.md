## MACOS Systeme

Dies soll ein Leitfaden zum Erlangen der Werkzeuge zur C-Programmentwicklung darstellen. Allerdings können wir im Rahmen der Vorlesung Programmieren in C 
nur eingeschränkt auf Konfigurationsprobleme auf diversen Rechnersystemen eingehen.

Auch auf den verbreiteten Apple-Maschinen kann der zur Programmierübung angestrebte Aufbau Terminal - Editor - Compiler relativ einfach erzielt werden.
MAC Systeme zeigen einen UNIX ähnlichen Unterbau und bringen schon die gewünschten Softwarekomponenten mit sich. Sie müssen nur noch angepasst werden.

### Das Terminal

Ist schon nach einer Standardinstallation verfügbar. Im Finder kann es mit `terminal` gefunden und aufgerufen werden.

Jetzt können Unix-Befehle verwendet werden, um beispielsweise Verzeichnisse anzulegen und in diese zu wechseln.  
https://wiki.ubuntuusers.de/Shell/Befehls%C3%BCbersicht/ 

### Erweiterte Benutzerrechte

Um Kommandos als Administrator auszuführen, kann im Terminal ebenfalls der Befehl `sudo` verwendet werden.   
`sudo command` führt den Befehl `command` mit Administratorrechten aus.

### Der C-Compiler

Der C-Compiler muss womöglich auf dem System nachinstalliert werden. Kann der Befehl `gcc` im Terminal nicht ausgeführt werden, so ist er noch nicht verfügbar. Da das MAC-Betriebssystem aber schon Entwicklerwerkzeuge anbietet, können diese Komponenten einfach nachinstalliert werden.

`sudo xcode-select --install` installiert den C Compiler.
Bei der Frage nach "command line developer tools", sind diese zu installieren.

Nach erfolgreicher Installation sollte der Compiler `gcc` verfügbar sein.

Nachtrag: Bei dieser Abfrage wird ebenfalls nach Xcode gefragt. Xcode stellt ein umfangreiches IDE zur Programmentwicklung bereit. Im Rahmen der Programmierübung ist es nicht notwendig Xcode zu installieren. Allerdings stellt auch Xcode einen umfangreichen Sourcecode Editor zur Verfügung.
Natürlich ist dem Benutzer freigestellt, diesen zu verwenden. 

### Der Editor

Hier kann ebenfalls VSCode verwendet werden, welches auch für MACOS verfügbar ist:
https://code.visualstudio.com/Download

### Weitere Informationen

Danach sollten alle benötigten Werkzeuge zur C-Programmentwicklung vorhanden sein und einer Programmentwicklung steht nichts mehr im Wege.

Weiterführende Details können den anderen Setup-Dokumenten entnommen werden.
