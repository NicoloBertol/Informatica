#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>


void bubbleSort(int vet[], int t){
    int i,j,o=0;
    for (i = 0; i < t; i++){
       printf("%d ",vet[i]);
    }
    printf("\n");
    for(i=0;i<t-1&&!o;i++){
        o=1;
        for(j=0;j<t-i-1;j++){
            if(vet[j]>vet[j+1]){
                o=0;
                scambia(&vet[j],&vet[j+1]);
            }
        }
    }
}

void bubbleSort1(int vet[], int t){
    int i,j,o=0;
    for (i = 0; i < t; i++){
       printf("%d ",vet[i]);
    }
    printf("\n");
    for(i=0;i<t-1&&!o;i++){
        o=1;
        for(j=0;j<t-i-1;j++){
            if(vet[j]<vet[j+1]){
                o=0;
                scambia(&vet[j],&vet[j+1]);
            }
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

void scambia(int* a, int* b){
    int tmp =*a;
    *a=*b;
    *b = tmp;

}