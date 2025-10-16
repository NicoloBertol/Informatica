//Creare un array di float di dimensione specificata dall'utente.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *vet;
    int n;
    printf("Inserisci la taglia dell'array: ");
    scanf("%d",&n);
    vet = (float*) malloc(n*sizeof(float));

    for(int i=0;i<n;i++){
        vet[i]=2.4;
    }
    for(int i=0;i<n;i++){
        printf("%.2f\n",vet[i]);
    }

    return 0;
}