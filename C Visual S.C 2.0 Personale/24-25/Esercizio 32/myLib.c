#include <stdio.h>
#include "myLib.h"

int massimo(int vet[], int t){
    int i,m=vet[0];
    for(i=0;i<t;i++){
        if(vet[i]>m){
            m=vet[i];
        }
    }
    return m;
}