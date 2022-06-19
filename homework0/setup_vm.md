## Installation von Linux in einer virtuellen Maschine

Virtuelle Maschinen stellen eigene abgeschlossene Systeme (eigene Maschinen) auf einem physikalischen Hostsystem dar. 
Hierbei kann sich jede virtuelle Maschine mehr oder weniger Ressourcen (Speicher, Festplatten, Netzwerk, Bildschirm) mit dem Hostsystem teilen. 
Das Betriebssystem der Hostmaschine und der Clientmaschinen müssen hierbei nicht übereinstimmen.  
So ist es zum Beispiel einfach möglich, auf einem Windows (Host) System eine virtuelle Linux-Maschine laufen zu lassen. Diese verhält sich logisch wie eine eigene Maschine, welche ihre Bildschirmausgaben auf einem Fenster darstellt und auf Tastatur, Maus und Netzwerk/Internet zugreifen kann.

Hierbei beeinflussen diverse Softwareinstallationen am Client die Funktionalität am Hostsystem nicht. So ist es relativ elegant möglich eine
einfache Installation einer eigenständigen C-Entwicklungsumgebung zu erlangen, ohne dabei ein bereits bestehendes System zu beeinträchtigen.  
Für viele Betriebssysteme gibt es bereits fertige Systemabbilder, die nur noch mit der Virtualisierungssoftware verbunden und in den Einstellungen adaptiert werden müssen und schon lauffähig sind.  
Benötigt man diese Funktionalität nicht mehr, so kann man die virtuelle Maschine herunterfahren und die Ressourcen werden wieder freigegeben bzw. kann man später die Systemabbilder komplett löschen.

Im Folgenden wird von einem Windows-Hostbetriebssystem ausgegangen, in welchem eine virtuelle Maschine mit fertigem Linux-Systemabbild installiert wird.  
Das hier beschriebene Zielsystem ist dem im Programmierlabor verwendeten Linuxsystem ähnlich.  
Dies soll nur ein Auszug sein, welcher Weg relativ einfach eingeschlagen werden kann. Bei Detailfragen sei auf das Internet verwiesen.

### Virtualisierung
Um die virtuellen Maschinen installieren zu können, muss zuvor die geeignete Virtualisierungssoftware verfügbar sein. Hierbei sei auf die einfach installierbaren Programme VirtualBox und Vmware verwiesen, für welche im Internet leicht Anleitungen gefunden werden können und für 
die vorgefertigte Linux-Maschinenabbilder verfügbar sind.

VirtualBox ist frei verfügbar und Vmware ist für nichtkommerzielle Zwecke gratis.  
https://www.virtualbox.org/  
https://www.vmware.com/at/products/workstation-player/workstation-player-evaluation.html  

Die entsprechende Virtualisierungssoftware ist auf dem Host zu installieren. 

### Zielsystem 
Als Zielsystem wird ein weit verbreitetes Ubuntu Linux verwendet, für welches im Internet Anleitungen für diverse Problembehandlungen gefunden werden können und für welches fertige Abbilder für die virtuellen Maschinen vorliegen.

Beispielsweise auf  
https://www.linuxvmimages.com/images/ubuntu-2004/#ubuntu-20044.  
Hier können Dateien für Vmware oder VirtualBox heruntergeladen werden.

Eine genaue Installationsanleitung findet man unter  
https://www.linuxvmimages.com/how-to-use/how-to-import-vm-images-in-virtualbox-vdi/.
https://www.linuxvmimages.com/how-to-use/how-to-import-vm-images-in-vmware-vmdk/

Beim Netzwerkinterface ist es vorteilhaft, die Methode NAT einzustellen. Hierbei kann das Gastbetriebssystem auf das Internet zugreifen, ein Zugriff von außen auf das Gastbetriebssystem ist allerdings nur schwer möglich.

Danach ist das Zielsystem installiert, man kann es hochfahren und sich einloggen.
Als User wird `ubuntu`, Passwort `ubuntu` verwendet.  
Dieses installierte System ist unabhängig von ihrem Hostbetriebssystem. Auch können Daten nicht ohne weiteres Zutun zwischen Host und Gast ausgetauscht werden.

Nach erfolgreichem Einloggen, erscheint der Ubuntu Desktop.  
https://wiki.ubuntuusers.de/Desktop/

### Komplette Installation von Linux

Hier sei nur darauf hingewiesen, dass auch ein komplett neues Linux-Betriebssystem in einer leeren virtuellen Maschine installiert werden kann.
Anleitungen dazu können beispielsweise hier gefunden werden:  
https://ubuntu.com/tutorials/how-to-run-ubuntu-desktop-on-a-virtual-machine-using-virtualbox#1-overview

### Arbeiten im Linux

Das weitere Arbeiten erfolgt ausschließlich im Ubuntu Desktop. 
Weiterführende wichtige Informationen stellen wir im Dokument
[`setup_linux.md`](setup_linux.md)
zusammen.

Nach längerem Nichtbenutzen schaltet sich ein Bildschirmschoner ein. Dieser kann mit Eingabe des Passworts beendet werden.  
Nach Beenden der Arbeit kann die laufende virtuelle Maschine heruntergefahren werden. Dies kann im Ubuntu Desktop in der rechten oberen Ecke erfolgen.
Der Rechner oder die virtuelle Maschine sollte keinesfalls ganz einfach ausgeschaltet werden, ohne das Betriebssystem ordnungsgemäß 
heruntergefahren zu haben. Ansonsten kann es beim nächsten Hochfahren zu Fehlern oder Datenverlust kommen. 


