/*
Überlegen Sie, welchen Wert wird die Variable 'c' haben sollte. Geben Sie dann die Variable 'c' aus und überprüfen Sie Ihr Ergebnis.
*/

#include <stdio.h>

int main() {
    int a = 8;
    int b = 24;
    
    int * a_ptr = &a;
    int * b_ptr = &b;
    int c = *a_ptr + *b_ptr;

    
}
