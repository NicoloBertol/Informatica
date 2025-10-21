#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){
    int a[N],e=0, o=0, r=0;
    initarray(a,N,20);
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    
    printf("\nChe ricerca vuoi utilizzare (Lineare = 0 o Binaria = 1)? Inserisci di seguito 0 o 1: ");
    scanf("%d",&r);

    printf("\nOk. Inserisci l'ID dello studente (1, 2, 3, 4, ecc...): ");
    scanf("\n%d", &o);

    if(r == 0){
        e = ricercaSequenziale(a,N,o);
    }
    if(r == 1){
        insertionSort(a,N);
        e = ricercaBinaria(a,a[1],a[N-1],o);
    }
    
    if(e==-1){
        printf("Non e' stato trovato l'ID richiesto.");
    }
    else{
        printf("L'ID richiesto si trova all'indice %d",e);
    }


    return 0;
}