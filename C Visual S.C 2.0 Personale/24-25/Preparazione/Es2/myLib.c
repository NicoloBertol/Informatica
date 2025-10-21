#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

#define N 5

void initarray(int array[],int t,int m){
    int i;
    srand(time(NULL));
    for(i=0;i<t;i++){
        array[i]=rand()%m+1;
    }
}

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

int ricercaBinaria(int vet[], int first, int last, int key){
    int center;
    if(first <= last){
        center=(first+last)/2;

        if(key==vet[center]){
            return center;
        }
        else{
            if(key<vet[center]){
                return ricercaBinaria(vet,first,center-1,key);
            }
            else{
                return ricercaBinaria(vet,center+1,last,key);
            }
        }
    }
    return -1;
}
