
# Table of Contents

1.  [Repetitionsfragen](#orgad0df06)
    1.  [Woche 1](#org1ede011)
        1.  [Was ist der Unterschied zwischen funktionalen-und nichtfunktionalen Anforderungen?](#orgfdd04c0)
        2.  [Was ist ein Requirement genau?](#org60c6310)
        3.  [Definieren Sie den Requirement Engineer (RE) / Business Analyst(BA)](#org7121ffe)
        4.  [Was sind die 4 Kernpunkte/Aktivitäten im RE?](#org0be7efc)
        5.  [Nennen Sie mindestens 4 Methoden um Requirements zu finden](#org12caee4)
        6.  [Wie können Requirements definiert und beschreiben werden?](#orgb882e67)
        7.  [Formulieren Sie 3 offene und 3 geschlossene Fragen](#orgc2c7bef)
        8.  [Was ist ein Stakeholder (Definitionund mögliche Beispiele)](#orgac4d7a6)
        9.  [Warum ist ein Programmierer ggf. nicht geeignet für Security RE?](#orgec76c5c)
        10. [Was sind die Gefahren, wenn man RE nicht korrekt einplant und durchführt?](#orgb6f403a)
        11. [Was kann man tun / vorgehen, wenn man unter Zeitdruck steht beim RE?](#org9850fc5)
        12. [Zeigen Sie ein System mit Systemgrenzen und Kontext auf](#orgbb69523)
    2.  [Woche 2](#org50997ca)
        1.  [Nennen Sie die 3 Perspektiven in/von welchen man Requirements betrachten kann](#org05b5710)
        2.  [Wie kann man Requirements Beschreiben bzw. Dokumentieren?](#org2a08a5a)
        3.  [Nennen Sie die Elemente eines Datenflow Diagramms (DFD)](#orgc0a886a)
        4.  [Nennen Sie einige Qualitätskriterien von Requirements](#org0b3e33d)
        5.  [Warum ist ein Glossar wichtig?](#org91335f1)
        6.  [Was gibt es für Standards zur Dokumentation von Requirements, nennen Sie 3](#orgf2f99cc)
        7.  [Was ist der Unterschied zwischen Security & Safety?](#org4ddbafa)
        8.  [Was versteht man unter «Defense in depth» Ansatz?](#orgadcdeae)
        9.  [Was versteht man unter Perimeter Sicherheit?](#org90b9597)
        10. [Warum ist Perimeter Sicherheit nicht mehr unbedingt das Grundkonzept für die Sicherheit von Modernen Systemen/IT-Landschaften und was sind die aktuellen Challenges?](#org4104598)
        11. [Was ist eine Vulnerability?](#orgfda7fce)
        12. [Was ist ein Exploit?](#orge44c5e9)
        13. [Wie wird eine Vulnerability ausgenützt, beschreiben Sie das Vorgehen](#org39148b9)
        14. [Was ist Malware und wie läuft eine Infektion ab?](#org1be268e)
    3.  [Woche 3](#orgac7343c)
        1.  [Wie ist das Verhältnis von Kosten und Bugs bzw. Zeitpunkt deren Erkennung im Projekt. Wie können Sie dies nutzen für die Argumentation von Security Requirement Engineering im Projekt?](#org46a38d9)
        2.  [Was ist ein SW Bug?](#org1fcb041)
        3.  [Warum macht man Threat modeling?](#org8ced81d)
        4.  [Was gibt es für rechtliche Anforderungen, die man ggf. beachten sollte?](#org5dc2bad)
        5.  [Was ist der Vorteil und Nachteil von einem Wasserfall Model?](#org3850faf)
        6.  [Machen Sie ein Beispiel in einer Tabelle für eine Vulnerability und deren Auswirkung analog unserem Bsp. im Unterricht (Vulnerability, Threat, Threat Action, Risk)](#org7f890da)
        7.  [Was sind mögliche Quellen von Bugs?](#orgb18113f)
        8.  [Was sind die verschiedenen Activities in einem SW Prozess, nennen Sie diese](#orga9692ee)
        9.  [Was ist ein Prozess Model? Nennen Sie 4 Beispiele](#org149be42)
        10. [Nenne Sie Qualität Attribute in der Software quality assurance](#orgddd2d4e)
        11. [Was ist das agile Manifest, was wird darin festgehalten?](#org6b4a719)
        12. [Was ist DevOps und was für einen Impact hat dies auf das Security Requirement Engineering?](#orgda47ca3)
        13. [Was sind die Grundschritte beim SDLC, in welche Schritte beim SDLC kann man Security integrieren?](#org6249186)
        14. [Was gibt es für Standard Kataloge bzgl. Security Requirements](#org8c9248c)
        15. [Was ist OWASP, wie kann man OWASP für Security Requirement engineering nutzen?](#org1d523f2)
        16. [Was ist ein Threat? Was ist eine Vulnerability? Was ist der Unterschied?](#org48c0987)
        17. [Was sind die Schritte beim Threat Modeling?](#org5310d07)
        18. [Nennen Sie Beispiele für SW Qualitlt](#org60a281d)
        19. [Machen Sie ein korrektes Beispiel eines DFDs inklusive Legende](#org2cce260)
        20. [Was ist der Vorteil und Nachteil von einem Agilen Model? Was ist das Kernkonzept der agilen Vorgehensweise?](#org7b53e2f)
    4.  [Woche 4](#org21cfe7c)
        1.  [Nennen Sie für jeden Threat im STRIDE Model eine Mitigation Massnahme](#orgaec6e90)
        2.  [Wie können AI und ML Threats und das Verhalten von Angreiffern beeinflussen?](#org2ef304a)
        3.  [Was bedeutet STRIDE?](#orge47f80f)
        4.  [Was bedeutet DREAD](#orgb8f94e0)
        5.  [Was gibt es für Modelle, um das Riskrating vorzunehmen mit DREAD?](#orgbb859ee)
        6.  [Was für mögliche Rahmenwerke können Ihnen helfen, um Threats zu identifizieren?](#orgb5d28dc)
        7.  [Was ist unter Mitigation zu verstehen?](#org1e708ab)
        8.  [Was ist in der heutigen Zeit (Entwicklung der aktuellen IT-Landschaft) die Herausforderung mit STRIDE?](#org3f0dbff)
        9.  [Beschreiben Sie die 4 Schritte des Threat Modeling Prozesses](#orgde4275e)


<a id="orgad0df06"></a>

# Repetitionsfragen


<a id="org1ede011"></a>

## Woche 1


<a id="orgfdd04c0"></a>

### Was ist der Unterschied zwischen funktionalen-und nichtfunktionalen Anforderungen?
**Funktionale Anforderungen:** *Was* muss das System können?

-   Die Maschine muss Kaffee rauslassen können
-   Der Kaffee muss mit Bargeld oder Karte bezahlt werden können
-   Es muss ein Nachfüllmechanismus vorhanden sein

**Nicht-funktionale Anforderungen** *Qualität* der zu erfüllenden Dienstleistungen

-   Es müssen mehrere Arten von Kaffee zur Verfügung stehen
-   Das UI muss ein touchscreen sein
-   Es müssen 10'000 Kaffees rausgelassen werden können bevor die Maschine nachgefüllt werden muss


<a id="org60c6310"></a>

### Was ist ein Requirement genau?

Eine Bedingung oder Fähigkeit des Produktes, die ein user benötigt, zu, ein gestelltes Problem zu lösen


<a id="org7121ffe"></a>

### Definieren Sie den Requirement Engineer (RE) / Business Analyst(BA)

**Was ist die Rolle eines RE in einem Projekt?**

Der RE ist die Schnittstelle zwischen der technischen Seite des Projektes (den Programmierern) und dem Management. Er kann zwischen diesen beiden Seiten 'übersetzen'

**In welchen Phasen ist der RE involviert?**

*In allen Phasen*
    
1.  Requirement Analyse
    
-   Stakeholder-Analyse
-   DokumentenAnalyse
-   Erhebung der Anforderungen
-   Workshops / Interviews mit Stakeholder
-   Business und User-Requirement Analyse
-   Auflistung und Priorisierung der Use-Cases
    
2.  Design
    
-   Detaillierte Spezifikationen von Business-Problemen, Aktoren, Use-Cases und Interfaces
-   GUI Design
-   Review der Spezifikationen
-   Abnahme der Spezifikationen
    
3.  Implementation

-   Walkthrough der Spezifikationen mit Technical Project Lead (TPL) und Devs
-   Support der Devs
-   Klärung von allfälligen neuen Punkten mit den Business Stakeholdern
-   Change Management

4.  Testing

-   Test Support
-   Klärung von allfälligen Defekten
-   Klärungen von allfälligen neuen Issues
-   Change Management
    
5.  Evolution
    
-   Analyse der Change Requests
-   "Aufräumen" der Dokumentation


<a id="org0be7efc"></a>

### Was sind die 4 Kernpunkte/Aktivitäten im RE?

1.  Elicitation

Während der Erhebung der Requirements werden verschiedene Techniken verwenden, um Requirements von Stakeholdern (und allfälligen anderen Quellen) zu erhalten und zu verbessern

2.  Documentation

In der Dokumentationsphase werden die erhobenen Requirements genauer beschrieben. Auch hier werden verschiedene Technologien verwendet.

3.  Validation and Negotiation

Um sicherzustellen, dass die erhobenen Requirements den Ansprüchen der Stakeholder genügen, müssen sie schon früh validiert und allenfalls tiefer verhandelt werden

4.  Management

Requirement Management wird in allen bisher genannten Aktivitäten benötigt und beinhaltet alle benötigten Massnahmen um die erhobenen Requirements zu strukturieren. Das heisst, sie so zu verarbeiten, dass die Devs ein Produkt/eine Software danach entwickeln können, das Management sie aber trotzdem noch versteht. Ebenfalls muss eine Konsistenz geschaffen werden.


<a id="org12caee4"></a>

### Nennen Sie mindestens 4 Methoden um Requirements zu finden

-   Dokumentations-Analyse
-   Interviews mit Stakeholdern
-   Workshops
-   Questionnaires
-   Brainstorming

#### Welche davon sind Kreativ Methoden?

Kreativ-Methoden dienen dazu, *innovative* Requirements zu finden.


<a id="orgb882e67"></a>

### Wie können Requirements definiert und beschreiben werden?

####  Beispiele für ein statisches und agiles Vorgehen?

**Statisch**
    
*Wasserfall-Modell*
        
Alle Requirements werden bereits zu Beginn erhoben, verfeinert und dokumentiert und sollten sich im Verlauf des Projektes möglichst nicht ändern.
    
**Agil**
    
*SCRUM/Sprint-Basiert:*
        
Requirements werden 'on the go' erhoben. Erst bevor sie implementiert werden, werden die Requirements als 'Features' definiert. Dies, da es schwer ist, alle benötigten Funktionalitäten bereits zu Beginn eines Projektes zu definieren, weil sich während der Laufzeit des Projektes noch viel verändernk kann.


<a id="orgc2c7bef"></a>

### Formulieren Sie 3 offene und 3 geschlossene Fragen

**Offene Fragen**

-   Wieso bist du hier?
-   Was sind deine Hobbies?
-   Welche Security-Lücken müssen geschlossen werden?

**Geschlossene Fragen**

-   Sind die besprochenen Security-Lücken bereits geschlossen worden?
-   Liegen wir noch im Zeitplan?
-   Habt ihr schon mit den Stakeholder gesprochen?


<a id="orgac4d7a6"></a>

### Was ist ein Stakeholder (Definitionund mögliche Beispiele)

Eine Person, die am Produkt interessiert ist (Entweder Endnutzer oder Distributor oder Hersteller&#x2026;)

*Stakeholderliste eines Kaffeeautomaten*

-   Kaffee-Hersteller
-   Betreiber von Kaffeemaschinen
-   Universitäts/Hochschulsbetreiber
-   Kaffeetrinker
    
    &#x2026;.


<a id="orgec76c5c"></a>

### Warum ist ein Programmierer ggf. nicht geeignet für Security RE?

Er hat nicht das nötige Know-How und ggf. auch nicht die Zeit. Zduem ist er 'zu nah' am Produkt (Creator-Blindness)


<a id="orgb6f403a"></a>

### Was sind die Gefahren, wenn man RE nicht korrekt einplant und durchführt?

Es kommt wesentlich teurer, die Fehler bei/nach der Implementierung zu flicken, da viele Dinge voneinander abhängen


<a id="org9850fc5"></a>

### Was kann man tun / vorgehen, wenn man unter Zeitdruck steht beim RE?

Risikobasiertes Priorisieren und von oben anfangen (Requirement mit dem höchsten Risiko) und so weit arbeiten wie man kommt


<a id="orgbb69523"></a>

### Zeigen Sie ein System mit Systemgrenzen und Kontext auf

![img](./imgs/order-processing-system-contsxt.png)


<a id="org50997ca"></a>

## Woche 2


<a id="org05b5710"></a>

### Nennen Sie die 3 Perspektiven in/von welchen man Requirements betrachten kann

**Datenperspektive**

Welches *Format* bzw. welche *Struktur* haben die *Daten*, die in das *System hereingegeben* werden und welches Format bzw. Struktur haben die *retournierten Daten*?

**Funktionale Perspektive**

Welche *Informationen* (Daten) werden *vom System empfangen* und von dessen Methoden/Funktionen *verarbeitet*. Diese Dokumentationsmethode beschreibt ebenfalls, welche Daten wieder zurückgegeben werden. Ebenfalls wichtigt ist es zu dokumentieren, *in welcher Reihenfolge* die Funktionen/Methoden die empfangenen Daten verarbeiten.

**Verhaltensperspektive**

Diese Methode beschreibt wie das System mit dem umliegenden *Kontext interagiert*. Das heisst, wie *reagiert* das System auf bestimmte *Events vom umliegenden Kontext* und welche *Konditionen* müssen gegeben sein, dass es so reagiert. Ebenfalls wird dokumentiert, wie das System den umliegenden Kontext beeinflusst (z.B. einen Trigger auslöst, der ein weiteren Prozess in einem anderen System ankickt)
    
Dies wird meist mittels State-Diagrammen dargestellt.


<a id="org2a08a5a"></a>

### Wie kann man Requirements Beschreiben bzw. Dokumentieren?

#### Natural Language

Beschreibt das System in natürlicher Sprache, evtl. mit Templates.
> Das System **WIRD/MUSS/KANN/SOLLTE** **TASK** tun können
    
> Das System **<WIRD/MUSS/KANN/SOLLTE>** **<USER/ROLLE>** **<TASK>** ermöglichen 

![img](./imgs/natural_language.png)

#### Modelle

Alternativ können Modelle und Diagramme verwendet werden. Das hat den Vorteil, dass die Requirements klarer dargestellt sind und weniger Raum für Spekulationen bietet. Jedoch muss der Betrachter ein grundsätzliches Verständnis des Modells/Diagramms haben
    
**Usecase Diagramm**
    
Welche Funktionen werden welchem Benutzer/welcher Rolle des Systems zur Verfügung gestellt

![img](./imgs/uc_diagram.PNG)
    
**Klassendiagramm**
    
Gut geeignet, um Datenstrukturen zu dokumentieren. Welche Klassen/Interfaces verlangen welche Datentypen als Input and retournieren welche Datentypen? Ebenfalls zeigt ein solches Diagramm die Zusammenhänge und Abhängigkeiten von Komponenten.
        
![img](./imgs/class_diagram.png)
    
**Aktivitätsdiagramm**
    
Gut geeignet, um Prozessabläufe zu dokumentieren. Welche Tasks werden nacheinander durchgeführt? Welche Bedingungen müssen erfüllt sein?

![img](./imgs/activity_diagram.jpg)
    
**Statusdiagramm**
    
Gut geeignet, um die Verhaltensperspektive zu dokumentieren. Statusdiagramme zeigen die verschiedenen Stati des Systems auf, welche Events einen Statuswechsel auslösen und wie sich diese Stati auf den Systemkontext auswirken

![img](./imgs/state_diagram.png)


<a id="orgc0a886a"></a>

### Nennen Sie die Elemente eines Datenflow Diagramms (DFD)

![img](./imgs/dfd_elements.png)


<a id="org0b3e33d"></a>

### Nennen Sie einige Qualitätskriterien von Requirements

-   Eindeutigkeit, was gmeeint ist
-   Klare Struktur
-   Modifizier- und Erweiterbar
-   Vollständig
-   Nachverfolgbar


<a id="org91335f1"></a>

### Warum ist ein Glossar wichtig?

So dass alle Beteiligten vom Gleichen sprechen, wennsie dasselbe Wort benutzen. 


<a id="orgf2f99cc"></a>

### Was gibt es für Standards zur Dokumentation von Requirements, nennen Sie 3

-   RUP (Rational Unified Process)
-   V-Model 2004
-   ISO/IEC/IEEE standard 29148:2011


<a id="org4ddbafa"></a>

### Was ist der Unterschied zwischen Security & Safety?

- Security schützt Systeme gegen Angriffe
- Safety schützt Mensch und Umwelt gegen Systeme


<a id="orgadcdeae"></a>

### Was versteht man unter «Defense in depth» Ansatz?

Es soll nicht mehr nur der Perimeter geschützt werden, sondern auch im Netzwerk müssen Security-measures deployed werden (z.B. Endpoint Detection and Response)


<a id="org90b9597"></a>

### Was versteht man unter Perimeter Sicherheit?

Es muss sichergestellt werden, dass kein Angreifer von aussen ins Netzwerk kommt. "Grenzwache"


<a id="org4104598"></a>

### Warum ist Perimeter Sicherheit nicht mehr unbedingt das Grundkonzept für die Sicherheit von Modernen Systemen/IT-Landschaften und was sind die aktuellen Challenges?

Die heutige Netzwerkstruktur ist zu komplex, um rein durch Perimeter-Sicherung geschützt werden zu können. Man kann die 'Aussengrenze' eines Netzwerks nicht mehr genau definieren. Wenn nur Perimeter-Security angewendet wird, und der Angreifer kommt trotzdem irgendwie ins Netzwert, ist man am Arsch. Mit in-depth Sicherheit ist er zwar im Netzwerk, aber dank z.B. Netzwerk-Segmentation ist 'nur' ein einzelner Netzwerksektor betroffen, der in Lockdown versetzt werden kann.
Zusem können Attacken heute auch von innen heraus kommen.


<a id="orgfda7fce"></a>

### Was ist eine Vulnerability?

Ein Programmier- und/oder Designfehler, der zu Security-Bedrohungen/Schaden führen kann.


<a id="orge44c5e9"></a>

### Was ist ein Exploit?

Technik zur Ausnutzung einer Vulnerability


<a id="org39148b9"></a>

### Wie wird eine Vulnerability ausgenützt, beschreiben Sie das Vorgehen

Es wird Programmcode geschrieben, der den Programm- oder Designfehler ausnützt, meist um Schadcode in ein System zu injizieren.


<a id="org1be268e"></a>

### Was ist Malware und wie läuft eine Infektion ab?

Malware = **Mal** icious **Soft** ware.

![img](./imgs/vulnerability_ausnutzen.png)

1.  Infect

Der Attaker versucht irgendwie ins System zu kommen. Dies geschieht z.B. via phishng-mail. Dies installiert meist ein erster Teil der Malware, ein sogenannter "Dropper".

2.  Exploit

Der Dropper kommuniziert zu einem externen C2 Server (Command and Control), der unter bestimmten Bedingungen weitere Anweisungen gibt und/oder ein weiterer Teil der Malware auf das infizierte System herunterlädt.

3.  Payload

Die Malware führt nun Schadcode aus, die z.B. Daten exfiltrieren oder verschlüsseln kann.


<a id="orgac7343c"></a>

## Woche 3


<a id="org46a38d9"></a>

### Wie ist das Verhältnis von Kosten und Bugs bzw. Zeitpunkt deren Erkennung im Projekt. Wie können Sie dies nutzen für die Argumentation von Security Requirement Engineering im Projekt?

Je später der Bug gefunden wird, desto teurer wird es, ihn zu fixen. Denn im Verlauf des Projektes wird die Software immer komplexer mit mehr Abhängigkeiten. 


<a id="org1fcb041"></a>

### Was ist ein SW Bug?

Ein Fehler in einem Programm, das dazu führt, dass es sich nicht so verhält wie erwartet und/oder falsche Resultate liefert.


<a id="org8ced81d"></a>

### Warum macht man Threat modeling?

Um die Netzwerk- und Applikationssicherheit zu verbessern. 
Dies, indem man kritische Assets identifiziert, mögliche Attacken auf diese Assets analysiert und basierend darauf Gegenmassnahmen plant und einleitet, die diese Attacken verunmöglichen oder zumindest das Rikio abschwächen.


<a id="org5dc2bad"></a>

### Was gibt es für rechtliche Anforderungen, die man ggf. beachten sollte?

In gewissen Branchen muss man compliant zu gewissen Regulationen sein (HIPAA, PCI-DSS etc.)


<a id="org3850faf"></a>

### Was ist der Vorteil und Nachteil von einem Wasserfall Model?

**Vorteile**

-   Einfaches Projektmanagement
-   Lineare Vorgehensweise
-   Einfache Definition von Meilensteinen

**Nachteile**

-   Programmierer sind recht eingeschränkt
-   Ist sehr starr und reagiert nicht auf allfällige Änderungen während des Projekts


<a id="org7f890da"></a>

### Machen Sie ein Beispiel in einer Tabelle für eine Vulnerability und deren Auswirkung analog unserem Bsp. im Unterricht (Vulnerability, Threat, Threat Action, Risk)

![img](./imgs/vuln_threat_action.png)


<a id="orgb18113f"></a>

### Was sind mögliche Quellen von Bugs?

-   Kommunikationsfehler
-   Unklare Requirements
-   Programmierfehler
-   (Selbstauferlegter) Druck
-   Zu komplexe Software
-   Ständig wechselnde Requirements
-   Schlecht oder gar nicht dokumentierter Code
-   Keine Tester


<a id="orga9692ee"></a>

### Was sind die verschiedenen Activities in einem SW Prozess, nennen Sie diese

-   **Software-Spezifikation:** Die Hauptfunktionalitäten und Requirements der Software müssen bestimmt werden
-   **Software Design und Implementation:** Die Software wird um diese Requirements herum designed und implementiert
-   **Software Verifikation und Validierung:** Es muss überprüft werden, dass die Software diese Requirements auch tatsächlich erfüllt
-   **Software Evolution/Maintenance:** Die Software muss gewartet und je nach den Kundenwünschen angepasst werden.


<a id="org149be42"></a>

### Was ist ein Prozess Model? Nennen Sie 4 Beispiele

Das Prozess Modell ist ein Startpunkt für die Projektplanung und -management. 

**Wasserfall**

Das Projekt wird phasenweise abgearbeitet, mit Meilenstein-Releases

**Prototyping**

Ein iterativer Prozess. In jeder Iteration wird dem Kunden ein Prototyp vorgestellt. Falls der dem Kunden gefällt, wird er weiterentwickelt.

**RUP (Rational Unified Process)**

Zuerst wird eine Vision/ein Anwendungsfall ausformuliert (Inceptin). Dieser wird anschliessend weiter ausgearbeitet (Elaboration) und schlussendlich Implementiert (Construction). Das Resultat wird dem Kunden als "Release Milestone" übergeben (Transition(. Der Prozess beginnt anschliessend wieder von vorn 

**Agil**

Ähnlich wie RUP. Jedoch meist zeitbasiert anstelle von funktionsbasiert. Es wird eine Zeitspanne für einen 'Sprint' festgelegt und was in diesem Sprint implementiert werden soll. Nach diese Zeitraum wird dem Kunden die implementierte (Teil-)Software übergeben und es beginnt ein enuer Sprint.


<a id="orgddd2d4e"></a>

### Nenne Sie Qualität Attribute in der Software quality assurance

**Funktionalität**

- Tauglichkeit
- Akkuratheit
- Interoperabilität
- Compliance
- Sicherheit

**Zuverlässigkeit**

- Maturität
- Wiederherstellbarkeit

**Usability**

- Verständlichkeit
- Lernbarkeit

**Effizienz**

- Zeitaufwand
- Verhalten
- Ressourcennutzung

**Wartbarkeit**

- Analysierbarkeit
- Veränderbarkeit
- Stabilität
- Testbarkeit

**Portabilität**

- Adaptierbarkeit
- Installierbarkeit
- Konformität
- Ersetzbarkeit


<a id="org6b4a719"></a>

### Was ist das agile Manifest, was wird darin festgehalten?

Prinzipien, wie man agile Software entwickeln sollte. Prinzipiell basiert es auf vier Grundsätzen:

-   Individuen und Interaktionen mehr als Prozesse und Werkzeuge
-   Funktionierende Software mehr als umfassende Dokumentation
-   Zusammenarbeit mit dem Kunden mehr als Vertragsverhandlung
-   Reagieren auf Veränderung mehr als das Befolgen eines Plans


<a id="orgda47ca3"></a>

### Was ist DevOps und was für einen Impact hat dies auf das Security Requirement Engineering?

DevOps steht für Developer Operation und beschreibt die Zusammenarbeit der Devs und Operation (IT-Betrieb). 
Durch gemeinsame Prozesse, Anreize und Tools soll die Zusammenarbeit dieser zwei Departements verbessert werden. Dies vereinfacht auch die Übergabe der fertigen Software vom Development zum Betrieb.

Wenn Development und Operations beide dieselben Security Prinzipien haben, wird es mehr und konsequenter durchgesetzt und verbessert so die allgemeine Sicherheit der Software


<a id="org6249186"></a>

### Was sind die Grundschritte beim SDLC, in welche Schritte beim SDLC kann man Security integrieren?

**Training**

Sicherheits-Know-How im Unternehmen bestimmen. Je nach dem Training anbieten

**Requirements**

Security-Requirements identifizieren und gewichten

**Design**

- Security by Design
- Security Architektur definieren und dokumentieren
- Security Critical Komponenten identifizieren

**Implementation**

- Review, um Prozesse, Dokumentationen und Tools zu identifizieren, die für eine sichere Entwicklung benötigt werden

**Verifikation**

- Security-Response planning - Was tun wenn ein Vulnerability Report kommt?

**Release**

- Suppoirt-policy klar definieren
- Letzte Überprüfung auf allfällige Security Vulnerabilities

**Response**

- Bei Bedarf den definierten Security-Response Plan durcharbeiten


<a id="org8c9248c"></a>

### Was gibt es für Standard Kataloge bzgl. Security Requirements

-   Rational Unified Process (RUP)
-   ISO/IEC/IEEE standard 29148:211
-   V-Model


<a id="org1d523f2"></a>

### Was ist OWASP, wie kann man OWASP für Security Requirement engineering nutzen?

[OWASP](https://owasp.org) = Open Web Application Security Project. 

OWASP ist eine non-profit Organisation, die sich das sichere Entwickeln von (Web)Applikationen zum Ziel gesetzt hat. Sie veröffentlicht regelmässig Guides und defacto Standards zur freien Verfügung.


<a id="org48c0987"></a>

### Was ist ein Threat? Was ist eine Vulnerability? Was ist der Unterschied?

**Vulnerability**

Eine Schwachstelle in einem Programm/Protokoll, die ausgenutzt werden kann z.b. um unauthorisierten Zugriff auf ein Asset zu erhalten

**Threat**

Eine ausgenutzte Vulnerability
    
![img](./imgs/vuln_threat.png)
    
![img](./imgs/threat_terms.png)


<a id="org5310d07"></a>

### Was sind die Schritte beim Threat Modeling?

![img](./imgs/threat_modeling.png)

![img](./imgs/threat_modeling_process.png)


<a id="org60a281d"></a>

### Nennen Sie Beispiele für SW Qualitlt

-   Software hat alle Features, die für das Erfüllen der Requirements benötigt werden
-   Software hat Security- und Safety-Requirments erfüllt


<a id="org2cce260"></a>

### Machen Sie ein korrektes Beispiel eines DFDs inklusive Legende

![img](./imgs/dfd.png)


<a id="org7b53e2f"></a>

### Was ist der Vorteil und Nachteil von einem Agilen Model? Was ist das Kernkonzept der agilen Vorgehensweise?

**Kernkonzept**

-   Wiederverwendung von Ressourcen
-   KISS (Keep It Small and Simple / Keep It Simple Stupid)
-   Der Code 'gehört' dem ganzen Team
-   Funktionelles und Kundenorientiertes Programmieren

**Vorteile**

-   Wenige Regeln, leicht verständlich und schnell einführbar
-   Kurze Kommunikationswege
-   Hohe Flexibilität/Agilität durch adaptives Planen
-   Hohe Effektivität durch Selbstorganisation
-   Hohe Transparenz durch regelmäßige Meetings und Backlogs
-   Zeitnahe Realisation neuer Produkteigenschaften bzw. Inkremente
-   Kontinuierlicher Verbesserungsprozess
-   Kurzfristige Problem-Identifikation
-   Geringer Administrations- und Dokumentationsaufwand

**Nachteile**

-   Kein Gesamtüberblick über die komplette Projektstrecke
-   Hoher Kommunikations- und Abstimmungsaufwand
-   Wenige konkrete Handlungsempfehlungen
-   Zeitverluste bei zu „defensiven" Sprintplanungen
-   „Tunnelblick-Gefahr" bei ausschließlicher Fokussierung auf Tasks
-   Erschwerte Koordination mehrerer Entwicklungsteams bei Großprojekten
-   Potenzielle Verunsicherung aufgrund fehlender Zuständigkeiten und Hierarchien
-   Potenzielle Unvereinbarkeit mit bestehenden Unternehmensstrukturen


<a id="org21cfe7c"></a>

## Woche 4


<a id="orgaec6e90"></a>

### Nennen Sie für jeden Threat im STRIDE Model eine Mitigation Massnahme

-   **Spoofing**: 2FA
-   **Tampering**: Checksum
-   **Repudiation**: Server- und Clientseitiges Logging
-   **Information Disclosure**: Encryption
-   **Denial of Service**: Loadbalancer
-   **Elevation of Privilege**: Strong authorization


<a id="org2ef304a"></a>

### Wie können AI und ML Threats und das Verhalten von Angreiffern beeinflussen?

Behaviour erkennen und Gegenmassnahmen einleiten


<a id="orge47f80f"></a>

### Was bedeutet STRIDE?

-   *Spoofing* Ich gebe mich für den CEO aus, obwohl ich ihn nicht bin
-   *Tampering* Ein DLL für einen Service modifizieren. so dass es Schadcode nachladen kann
-   *Repudiation* "Ich habe den Spam-Link *nie* geklickt"
-   *Information Disclosure* Kundenliste auf der Website veröffentlichen
-   *Denial of Service* Mailserver so zuspammen, dass niemand mehr Mails senden/empfangen kann
-   *Elevation of Privilege* Ich kann problemlos 'sudo' Kommandos auf dem Produktionsserver laufen lassen

**Geben Sie zu jedem Threat das dazugehörige Property an**

-   *Spoofing* Authentication
-   *Tampering* Integrity
-   *Repudiation* Nonrepudiation
-   *Information Disclosure* Confidentiality
-   *Denial of Service* Availability
-   *Elevation of Privilege* Authorization
    

<a id="orgb8f94e0"></a>

### Was bedeutet DREAD

-   *Damage* Wie viel Schaden richtet die Vulnerability an falls sie exploitet wird
-   *Reproducability* Wie einfach ist es, die Vulnerabillity zu reproduziere
-   *Exploitability* Wie einfach ist es, diese Vulnerability zu exploiten
-   *Affected Users* Wie viele User sind betroffen, sollte die Vulnerability exploitet wrden
-   *Discoverability* Wie einfach ist es, diese Schwachstelle zu entdecken? Gibt es bereits Whitepapers darüber oder ist es ein zero-day?

<a id="orgbb859ee"></a>

### Was gibt es für Modelle, um das Riskrating vorzunehmen mit DREAD?
DREAD Rating & Calculation

<a id="orgb5d28dc"></a>

### Was für mögliche Rahmenwerke können Ihnen helfen, um Threats zu identifizieren?


<a id="org1e708ab"></a>

### Was ist unter Mitigation zu verstehen?

Ein Problem addressieren und abschwächen oder lösen


<a id="org3f0dbff"></a>

### Was ist in der heutigen Zeit (Entwicklung der aktuellen IT-Landschaft) die Herausforderung mit STRIDE?
Durch schnelle Entwicklung und immer komplexere IT-Landschaften ist es beinahe unmöglich, sämltiche Lücken zu erkennen und rechtzeitig zu schliessen.

<a id="orgde4275e"></a>

### Beschreiben Sie die 4 Schritte des Threat Modeling Prozesses

1.  Diagramm

Applikationsdiagramm (z.B. DFD) zeichnen mit Trust- und System-Boundaries

2.  Threats identifizieren

Mittels STRIDE / DREAD mögliche Threats identifizeiren

3.  Threts mitigieren

Allfällige gefundene Threats mitigieren

4.  Validierung

Alle Risiken, die nicht mitigiert werden können, müssen eine Ebene höher gegeben werden, so dass das Management darüber befinden kann, ob das Risiko zumutbar ist.

