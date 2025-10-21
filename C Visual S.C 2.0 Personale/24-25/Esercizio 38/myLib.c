#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

void statistica(int vet[],int t,int m){
    int i=0,e=0,r=0,f=0,g=0;

    srand(time(NULL));
    for(i=0;i<t;i++){
        vet[i]=rand()%m+1;
    }

    for(i=0;i<t;i++){
        e+=vet[i];
    }
    printf("La somma e' %d",e);
    printf("\n");

    r=e/t;
    printf("La media e' %d",r);
    printf("\n");

    for(i=0;i<t;i++){
        if(vet[i]>50){
            f++;
        }
    }
    printf("I numeri maggiori di 50 sono %d",f);
    printf("\n");

    for(i=0;i<t;i++){
        if(vet[i]==100){
            g++;
        }
    }
    printf("Il numero di valori pari a 100 e' %d",g);
}
