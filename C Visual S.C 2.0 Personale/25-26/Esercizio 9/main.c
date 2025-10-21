/*Dato i lseguente prototipo:
void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media);
implementa la procedura in modo che al termine della stessa: nella variabile somma ci sarà la somma di tutti gli elmenti dell'array;
nella variabile media la media degli elementi dell'array.*/

#include <stdio.h>

void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media){
    for(int i=0;i<dimensione;i++){
        *somma+=array[i];
    }
    *media = (float) *somma/dimensione;
}

int main(){
    int vet[] = {1,2,3,4};
    int s=0;
    float m=0.0f;
    int *ptrs = &s;
    float *ptrm = &m;

    calcolaSommaEMedia(vet,4,ptrs,ptrm);

    printf("La somma vale %d\n",*ptrs);
    printf("La media vale %.2f",*ptrm);

    return 0;
}
