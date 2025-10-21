#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

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

void bubbleSort(int vet[], int t){
    int i,j,o=0;
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

void initarray(int array[],int t,int m){
    int i;
    srand(time(NULL));
    for(i=0;i<t;i++){
        array[i]=rand()%m+1;
    }
}

long fattoriale(long n){
    if(n==0){
        return 1;
    }
    else{
        return n * fattoriale(n-1);
    }
}

long fibonacci(long n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
