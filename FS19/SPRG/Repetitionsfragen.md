
# Table of Contents

1.  [Repetitionsfragen](#orge3a81cc)
    1.  [Woche 1](#org24a1a99)
        1.  [Was ist der Unterschied zwischen funktionalen-und nichtfunktionalen Anforderungen?](#orgb41048f)
        2.  [Was ist ein Requirement genau?](#org9dccc65)
        3.  [Definieren Sie den Requirement Engineer (RE) / Business Analyst(BA)](#org52621a4)
        4.  [Was sind die 4 Kernpunkte/Aktivitäten im RE?](#orga9ad457)
        5.  [Nennen Sie mindestens 4 Methoden um Requirements zu finden](#orgaf88f6c)
        6.  [Wie können Requirements definiert und beschreiben werden?](#org7f14b58)
        7.  [Formulieren Sie 3 offene und 3 geschlossene Fragen](#org7dd6759)
        8.  [Was ist ein Stakeholder (Definitionund mögliche Beispiele)](#org8b0b813)
        9.  [Warum ist ein Programmierer ggf. nicht geeignet für Security RE?](#org601cda7)
        10. [Was sind die Gefahren, wenn man RE nicht korrekt einplant und durchführt?](#org01a13d9)
        11. [Was kann man tun / vorgehen, wenn man unter Zeitdruck steht beim RE?](#org20ea6bf)
        12. [Zeigen Sie ein System mit Systemgrenzen und Kontext auf](#org2214c0c)
    2.  [Woche 2](#org16fa91d)
        1.  [Nennen Sie die 3 Perspektiven in/von welchen man Requirements betrachten kann](#orgc0d6a2c)
        2.  [Wie kann man Requirements Beschreiben bzw. Dokumentieren?](#orgc7196f8)
        3.  [Nennen Sie die Elemente eines Datenflow Diagramms (DFD)](#orgc2c2b7d)
        4.  [Nennen Sie einige Qualitätskriterien von Requirements](#orga6b40d4)
        5.  [Warum ist ein Glossar wichtig?](#org0dcbd4d)
        6.  [Was gibt es für Standards zur Dokumentation von Requirements, nennen Sie 3](#org3a2237a)
        7.  [Was ist der Unterschied zwischen Security & Safety?](#org4270aec)
        8.  [Was versteht man unter «Defense in depth» Ansatz?](#org4d70bed)
        9.  [Was versteht man unter Perimeter Sicherheit?](#org6001bd3)
        10. [Warum ist Perimeter Sicherheit nicht mehr unbedingt das Grundkonzept für die Sicherheit von Modernen Systemen/IT-Landschaften und was sind die aktuellen Challenges?](#orgffdd021)
        11. [Was ist eine Vulnerability?](#org4f3cabb)
        12. [Was ist ein Exploit?](#org8ae0818)
        13. [Wie wird eine Vulnerability ausgenützt, beschreiben Sie das Vorgehen](#org4b3227c)
        14. [Was ist Malware und wie läuft eine Infektion ab?](#org4a21b1a)
    3.  [Woche 3](#org6af7c12)
        1.  [Wie ist das Verhältnis von Kosten und Bugs bzw. Zeitpunkt deren Erkennung im Projekt. Wie können Sie dies nutzen für die Argumentation von Security Requirement Engineering im Projekt?](#orge37b51c)
        2.  [Was ist ein SW Bug?](#orgc07dbbf)
        3.  [Warum macht man Threat modeling?](#org860e1da)
        4.  [Was gibt es für rechtliche Anforderungen, die man ggf. beachten sollte?](#org31510c9)
        5.  [Was ist der Vorteil und Nachteil von einem Wasserfall Model?](#org4a8474c)
        6.  [Machen Sie ein Beispiel in einer Tabelle für eine Vulnerability und deren Auswirkung analog unserem Bsp. im Unterricht (Vulnerability, Threat, Threat Action, Risk)](#org950078b)
        7.  [Was sind mögliche Quellen von Bugs?](#orgac6ca76)
        8.  [Was sind die verschiedenen Activities in einem SW Prozess, nennen Sie diese](#orge1735d1)
        9.  [Was ist ein Prozess Model? Nennen Sie 4 Beispiele](#orge92c39e)
        10. [Nenne Sie Qualität Attribute in der Software quality assurance](#org06de45c)
        11. [Was ist das agile Manifest, was wird darin festgehalten?](#org20da583)
        12. [Was ist devops und was für einen Impact hat dies auf das Security Requirement Engineering?](#org1419db4)
        13. [Was sind die Grundschritte beim SDLC, in welche Schritte beim SDLC kann man Security integrieren?](#org81f979c)
        14. [Was gibt es für Standard Kataloge bzgl. Security Requirements](#org7ff1243)
        15. [Was ist OWASP, wie kann man OWASP für Security Requirement engineering nutzen?](#orgd840498)
        16. [Was ist ein Threat? Was ist eine Vulnerability? Was ist der Unterschied?](#org3097b36)
        17. [Was sind die Schritte beim Threat Modeling?](#orgb82aaa5)
        18. [Nennen Sie Beispiele für SW Qualität](#orgd41c86a)
        19. [Machen Sie ein korrektes Beispiel eines DFDs inklusive Legende](#org1ea47b5)
        20. [Was ist der Vorteil und Nachteil von einem Agilen Model? Was ist das Kernkonzept der agilen Vorgehensweise?](#org4782b44)
    4.  [Woche 4](#org86bf2ee)
        1.  [Nennen Sie für jeden Threat im STRIDE Model eine Mitigation Massnahme](#orgf9d3194)
        2.  [Wie können AI und ML Threats und das Verhalten von Angreiffern beeinflussen?](#orge6976bf)
        3.  [Was bedeutet STRIDE?](#org495b2fa)
        4.  [Was bedeutet DREAD](#org7877d5c)
        5.  [Was gibt es für Modelle, um das Riskrating vorzunehmen mit DREAD?](#org25923da)
        6.  [Was für mögliche Rahmenwerke können Ihnen helfen, um Threats zu identifizieren?](#org8a9e0c8)
        7.  [Was ist unter Mitigation zu verstehen?](#org6227ee3)
        8.  [Was ist in der heutigen Zeit (Entwicklung der aktuellen IT-Landschaft) die Herausforderung mit STRIDE?](#org45faab6)
        9.  [Beschreiben Sie die 4 Schritte des Threat Modeling Prozesses](#orgc1fa61e)
    5.  [Woche 5](#org70f46cd)


<a id="orge3a81cc"></a>

# Repetitionsfragen


<a id="org24a1a99"></a>

## Woche 1


<a id="orgb41048f"></a>

### Was ist der Unterschied zwischen funktionalen-und nichtfunktionalen Anforderungen?

1.  3 Beispiele für funktionale Anforderungen

    -   Die Maschine muss Kaffee rauslassen können
    -   Der Kaffee muss mit Bargeld oder Karte bezahlt werden können
    -   Es muss ein Nachfüllmechanismus vorhanden sein

2.  3 Beispiele für nichtfunktionale Anforderungen

    -   Es müssen mehrere Arten von Kaffee zur Verfügung stehen
    -   Das UI muss ein touchscreen sein
    -   Es müssen 10'000 Kaffees rausgelassen werden können bevor die Maschine nachgefüllt werden muss


<a id="org9dccc65"></a>

### Was ist ein Requirement genau?

Eine Bedingung oder Fähigkeit des Produktes, die ein user benötigt, zu, ein gestelltes Problem zu lösen


<a id="org52621a4"></a>

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


<a id="orga9ad457"></a>

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


<a id="orgaf88f6c"></a>

### Nennen Sie mindestens 4 Methoden um Requirements zu finden

1.  Dokumentations-Analyse
2.  Interviews mit Stakeholdern
3.  Workshops
4.  Questionnaires
5.  Brainstorming

1.  Welche davon sind Kreativ Methoden?

    Kreativ-Methoden dienen dazu, ****innovative**** Requirements zu finden.


<a id="org7f14b58"></a>

### Wie können Requirements definiert und beschreiben werden?

1.  Beispiele für ein statisches und agiles Vorgehen?

    1.  Statisch
    
        Wasserfall-Modell
        
        -   Alle Requirements werden bereits zu Beginn erhoben, verfeinert und dokumentiert und sollten sich im Verlauf des Projektes möglichst nicht ändern.
    
    2.  Agil
    
        SCRUM/Sprint-Basiert:
        
        -   Requirements werden 'on the go' erhoben. Erst bevor sie implementiert werden, werden die Requirements als 'Features' definiert. Dies, da es schwer ist, alle benötigten Funktionalitäten bereits zu
        
        Begiunn eines Projektes zu definieren, weil sich während der Laufzeit des Projektes noch viel verändernk kann.


<a id="org7dd6759"></a>

### Formulieren Sie 3 offene und 3 geschlossene Fragen

**Offene Fragen**

-   Wieso bist du hier?
-   Was sind deine Hobbies?
-   Welche Security-Lücken müssen geschlossen werden?

**Geschlossene Fragen**

-   Sind die besprochenen Security-Lücken bereits geschlossen worden?
-   Liegen wir noch im Zeitplan?
-   Habt ihr schon mit den Stakeholder gesprochen?


<a id="org8b0b813"></a>

### Was ist ein Stakeholder (Definitionund mögliche Beispiele)

Eine Person, die am Produkt interessiert ist (Entweder Endnutzer oder Distributor oder Hersteller&#x2026;)

1.  Zeichnen Sie eine Stakeholderliste anhanden des Kaffeemaschine Cases

    -   Kaffee-Hersteller
    -   Betreiber von Kaffeemaschinen
    -   Universitäts/Hochschulsbetreiber
    -   Kaffeetrinker
    
    &#x2026;.


<a id="org601cda7"></a>

### Warum ist ein Programmierer ggf. nicht geeignet für Security RE?

Er hat nicht das nötige Know-How und ggf. auch nicht die Zeit. Zduem ist er 'zu nah' am Produkt (Creator-Blindness)


<a id="org01a13d9"></a>

### Was sind die Gefahren, wenn man RE nicht korrekt einplant und durchführt?

Es kommt wesentlich teurer, die Fehler bei/nach der Implementierung zu flicken, da viele Dinge voneinander abhängen


<a id="org20ea6bf"></a>

### Was kann man tun / vorgehen, wenn man unter Zeitdruck steht beim RE?

Risikobasiertes Priorisieren und von oben anfangen (Requirement mit dem höchsten Risiko) und so weit arbeiten wie man kommt


<a id="org2214c0c"></a>

### Zeigen Sie ein System mit Systemgrenzen und Kontext auf

1.  Machen Sie ein simples Beispiel dazu um dies zu erklären(Bsp. Kaffeemaschine)

    ![img](/home/alex/Dropbox/Apps/MobileOrg/imgs/order-processing-system-contsxt.png)


<a id="org16fa91d"></a>

## Woche 2


<a id="orgc0d6a2c"></a>

### Nennen Sie die 3 Perspektiven in/von welchen man Requirements betrachten kann

1.  Datenperspektive

    Welches **Format** bzw. welche **Struktur** haben die **Daten**, die in das **System hereingegeben** werden und welches Format bzw. Struktur haben die **retournierten Daten**?

2.  Funktionale Perspektive

    Welche Informationen (Daten) werden vom System empfangen und von dessen Methoden/Funktionen verarbeitet. Diese Dokumentationsmethode beschreibt ebenfalls, welche Daten wieder zurückgegeben werden. Ebenfalls wichtigt ist es zu dokumentieren, **in welcher Reihenfolge** die Funktionen/Methoden die empfangenen Daten verarbeiten.

3.  Verhaltensperspektive

    Diese Methode beschreibt wie das System mit dem umliegenden **Kontext interagiert**. Das heisst, wie **reagiert** das System auf bestimmte **Events vom umliegenden Kontext** und welche **Konditionen** müssen gegeben sein, dass es so reagiert. Ebenfalls wird dokumentiert, wie das System den umliegenden Kontext beeinflusst (z.B. einen Trigger auslöst, der ein weiteren Prozess in einem anderen System ankickt)
    
    Dies wird meist mittels State-Diagrammen dargestellt.


<a id="orgc7196f8"></a>

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


<a id="orgc2c2b7d"></a>

### Nennen Sie die Elemente eines Datenflow Diagramms (DFD)


<a id="orga6b40d4"></a>

### Nennen Sie einige Qualitätskriterien von Requirements


<a id="org0dcbd4d"></a>

### Warum ist ein Glossar wichtig?


<a id="org3a2237a"></a>

### Was gibt es für Standards zur Dokumentation von Requirements, nennen Sie 3


<a id="org4270aec"></a>

### Was ist der Unterschied zwischen Security & Safety?


<a id="org4d70bed"></a>

### Was versteht man unter «Defense in depth» Ansatz?


<a id="org6001bd3"></a>

### Was versteht man unter Perimeter Sicherheit?


<a id="orgffdd021"></a>

### Warum ist Perimeter Sicherheit nicht mehr unbedingt das Grundkonzept für die Sicherheit von Modernen Systemen/IT-Landschaften und was sind die aktuellen Challenges?


<a id="org4f3cabb"></a>

### Was ist eine Vulnerability?


<a id="org8ae0818"></a>

### Was ist ein Exploit?


<a id="org4b3227c"></a>

### Wie wird eine Vulnerability ausgenützt, beschreiben Sie das Vorgehen


<a id="org4a21b1a"></a>

### Was ist Malware und wie läuft eine Infektion ab?


<a id="org6af7c12"></a>

## Woche 3


<a id="orge37b51c"></a>

### Wie ist das Verhältnis von Kosten und Bugs bzw. Zeitpunkt deren Erkennung im Projekt. Wie können Sie dies nutzen für die Argumentation von Security Requirement Engineering im Projekt?


<a id="orgc07dbbf"></a>

### Was ist ein SW Bug?


<a id="org860e1da"></a>

### Warum macht man Threat modeling?


<a id="org31510c9"></a>

### Was gibt es für rechtliche Anforderungen, die man ggf. beachten sollte?


<a id="org4a8474c"></a>

### Was ist der Vorteil und Nachteil von einem Wasserfall Model?


<a id="org950078b"></a>

### Machen Sie ein Beispiel in einer Tabelle für eine Vulnerability und deren Auswirkung analog unserem Bsp. im Unterricht (Vulnerability, Threat, Threat Action, Risk)


<a id="orgac6ca76"></a>

### Was sind mögliche Quellen von Bugs?


<a id="orge1735d1"></a>

### Was sind die verschiedenen Activities in einem SW Prozess, nennen Sie diese


<a id="orge92c39e"></a>

### Was ist ein Prozess Model? Nennen Sie 4 Beispiele


<a id="org06de45c"></a>

### Nenne Sie Qualität Attribute in der Software quality assurance


<a id="org20da583"></a>

### Was ist das agile Manifest, was wird darin festgehalten?


<a id="org1419db4"></a>

### Was ist devops und was für einen Impact hat dies auf das Security Requirement Engineering?


<a id="org81f979c"></a>

### Was sind die Grundschritte beim SDLC, in welche Schritte beim SDLC kann man Security integrieren?


<a id="org7ff1243"></a>

### Was gibt es für Standard Kataloge bzgl. Security Requirements


<a id="orgd840498"></a>

### Was ist OWASP, wie kann man OWASP für Security Requirement engineering nutzen?


<a id="org3097b36"></a>

### Was ist ein Threat? Was ist eine Vulnerability? Was ist der Unterschied?


<a id="orgb82aaa5"></a>

### Was sind die Schritte beim Threat Modeling?


<a id="orgd41c86a"></a>

### Nennen Sie Beispiele für SW Qualität


<a id="org1ea47b5"></a>

### Machen Sie ein korrektes Beispiel eines DFDs inklusive Legende


<a id="org4782b44"></a>

### Was ist der Vorteil und Nachteil von einem Agilen Model? Was ist das Kernkonzept der agilen Vorgehensweise?


<a id="org86bf2ee"></a>

## Woche 4


<a id="orgf9d3194"></a>

### Nennen Sie für jeden Threat im STRIDE Model eine Mitigation Massnahme

-   **Spoofing**: 2FA
-   **Tampering**: Checksum
-   **Repudiation**: Server- und Clientseitiges Logging
-   **Information Disclosure**: Encryption
-   **Denial of Service**: Loadbalancer
-   **Elevation of Privilege**: Strong authorization


<a id="orge6976bf"></a>

### Wie können AI und ML Threats und das Verhalten von Angreiffern beeinflussen?

-   AI: Behaviour erkennen und Gegenmassnahmen einleiten
-   


<a id="org495b2fa"></a>

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


<a id="org7877d5c"></a>

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


<a id="org25923da"></a>

### Was gibt es für Modelle, um das Riskrating vorzunehmen mit DREAD?


<a id="org8a9e0c8"></a>

### Was für mögliche Rahmenwerke können Ihnen helfen, um Threats zu identifizieren?

1.  Nennen Sie 3


<a id="org6227ee3"></a>

### Was ist unter Mitigation zu verstehen?


<a id="org45faab6"></a>

### Was ist in der heutigen Zeit (Entwicklung der aktuellen IT-Landschaft) die Herausforderung mit STRIDE?


<a id="orgc1fa61e"></a>

### Beschreiben Sie die 4 Schritte des Threat Modeling Prozesses


<a id="org70f46cd"></a>

## Woche 5

