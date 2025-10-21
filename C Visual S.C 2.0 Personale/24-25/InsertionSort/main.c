//Implementa e testa l'algoritmo di ordinamento Insertion Sort

#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

#define N 5

int main(){
    int a[N];
    initarray(a,N,15);
    insertionSort(a,N);
    for(int i=0;i<N;i++)
    printf("%d ",a[i]);
    return 0;
}