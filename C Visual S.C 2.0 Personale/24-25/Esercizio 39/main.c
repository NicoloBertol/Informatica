#include <stdio.h>
#include "myLib.h"
#include <stdlib.h>
#include <time.h>

#define N 6
int main(){

    int a[N];
    initarray(a,N,15);
    selectionSort(a,N);
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    mediana(a,N);

    return 0;
}