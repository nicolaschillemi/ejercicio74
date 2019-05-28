#include <stdio.h>

void main() {

    char salida = ' ';

   do {

       int a, b, c, d;

       printf("\n\nIngrese los cuatro n%cmeros separados por un espacio para ordenarlos: ",163);
       scanf("%i %i %i %i", &a, &b, &c, &d);
       fflush(stdin);

       if (a < b) {
           int temp = a;
           a = b;
           b = temp;
       }

       if (a < c) {
           int temp = a;
           a = c;
           c = temp;
       }

       if (a < d) {
           int temp = a;
           a = d;
           d = temp;
       }

       if (b < c) {
           int temp = b;
           b = c;
           c = temp;
       }

       if (b < d) {
           int temp = b;
           b = d;
           d = temp;
       }

       if (c < d) {
           int temp = c;
           c = d;
           d = temp;
       }

       printf("\n\nEl orden de mayor a menor es %i %i %i %i", a, b, c, d);
       fflush(stdin);

       printf("\n\nPara salir escriba S may%csucula, caso contrario presione enter: ",163);
       scanf("%c", &salida);
       fflush(stdin);

   } while (salida != 'S');

}