/*
Verändern Sie das Programm mithilfe des Zeigers so, dass das der Wert von b ausgegeben wird.
*/

#include <stdio.h>

int main() {
    int a = 20;
    int b = 40;
    int * ptr = &a;

    printf("%d", *ptr);
}
