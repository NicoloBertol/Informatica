/*Realizzare, utilizzando una struttura con HEADER FILE, una funzione chiamata "massimo" che trova
e restituisce il valore più grande presente in un array passato come argomento insieme alla sua taglia*/

#include <stdio.h>
#include "myLib.h"
#define N 5


int main(){
    int a[N],ris=0;
    
    ris=massimo(a,N);

    printf("Il massimo valore dell'array e': %d",ris);

    return 0;
}