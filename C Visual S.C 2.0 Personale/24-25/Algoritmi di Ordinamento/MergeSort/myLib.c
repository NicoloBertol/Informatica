#include "myLib.h"
#include <stdlib.h>
#include <time.h>

#define N 5

void merge(int vet[],int left,int center,int right){
    int i,j,k,b[N];
    i=left;
    j=center+1;
    k=left;

    while(i<=center && j<=right){
        if(vet[i]<=vet[j]){
            b[k]=vet[i];
            i++;
        }
        else{
            b[k]=vet[j];
            j++;
        }
        k++;
    }

    while(i<=center){
        b[k]=vet[i];
        i++;
        k++;
    }

    while(j<=right){
        b[k]=vet[j];
        j++;
        k++;
    }
    for(k=left;k<=right;k++){
        vet[k]=b[k];
    }
}


void mergeSort(int vet[],int left,int right){
    int center;
    if(left<right){
        center=(left+right)/2;
        mergeSort(vet,left,center);
        mergeSort(vet,center+1,right);

        merge(vet,left,center,right);
    }
}

void initarray(int array[],int t,int m){
    int i;
    srand(time(NULL));
    for(i=0;i<t;i++){
        array[i]=rand()%m+1;
    }
}
