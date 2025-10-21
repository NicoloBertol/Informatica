#include <stdio.h>
#include "myLib.h"

#define N 10

int main(){
    int a[N],r;
    initarray(a,N);
    for(int i=0;i<N;i++)
        printf("%d ",a[i]);

    r=minori(a,N);

    printf("\n");

    selectionSort(a,N);
    for(int i=0;i<N;i++)
        printf("%d ",a[i]);

    printf("\n");
    
    printf("Ci sono %d numeri minori di 20.",r);

    return 0;
}

 