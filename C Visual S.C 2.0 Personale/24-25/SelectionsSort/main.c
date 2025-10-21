//Implementare la procedura di ordinamento SelectionSort vista a lezione

#include <stdio.h>
#include "myLib.h"


int main(){
    int i, a[5] = {3,2,5,1,4};
    selectionSort(a,5);
    printf("\n");
    for (i = 0; i < 5; i++){
        printf("%d",a[i]);
    }
    return 0;
}