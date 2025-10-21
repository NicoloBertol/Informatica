#include <stdio.h>
#include "myLib.h"

int main(){
    long e,n;
    printf("Inserisci un valore: ");
    scanf("%ld",&n);
    e=fattoriale(n);
    printf("%ld",e);
    return 0;
}