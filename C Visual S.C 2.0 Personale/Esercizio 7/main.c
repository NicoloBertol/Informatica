/*Dato il seguente prototipo:
void stampaArray(int *array, int dimensione);
implementa una procedura che stampa tutti gli elementi dell'array*/

#include <stdio.h>

void stampaArray(int *array, int dimensione){
    for(int i=0;i<dimensione;i++){
        printf("%d\n",array[i]);
    }
}

int main(){
    int vet[] = {1,2,3,4};
    stampaArray(vet,4);

    return 0;
}
