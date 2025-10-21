#include "mylib.h"
#include <stdlib.h>
#include <time.h>

void initarray(int vet[], int n){
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++)
        vet[i]=rand()%100+1;

}

int minori(int vet[], int n){
    int i,min=0;
    for(i=0;i<n;i++){
        if(vet[i]<20){
            min++;
        }
    }
    return min;
}

void scambia(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int vet[], int n){
    int i,j,pos_min;
    for(i=0;i<n-1;i++){
        pos_min=i;
        for(j=i+1;j<n;j++){
            if(vet[j]<vet[pos_min]){
                pos_min=j;
            }
        }
        scambia(&vet[pos_min],&vet[i]);
    }
}