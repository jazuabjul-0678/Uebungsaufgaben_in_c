/*
Benutzen Sie 'ptrToNum' um den Wert der Variable 'num' zu bekommen.
*/

#include <stdio.h>

int main() {
    int num = 5;

    int * numptr1 = &num;
    int ** numptr2 = &numptr1;
    int *** numptr3 = &numptr2;
    int **** numptr4 = &numptr3;
    int ***** numptr5 = &numptr4;
    int ****** numptr6 = &numptr5;
    int ******* numptr7 = &numptr6;
    int ******** numptr8 = &numptr7;
    int ********* numptr9 = &numptr8;

    int ********** ptrToNum = &numptr9;


}
