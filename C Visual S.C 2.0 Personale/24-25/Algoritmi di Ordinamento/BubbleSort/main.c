//Implementa e testa l'algoritmo di ordinamento Bubble Sort

#include <stdio.h>
#include "myLib.h"

#define N 5

int main(){
    int a[N];
    initarray(a,N,15);
    bubbleSort(a,N);
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    return 0;
}