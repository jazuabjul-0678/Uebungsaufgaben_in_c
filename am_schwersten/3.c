/*
Ein String wird folgendermaẞen erstellt:

char * string = "This is a string";

So erstellt man dann einen Array von Strings:

char * stringArr[3] = {"Array", "von", "Strings"};

Im Code unten ist ein String-Array definiert. Zusammengesetzt ergibt er einen vollständigen Satz. Vervollständigen Sie das Programm, indem Sie die strcat()-Funktion benutzen, um alles zusammenzusetzen.


strcat() funktioniert so:

Der erste Parameter gibt an, wohin der Wert vom zweiten Parameter angesetzt werden soll.

Zum Beispiel:

    char buffer[500];
    strcpy(buffer, "Eins");

    strcat(buffer, "Zwei");
    strcat(buffer, "Drei");
    strcat(buffer, "Vier");

Der Wert von 'buffer' wäre dann: "EinsZweiDreiVier".
*/

#include <stdio.h>

int main() {
    char * stringArr[5] = {"Hallo, ", "mein ", "Name ", "ist ", "Peter."};

    // strcpy() kopiert einen String in einen anderen String, dabei ist es wichtig, dass beim Target-String (also 'satz') eine Länge vorbestimmt wird, in dem alles reinpasst (also alles vom 'StringArr').
    // Wir kopieren schonmal das "Hallo" aus dem String-Array rein, denn strcat braucht schon eine Grundlage um von dort aus dann weitere Strings hinzuzufügen.
    char satz[500];
    strcpy(satz, stringArr[0]);

    // den Code ab hier reinschreiben...
    

    printf(satz);
}
