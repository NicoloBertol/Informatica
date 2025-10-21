#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myLib.h"

#define N 5

int main(){

    int a[N],r;
    printf("Inserisci 0 per ordinare l'array in ordine crescente, 1 per ordinarlo in ordine decrescente: ");
    scanf("%d",&r);

    initarray(a,N,15);

    if(r==0){
        insertionSort(a,N);
        for(int i=0;i<N;i++){
            printf("%d ",a[i]);
        }
    }
    else{
        insertionSort1(a,N);
        for(int i=0;i<N;i++){
            printf("%d ",a[i]);
        } 
    }

    return 0;
}