/*Crea un puntatore ad int e fallo puntare ad una variabile di tipo int.
Infine incrementa il valore della variabile utilizzando il puntatore.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x=7;
    int *ptr = &x;

    (*ptr)++;
    
    printf("%d",a);

    return 0;
}