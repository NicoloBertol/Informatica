#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

#define N 100

int main(){
    int a[N], r=0, e=0;

    srand(time(NULL));
    e=rand()%100+1;
    printf("Il numero da cercare e': %d\n",e);

    initarray(a,N,100);
    insertionSort(a,N);

    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    r=ricercaBinaria(a,a[0],a[N-1],e);

    if(r==-1){
        printf("Non e' stato trovato il numero richiesto.");
    }
    else{
        printf("Il numero richiesto si trova all'indice %d",r);
    }

    return 0;
}