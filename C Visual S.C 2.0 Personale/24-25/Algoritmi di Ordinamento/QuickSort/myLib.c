#include "myLib.h"
#include <stdlib.h>
#include <time.h>

void scambia(int* a, int* b){
    int tmp =*a;
    *a=*b;
    *b = tmp;

}

int partition(int vet[],int left,int right){
    int pivot,i,j;

    pivot=vet[left];

    i=left-1;
    j=right+1;

    do{
        do{j--;}while(vet[j]>pivot);
        do{i++;}while(vet[i]<pivot);

        if(i<j){
            scambia(&vet[i],&vet[j]);
        }

    }while(i<j);

    return j;
}

void QuickSort(int vet[],int left,int right){
    int part;
    
    if(left<right){
        part=partition(vet,left,right);

        QuickSort(vet,left,part);
        QuickSort(vet,part+1,right);
    }
}

void initarray(int array[],int t,int m){
    int i;
    srand(time(NULL));
    for(i=0;i<t;i++){
        array[i]=rand()%m+1;
    }
}
