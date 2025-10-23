#include <stdio.h>
#include "myLib.h"

#define N 5

int main(){

    int a[N];

    initarray(a,N,100);

    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }

    mergeSort(a,0,N-1);

    printf("\n");
    
    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }
 
    return 0;
}