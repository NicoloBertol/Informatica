#include <stdio.h>
#include "myLib.h"

void scambia(int* a, int* b){
    int tmp =*a;
    *a=*b;
    *b = tmp;

}

void selectionSort(int vet[],int t){
    int i,j,pos_min;
    for (i = 0; i < t; i++){
       printf("%d",vet[i]);
    }
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