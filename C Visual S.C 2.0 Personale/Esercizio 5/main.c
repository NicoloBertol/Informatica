/*Dato il seguente prototipo:  
    - int sommaArray(int *array, int dimensione);
    creare un sottoprogramma che somma tutti gli elementi dell'array e lo restituisce in output
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int sommaArray(int *vet, int t){
    int somma=0;
    for(int i=0;i<t;i++){
        somma+=vet[i];
    }
    return somma;
}

int main(){
    int vet[N], s=0;
    srand(time(NULL));
    for(int i=0;i<N;i++){
        vet[i]=rand()%100+1;
        printf("%d ",vet[i]);
    }
    s=sommaArray(vet,N);

    printf("\n%d",s);

    return 0;
}