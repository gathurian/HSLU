
# Table of Contents

1.  [Repetitionsfragen](#org00ccb24)
    1.  [Woche 1](#org02989e2)
        1.  [Was ist der Unterschied zwischen funktionalen-und nichtfunktionalen Anforderungen?](#orgd23502b)
        2.  [Was ist ein Requirement genau?](#org0b6bd7f)
        3.  [Definieren Sie den Requirement Engineer (RE) / Business Analyst(BA)](#org2c30992)
        4.  [Was sind die 4 Kernpunkte/Aktivitäten im RE?](#org57f80d3)
        5.  [Nennen Sie mindestens 4 Methoden um Requirements zu finden](#org7b6c655)
        6.  [Wie können Requirements definiert und beschreiben werden?](#orgf581b6b)
        7.  [Formulieren Sie 3 offene und 3 geschlossene Fragen](#org4dc1291)
        8.  [Was ist ein Stakeholder (Definitionund mögliche Beispiele)](#orge8bd856)
        9.  [Warum ist ein Programmierer ggf. nicht geeignet für Security RE?](#org7853476)
        10. [Was sind die Gefahren, wenn man RE nicht korrekt einplant und durchführt?](#org5c07d74)
        11. [Was kann man tun / vorgehen, wenn man unter Zeitdruck steht beim RE?](#orgab98674)
        12. [Zeigen Sie ein System mit Systemgrenzen und Kontext auf](#orgb096e2c)
    2.  [Woche 2](#org69bd180)
        1.  [Nennen Sie die 3 Perspektiven in/von welchen man Requirements betrachten kann](#orga27c5bf)
        2.  [Wie kann man Requirements Beschreiben bzw. Dokumentieren?](#org7389e07)
        3.  [Nennen Sie die Elemente eines Datenflow Diagramms (DFD)](#orgda67b3c)
        4.  [Nennen Sie einige Qualitätskriterien von Requirements](#org13cbe78)
        5.  [Warum ist ein Glossar wichtig?](#org19c3328)
        6.  [Was gibt es für Standards zur Dokumentation von Requirements, nennen Sie 3](#org616bfda)
        7.  [Was ist der Unterschied zwischen Security & Safety?](#org8ffeff5)
        8.  [Was versteht man unter «Defense in depth» Ansatz?](#orga8a0df5)
        9.  [Was versteht man unter Perimeter Sicherheit?](#org410f9d8)
        10. [Warum ist Perimeter Sicherheit nicht mehr unbedingt das Grundkonzept für die Sicherheit von Modernen Systemen/IT-Landschaften und was sind die aktuellen Challenges?](#org5abd4c2)
        11. [Was ist eine Vulnerability?](#org2c0c74d)
        12. [Was ist ein Exploit?](#org528deb2)
        13. [Wie wird eine Vulnerability ausgenützt, beschreiben Sie das Vorgehen](#org63dde14)
        14. [Was ist Malware und wie läuft eine Infektion ab?](#org1e8cc7e)
    3.  [Woche 3](#org246ab26)
        1.  [Wie ist das Verhältnis von Kosten und Bugs bzw. Zeitpunkt deren Erkennung im Projekt. Wie können Sie dies nutzen für die Argumentation von Security Requirement Engineering im Projekt?](#orgcd5b741)
        2.  [Was ist ein SW Bug?](#orga471cbe)
        3.  [Warum macht man Threat modeling?](#org3d17077)
        4.  [Was gibt es für rechtliche Anforderungen, die man ggf. beachten sollte?](#org06129e3)
        5.  [Was ist der Vorteil und Nachteil von einem Wasserfall Model?](#org171e9b0)
        6.  [Machen Sie ein Beispiel in einer Tabelle für eine Vulnerability und deren Auswirkung analog unserem Bsp. im Unterricht (Vulnerability, Threat, Threat Action, Risk)](#org36b1c91)
        7.  [Was sind mögliche Quellen von Bugs?](#orga31791f)
        8.  [Was sind die verschiedenen Activities in einem SW Prozess, nennen Sie diese](#orga487111)
        9.  [Was ist ein Prozess Model? Nennen Sie 4 Beispiele](#orga0f5abf)
        10. [Nenne Sie Qualität Attribute in der Software quality assurance](#org7ebb293)
        11. [Was ist das agile Manifest, was wird darin festgehalten?](#org1655888)
        12. [Was ist DevOps und was für einen Impact hat dies auf das Security Requirement Engineering?](#org5c24d1e)
        13. [Was sind die Grundschritte beim SDLC, in welche Schritte beim SDLC kann man Security integrieren?](#org72b762b)
        14. [Was gibt es für Standard Kataloge bzgl. Security Requirements](#org57b5659)
        15. [Was ist OWASP, wie kann man OWASP für Security Requirement engineering nutzen?](#org701fb02)
        16. [Was ist ein Threat? Was ist eine Vulnerability? Was ist der Unterschied?](#orgbd01a30)
        17. [Was sind die Schritte beim Threat Modeling?](#orge0abda5)
        18. [Nennen Sie Beispiele für SW Qualität](#org4f56a81)
        19. [Machen Sie ein korrektes Beispiel eines DFDs inklusive Legende](#org8c80e60)
        20. [Was ist der Vorteil und Nachteil von einem Agilen Model? Was ist das Kernkonzept der agilen Vorgehensweise?](#org05b1998)
    4.  [Woche 4](#org0057b86)
        1.  [Nennen Sie für jeden Threat im STRIDE Model eine Mitigation Massnahme](#orgc3d4bbb)
        2.  [Wie können AI und ML Threats und das Verhalten von Angreiffern beeinflussen?](#org67e0e06)
        3.  [Was bedeutet STRIDE?](#orgc271368)
        4.  [Was bedeutet DREAD](#org5bd5c1d)
        5.  [Was gibt es für Modelle, um das Riskrating vorzunehmen mit DREAD?](#org7ef5d25)
        6.  [Was für mögliche Rahmenwerke können Ihnen helfen, um Threats zu identifizieren?](#org3badd8c)
        7.  [Was ist unter Mitigation zu verstehen?](#org0cafdd5)
        8.  [Was ist in der heutigen Zeit (Entwicklung der aktuellen IT-Landschaft) die Herausforderung mit STRIDE?](#org006195c)
        9.  [Beschreiben Sie die 4 Schritte des Threat Modeling Prozesses](#orgde71ff6)
    5.  [Woche 5](#org37e5f81)


<a id="org00ccb24"></a>

# Repetitionsfragen


<a id="org02989e2"></a>

## Woche 1


<a id="orgd23502b"></a>

### Was ist der Unterschied zwischen funktionalen-und nichtfunktionalen Anforderungen?

1.  3 Beispiele für funktionale Anforderungen

    -   Die Maschine muss Kaffee rauslassen können
    -   Der Kaffee muss mit Bargeld oder Karte bezahlt werden können
    -   Es muss ein Nachfüllmechanismus vorhanden sein

2.  3 Beispiele für nichtfunktionale Anforderungen

    -   Es müssen mehrere Arten von Kaffee zur Verfügung stehen
    -   Das UI muss ein touchscreen sein
    -   Es müssen 10'000 Kaffees rausgelassen werden können bevor die Maschine nachgefüllt werden muss


<a id="org0b6bd7f"></a>

### Was ist ein Requirement genau?

Eine Bedingung oder Fähigkeit des Produktes, die ein user benötigt, zu, ein gestelltes Problem zu lösen


<a id="org2c30992"></a>

### Definieren Sie den Requirement Engineer (RE) / Business Analyst(BA)

1.  Was ist die Rolle eines RE in einem Projekt?

    Der RE ist die Schnittstelle zwischen der technischen Seite des Projektes (den Programmierern) und dem Management. Er kann zwischen diesen beiden Seiten 'übersetzen'

2.  In welchen Phasen ist der RE involviert?

    In allen Phasen
    
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


<a id="org57f80d3"></a>

### Was sind die 4 Kernpunkte/Aktivitäten im RE?

1.  Elicitation

    Während der Erhebung der Requirements werden verschiedene Techniken verwenden, um Requirements von Stakeholdern (und allfälligen anderen Quellen) zu erhalten und zu verbessern

2.  Documentation

    In der Dokumentationsphase werden die erhobenen Requirements genauer beschrieben. Auch hier werden verschiedene Technologien verwendet.

3.  Validation and Negotiation

    Um sicherzustellen, dass die erhobenen Requirements den Ansprüchen der Stakeholder genügen, müssen sie schon früh validiert und allenfalls tiefer verhandelt werden

4.  Management

    Requirement Management wird in allen bisher genannten Aktivitäten benötigt und beinhaltet alle benötigten Massnahmen um die erhobenen Requirements zu strukturieren. Das heisst, sie so zu verarbeiten,
    dass die Devs ein Produkt/eine Software danach entwickeln können, das Management sie aber trotzdem noch versteht. Ebenfalls muss eine Konsistenz geschaffen werden.


<a id="org7b6c655"></a>

### Nennen Sie mindestens 4 Methoden um Requirements zu finden

1.  Dokumentations-Analyse
2.  Interviews mit Stakeholdern
3.  Workshops
4.  Questionnaires
5.  Brainstorming

1.  Welche davon sind Kreativ Methoden?

    Kreativ-Methoden dienen dazu, ****innovative**** Requirements zu finden.


<a id="orgf581b6b"></a>

### Wie können Requirements definiert und beschreiben werden?

1.  Beispiele für ein statisches und agiles Vorgehen?

    1.  Statisch
    
        Wasserfall-Modell
        
        -   Alle Requirements werden bereits zu Beginn erhoben, verfeinert und dokumentiert und sollten sich im Verlauf des Projektes möglichst nicht ändern.
    
    2.  Agil
    
        SCRUM/Sprint-Basiert:
        
        -   Requirements werden 'on the go' erhoben. Erst bevor sie implementiert werden, werden die Requirements als 'Features' definiert. Dies, da es schwer ist, alle benötigten Funktionalitäten bereits zu
        
        Begiunn eines Projektes zu definieren, weil sich während der Laufzeit des Projektes noch viel verändernk kann.


<a id="org4dc1291"></a>

### Formulieren Sie 3 offene und 3 geschlossene Fragen

**Offene Fragen**

-   Wieso bist du hier?
-   Was sind deine Hobbies?
-   Welche Security-Lücken müssen geschlossen werden?

**Geschlossene Fragen**

-   Sind die besprochenen Security-Lücken bereits geschlossen worden?
-   Liegen wir noch im Zeitplan?
-   Habt ihr schon mit den Stakeholder gesprochen?


<a id="orge8bd856"></a>

### Was ist ein Stakeholder (Definitionund mögliche Beispiele)

Eine Person, die am Produkt interessiert ist (Entweder Endnutzer oder Distributor oder Hersteller&#x2026;)

1.  Zeichnen Sie eine Stakeholderliste anhanden des Kaffeemaschine Cases

    -   Kaffee-Hersteller
    -   Betreiber von Kaffeemaschinen
    -   Universitäts/Hochschulsbetreiber
    -   Kaffeetrinker
    
    &#x2026;.


<a id="org7853476"></a>

### Warum ist ein Programmierer ggf. nicht geeignet für Security RE?

Er hat nicht das nötige Know-How und ggf. auch nicht die Zeit. Zduem ist er 'zu nah' am Produkt (Creator-Blindness)


<a id="org5c07d74"></a>

### Was sind die Gefahren, wenn man RE nicht korrekt einplant und durchführt?

Es kommt wesentlich teurer, die Fehler bei/nach der Implementierung zu flicken, da viele Dinge voneinander abhängen


<a id="orgab98674"></a>

### Was kann man tun / vorgehen, wenn man unter Zeitdruck steht beim RE?

Risikobasiertes Priorisieren und von oben anfangen (Requirement mit dem höchsten Risiko) und so weit arbeiten wie man kommt


<a id="orgb096e2c"></a>

### Zeigen Sie ein System mit Systemgrenzen und Kontext auf

1.  Machen Sie ein simples Beispiel dazu um dies zu erklären(Bsp. Kaffeemaschine)

    ![img](./imgs/order-processing-system-contsxt.png)


<a id="org69bd180"></a>

## Woche 2


<a id="orga27c5bf"></a>

### Nennen Sie die 3 Perspektiven in/von welchen man Requirements betrachten kann

1.  Datenperspektive

    Welches **Format** bzw. welche **Struktur** haben die **Daten**, die in das **System hereingegeben** werden und welches Format bzw. Struktur haben die **retournierten Daten**?

2.  Funktionale Perspektive

    Welche Informationen (Daten) werden vom System empfangen und von dessen Methoden/Funktionen verarbeitet. Diese Dokumentationsmethode beschreibt ebenfalls, welche Daten wieder zurückgegeben werden. Ebenfalls wichtigt ist es zu dokumentieren, **in welcher Reihenfolge** die Funktionen/Methoden die empfangenen Daten verarbeiten.

3.  Verhaltensperspektive

    Diese Methode beschreibt wie das System mit dem umliegenden **Kontext interagiert**. Das heisst, wie **reagiert** das System auf bestimmte **Events vom umliegenden Kontext** und welche **Konditionen** müssen gegeben sein, dass es so reagiert. Ebenfalls wird dokumentiert, wie das System den umliegenden Kontext beeinflusst (z.B. einen Trigger auslöst, der ein weiteren Prozess in einem anderen System ankickt)
    
    Dies wird meist mittels State-Diagrammen dargestellt.


<a id="org7389e07"></a>

### Wie kann man Requirements Beschreiben bzw. Dokumentieren?

1.  Natural Language

    Beschreibt das System in natürlicher Sprache, evtl. mit Templates.
    > Das System **WIRD/MUSS/KANN/SOLLTE** **TASK** tun können
    
    > Das System **<WIRD/MUSS/KANN/SOLLTE>** **<USER/ROLLE>** **<TASK>** ermöglichen 
    ![img](./imgs/natural_language.png)

2.  Modelle

    Alternativ können Modelle und Diagramme verwendet werden. Das hat den Vorteil, dass die Requirements klarer dargestellt sind und weniger Raum für Spekulationen bietet. Jedoch muss der Betrachter ein grundsätzliches Verständnis des Modells/Diagramms haben
    
    1.  Usecase Diagramm
    
        Welche Funktionen werden welchem Benutzer/welcher Rolle des Systems zur Verfügung gestellt
        ![img](./imgs/uc_diagram.PNG)
    
    2.  Klassendiagramm
    
        Gut geeignet, um Datenstrukturen zu dokumentieren. Welche Klassen/Interfaces verlangen welche Datentypen als Input and retournieren welche Datentypen? Ebenfalls zeigt ein solches Diagramm die Zusammenhänge und Abhängigkeiten von Komponenten.
        
        ![img](./imgs/class_diagram.png)
    
    3.  Aktivitätsdiagramm
    
        Gut geeignet, um Prozessabläufe zu dokumentieren. Welche Tasks werden nacheinander durchgeführt? Welche Bedingungen müssen erfüllt sein?
        ![img](./imgs/activity_diagram.jpg)
    
    4.  Statusdiagramm
    
        Gut geeignet, um die Verhaltensperspektive zu dokumentieren. Statusdiagramme zeigen die verschiedenen Stati des Systems auf, welche Events einen Statuswechsel auslösen und wie sich diese Stati auf den Systemkontext auswirken
        ![img](./imgs/state_diagram.png)


<a id="orgda67b3c"></a>

### Nennen Sie die Elemente eines Datenflow Diagramms (DFD)

![img](./img/dfd.png)


<a id="org13cbe78"></a>

### Nennen Sie einige Qualitätskriterien von Requirements

-   Eindeutigkeit, was gmeeint ist
-   Klare Struktur
-   Modifizier- und Erweiterbar
-   Vollständig
-   Nachverfolgbar


<a id="org19c3328"></a>

### Warum ist ein Glossar wichtig?

So dass alle Beteiligten vom Gleichen sprechen, wennsie dasselbe Wort benutzen. 


<a id="org616bfda"></a>

### Was gibt es für Standards zur Dokumentation von Requirements, nennen Sie 3

-   RUP (Rational Unified Process)
-   V-Model 2004
-   ISO/IEC/IEEE standard 29148:2011


<a id="org8ffeff5"></a>

### Was ist der Unterschied zwischen Security & Safety?

Security schützt Systeme gegen Angriffe
Safety schützt Mensch und Umwelt gegen Systeme


<a id="orga8a0df5"></a>

### Was versteht man unter «Defense in depth» Ansatz?

Es soll nicht mehr nur der Perimeter geschützt werden, sondern auch im Netzwerk müssen Security-measures deployed werden (z.B. Endpoint Detection and Response)


<a id="org410f9d8"></a>

### Was versteht man unter Perimeter Sicherheit?

Es muss sichergestellt werden, dass kein Angreifer von aussen ins Netzwerk kommt. "Grenzwache"


<a id="org5abd4c2"></a>

### Warum ist Perimeter Sicherheit nicht mehr unbedingt das Grundkonzept für die Sicherheit von Modernen Systemen/IT-Landschaften und was sind die aktuellen Challenges?

Die heutige Netzwerkstruktur ist zu komplex, um rein durch Perimeter-Sicherung geschützt werden zu können. Wenn nur Perimeter-Security angewendet wird, und der Angreifer kommt trotzdem irgendwie ins Netzwert, ist man am Arsch. Mit in-depth Sicherheit ist er zwar im Netzwerk, aber dank z.B. Netzwerk-Segmentation ist 'nur' ein einzelner Netzwerksektor betroffen, der in Lockdown versetzt werden kann.


<a id="org2c0c74d"></a>

### Was ist eine Vulnerability?

Ein Programmier- und/oder Designfehler, der zu Security-Bedrohungen/Schaden führen kann.


<a id="org528deb2"></a>

### Was ist ein Exploit?

Technik zur Ausnutzung einer Vulnerability


<a id="org63dde14"></a>

### Wie wird eine Vulnerability ausgenützt, beschreiben Sie das Vorgehen

Es wird Programmcode geschrieben, der den Programm- oder Designfehler ausnützt, meist um Schadcode in ein System zu injizieren.


<a id="org1e8cc7e"></a>

### Was ist Malware und wie läuft eine Infektion ab?

Malware = **Mal** icious **Soft** ware.

![img](./img/vulnerability_ausnutzen.png)

1.  Infect

    Der Attaker versucht irgendwie ins System zu kommen. Dies geschieht z.B. via phishng-mail. Dies installiert meist ein erster Teil der Malware, ein sogenannter "Dropper".

2.  Exploit

    Der Dropper kommuniziert zu einem externen C2 Server (Command and Control), der unter bestimmten Bedingungen weitere Anweisungen gibt und/oder ein weiterer Teil der Malware auf das infizierte System herunterlädt.

3.  Payload

    Die Malware führt nun Schadcode aus, die z.B. Daten exfiltrieren oder verschlüsseln kann.


<a id="org246ab26"></a>

## Woche 3


<a id="orgcd5b741"></a>

### Wie ist das Verhältnis von Kosten und Bugs bzw. Zeitpunkt deren Erkennung im Projekt. Wie können Sie dies nutzen für die Argumentation von Security Requirement Engineering im Projekt?

Je später der Bug gefunden wird, desto teurer wird es, ihn zu fixen. Denn im Verlauf des Projektes wird die Software immer komplexer mit mehr Abhängigkeiten. 


<a id="orga471cbe"></a>

### Was ist ein SW Bug?

Ein Fehler in einem Programm, das dazu führt, dass es sich nicht so verhält wie erwartet und/oder falsche Resultate liefert.


<a id="org3d17077"></a>

### Warum macht man Threat modeling?

TODO


<a id="org06129e3"></a>

### Was gibt es für rechtliche Anforderungen, die man ggf. beachten sollte?

TODO


<a id="org171e9b0"></a>

### Was ist der Vorteil und Nachteil von einem Wasserfall Model?

1.  Vorteile

    -   Einfaches Projektmanagement
    -   Lineare Vorgehensweise
    -   Einfache Definition von Meilensteinen

2.  Nachteile

    -   Programmierer sind recht eingeschränkt
    -   Ist sehr starr und reagiert nicht auf allfällige Änderungen während des Projekts


<a id="org36b1c91"></a>

### Machen Sie ein Beispiel in einer Tabelle für eine Vulnerability und deren Auswirkung analog unserem Bsp. im Unterricht (Vulnerability, Threat, Threat Action, Risk)

TODO


<a id="orga31791f"></a>

### Was sind mögliche Quellen von Bugs?

-   Kommunikationsfehler
-   Unklare Requirements
-   Programmierfehler
-   (Selbstauferlegter) Druck
-   Zu komplexe Software
-   Ständig wechselnde Requirements
-   Schlecht oder gar nicht dokumentierter Code
-   Keine Tester


<a id="orga487111"></a>

### Was sind die verschiedenen Activities in einem SW Prozess, nennen Sie diese

-   **Software-Spezifikation:** Die Hauptfunktionalitäten und Requirements der Software müssen bestimmt werden
-   **Software Design und Implementation:** Die Software wird um diese Requirements herum designed und implementiert
-   **Software Verifikation und Validierung:** Es muss überprüft werden, dass die Software diese Requirements auch tatsächlich erfüllt
-   **Software Evolution/Maintenance:** Die Software muss gewartet und je nach den Kundenwünschen angepasst werden.


<a id="orga0f5abf"></a>

### Was ist ein Prozess Model? Nennen Sie 4 Beispiele

Das Prozess Modell ist ein Startpunk für die Projektplanung und -management. 

-   Wasserfall

&#x2013; Das Projekt wird phasenweise abgearbeitet, mit Meilenstein-Releases

-   Prototyping

&#x2013; Ein iterativer Prozess. In jeder Iteration wird dem Kunden ein Prototyp vorgestellt. Falls der dem Kunden gefällt, wird er weiterentwickelt.

-   RUP (Rational Unified Process)

&#x2013; Zuerst wird eine Vision/ein Anwendungsfall ausformuliert (Inceptin). Dieser wird anschliessend weiter ausgearbeitet (Elaboration) und schlussendlich Implementiert (Construction). Das Resultat wird dem Kunden als "Release Milestone" übergeben (Transition(. Der Prozess beginnt anschliessend wieder von vorn 

-   Agil

&#x2013; Ähnlich wie RUP. Jedoch meist zeitbasiert anstelle von funktionsbasiert. Es wird eine Zeitspanne für einen 'Sprint' festgelegt und was in diesem Sprint implementiert werden soll. Nach diese Zeitraum wird dem Kunden die implementierte (Teil-)Software übergeben und es beginnt ein enuer Sprint.


<a id="org7ebb293"></a>

### Nenne Sie Qualität Attribute in der Software quality assurance

-   Funktionalität

&#x2013; Tauglichkeit
&#x2013; Akkuratheit
&#x2013; Interoperabilität
&#x2013; Compliance
&#x2013; Sicherheit

-   Zuverlässigkeit

&#x2013; Maturität
&#x2013; Wiederherstellbarkeit

-   Usability

&#x2013; Verständlichkeit
&#x2013; Lernbarkeit

-   Effizienz

&#x2013; Zeitaufwand
&#x2013; Verhalten
&#x2013; Ressourcennutzung

-   Wartbarkeit

&#x2013; Analysierbarkeit
&#x2013; Veränderbarkeit
&#x2013; Stabilität
&#x2013; Testbarkeit

-   Portabilität

&#x2013; Adaptierbarkeit
&#x2013; Installierbarkeit
&#x2013; Konformität
&#x2013; Ersetzbarkeit


<a id="org1655888"></a>

### Was ist das agile Manifest, was wird darin festgehalten?

Prinzipien, wie man agile Software entwickeln sollte. Prinzipiell basiert es auf vier Grundsätzen:

-   Individuen und Interaktionen mehr als Prozesse und Werkzeuge
-   Funktionierende Software mehr als umfassende Dokumentation
-   Zusammenarbeit mit dem Kunden mehr als Vertragsverhandlung
-   Reagieren auf Veränderung mehr als das Befolgen eines Plans


<a id="org5c24d1e"></a>

### Was ist DevOps und was für einen Impact hat dies auf das Security Requirement Engineering?

DevOps steht für Developer Operation und beschreibt die Zusammenarbeit der Devs und Operation (IT-Betrieb). 
Durch gemeinsame Prozesse, Anreize und Tools soll die Zusammenarbeit dieser zwei Departements verbessert werden. Dies vereinfacht auch die Übergabe der fertigen Software vom Development zum Betrieb.

Wenn Development und Operations beide dieselben Security Prinzipien haben, wird es mehr und konsequenter durchgesetzt und verbessert so die allgemeine Sicherheit der Software


<a id="org72b762b"></a>

### Was sind die Grundschritte beim SDLC, in welche Schritte beim SDLC kann man Security integrieren?

-   Training

&#x2013; Sicherheits-Know-How im Unternehmen bestimmen. Je nach dem Training anbieten

-   Requirements

&#x2013; Security-Requirements identifizieren und gewichten

-   Design

&#x2013; Security by Design
&#x2013; Security Architektur definieren und dokumentieren
&#x2013; Security Critical Komponenten identifizieren

-   Implementation

&#x2013; Review, um Prozesse, Dokumentationen und Tools zu identifizieren, die für eine sichere Entwicklung benötigt werden

-   Verifikation

&#x2013; Security-Response planning - Was tun wenn ein Vulnerability Report kommt?

-   Release

&#x2013; Suppoirt-policy klar definieren
&#x2013; Letzte Überprüfung auf allfällige Security Vulnerabilities

-   Response

&#x2013; Bei Bedarf den definierten Security-Response Plan durcharbeiten


<a id="org57b5659"></a>

### Was gibt es für Standard Kataloge bzgl. Security Requirements


<a id="org701fb02"></a>

### Was ist OWASP, wie kann man OWASP für Security Requirement engineering nutzen?


<a id="orgbd01a30"></a>

### Was ist ein Threat? Was ist eine Vulnerability? Was ist der Unterschied?


<a id="orge0abda5"></a>

### Was sind die Schritte beim Threat Modeling?


<a id="org4f56a81"></a>

### Nennen Sie Beispiele für SW Qualität


<a id="org8c80e60"></a>

### Machen Sie ein korrektes Beispiel eines DFDs inklusive Legende


<a id="org05b1998"></a>

### Was ist der Vorteil und Nachteil von einem Agilen Model? Was ist das Kernkonzept der agilen Vorgehensweise?


<a id="org0057b86"></a>

## Woche 4


<a id="orgc3d4bbb"></a>

### Nennen Sie für jeden Threat im STRIDE Model eine Mitigation Massnahme

-   **Spoofing**: 2FA
-   **Tampering**: Checksum
-   **Repudiation**: Server- und Clientseitiges Logging
-   **Information Disclosure**: Encryption
-   **Denial of Service**: Loadbalancer
-   **Elevation of Privilege**: Strong authorization


<a id="org67e0e06"></a>

### Wie können AI und ML Threats und das Verhalten von Angreiffern beeinflussen?

-   AI: Behaviour erkennen und Gegenmassnahmen einleiten
-   


<a id="orgc271368"></a>

### Was bedeutet STRIDE?

-   Spoofing
-   Tampering
-   Repudiation
-   Information Disclosure
-   Denial of Service
-   Elevation of Privilege

1.  Geben Sie zu jedem Threat das dazugehörige Property an

    -   Authentication
    -   Iintegrity
    -   Nonrepudiation
    -   Confidentiality
    -   Availability
    -   Authorization
    
    TODO: Beispiele machen


<a id="org5bd5c1d"></a>

### Was bedeutet DREAD

-   Damage
-   Reproducability
-   Exploitability
-   Affected Users
-   Discoverability

1.  Beschreiben Sie jede Kategorie kurz

    -   Damage: Wie viel Schaden richtet die Vulnerability an falls sie exploitet wird
    -   Reproducability: Wie einfach ist es, die Vulnerabillity zu reproduziere
    -   Exploitbility: Wie einfach ist es, diese Vulnerability zu exploiten
    -   Affected Users: Wie viele User sind betroffen, sollte die Vulnerability exploitet wrden


<a id="org7ef5d25"></a>

### Was gibt es für Modelle, um das Riskrating vorzunehmen mit DREAD?


<a id="org3badd8c"></a>

### Was für mögliche Rahmenwerke können Ihnen helfen, um Threats zu identifizieren?

1.  Nennen Sie 3


<a id="org0cafdd5"></a>

### Was ist unter Mitigation zu verstehen?


<a id="org006195c"></a>

### Was ist in der heutigen Zeit (Entwicklung der aktuellen IT-Landschaft) die Herausforderung mit STRIDE?


<a id="orgde71ff6"></a>

### Beschreiben Sie die 4 Schritte des Threat Modeling Prozesses


<a id="org37e5f81"></a>

## Woche 5

