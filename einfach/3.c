/*
Thomas hat ein Programm geschrieben, ist sich aber nicht sicher, ob es so stimmt. Überprüfen Sie sein Programm nach Fehlern und korrigieren Sie diese.
*/

#include <stdio.h>

int main() {
    int a = 20;
    float b = 3.45;
    char c = 'b';

    float * ptr = &c;

    printf("%d", *ptr);
}
