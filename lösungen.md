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


