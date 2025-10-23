#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

void scambia(int* a, int* b){
    int tmp =*a;
    *a=*b;
    *b = tmp;

}

void insertionSort(int vet[], int t){
    int i,j;
    for(i=1;i<t;i++){
        j=i;
        while(j>0 && vet[j]<vet[j-1]){
            scambia(&vet[j-1],&vet[j]);
            j--;
        }
    }
}

void initarray(int array[],int t,int m){
    int i;
    srand(time(NULL));
    for(i=0;i<t;i++){
        array[i]=rand()%m+1;
    }
}
