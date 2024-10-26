# Lösungen

## Für "Einfach"

### 1.

<pre>printf("%d", *numptr);</pre>

### 2.

Linie 10 wird hierzu verändert:

<pre>int * ptr = &b;</pre>

### 3.

Die Linien 12 und 14 sind so nicht richtig. Wenn man das Programm kompilieren würde, stehen da zwar nur warnings statt errors und das Programm könnte auch so ablaufen. Jedoch wäre der Output dann nicht der Wert, den man erwarten würde. Besser wäre:

<pre>
12. char * ptr = &c;

14. printf("%c", *ptr);
</pre>

## Für "Schwerer"

### 1.

Die Variable 'c' hat den Wert 32.
Um 'c' auszugeben:

<pre>printf("%d", c);</pre>

### 2.

<pre>
char * myString = "Hello World!";

printf(myString);
</pre>

Info: Oft werden Strings auch als <pre>char myString[] = "Hallo";</pre> definiert. Zwischen den eckigen Klammern wird keine Zahl gebraucht, denn der C-Compiler weiß automatisch aus der Länge des Strings, wie viele Elemente der Array hat. Bei diesem Beispiel sind es übrigens nicht 5, sondern 6 Elemente, denn am Ende jedes Strings sollte ein Null-Character stehen '\0', der das Ende des String andeutet.

### 3.

Der gesamte Quellcode:

<pre>
#include <stdio.h>

void subtract3(int * num) {
    *num = *num - 3;
}

int main() {
    int num = 33;

    printf("bevor: %d\n", num);

    subtract3(&num);

    printf("danach: %d\n", num);
}
</pre>

## Für "Am Schwersten"

### 1.

Um von dem 10-fach-Zeiger 'ptrToNum' aus auf den Wert von 'num' zuzugreifen, muss man den Dereference Operator zehn mal verwenden:

<pre>
printf("%d", **********ptrToNum);
</pre>

### 2.

<pre>
#include <stdio.h>

int main() {
    int numArr[] = {1, 92, 36};

    * ( numArr + 2) = 4;

    printf("%d", numArr[2]);
}
</pre>

Statt <code>p[3]</code> könnte man <code>* (p + 1)</code> schreiben.

### 3.

Der vollstandige Quellcode:

<pre>
#include <stdio.h>

int main() {
    char * stringArr[5] = {"Hallo, ", "mein ", "Name ", "ist ", "Peter."};

    // strcpy() kopiert einen String in einen anderen String, dabei ist es wichtig, dass beim Target-String (also 'satz') eine Länge vorbestimmt wird, in dem alles reinpasst (also alles vom 'StringArr').
    // Wir kopieren schonmal das "Hallo" aus dem String-Array rein, denn strcat braucht schon eine Grundlage um von dort aus dann weitere Strings hinzuzufügen.
    char satz[500];
    strcpy(satz, stringArr[0]);

    for (int i = 1; i < 5; i ++) {
        strcat(satz, stringArr[i]);
    }

    printf(satz);
}
</pre>

Wichtig: Strings darf man <u>nicht</u> mit einem Doppelpointer definieren, also nicht so:

<pre>
// das ist FALSCH
char ** stringArr = {"Hallo, ", "mein ", "Name ", "ist ", "Peter."};
</pre>


