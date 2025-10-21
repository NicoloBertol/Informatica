#include <stdio.h>
#include "myLib.h"
#define N 5

int main(){
    int a[N], e=0, d=0;

    printf("Inserisci il numero da cercare: ");
    scanf("%d",&d);

    e = ricercaSequenziale(a,N,d);
    if(e!=-1){
        printf("%d",e);
    }
    else{
        printf("Il valore %d non è stato trovato.",e);
    }
    
    return 0;
}