/*Dichiara una variabile di un tipo a tua scelta (tranne int) e associagli un puntatore, 
infine stampa il valore puntato utilizzando l'operatore di de-referenziazione*/

#include <stdio.h>

int main(){
    float x=2.2;
    float *ptr=&x;
    printf("%.2f",*ptr);
    return 0;
}