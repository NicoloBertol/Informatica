#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

void selectionSort(int vet[],int t){
    int i,j,pos_min;
    for (i = 0; i < t; i++){
       printf("%d ",vet[i]);
    }
    printf("\n");
    for(i=0;i<t-1;i++){
        pos_min=i;
        for(j=i+1;j<t;j++){
            if(vet[j]<vet[pos_min]){
                pos_min=j;
            }
        }
        scambia(&vet[i],&vet[pos_min]);
    }
}


void selectionSort1(int vet[],int t){
    int i,j,pos_min;
    for (i = 0; i < t; i++){
       printf("%d ",vet[i]);
    }
    printf("\n");
    for(i=0;i<t-1;i++){
        pos_min=i;
        for(j=i+1;j<t;j++){
            if(vet[j]>vet[pos_min]){
                pos_min=j;
            }
        }
        scambia(&vet[i],&vet[pos_min]);
    }
}

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