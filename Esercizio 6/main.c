/*Dato il seguente prototipo:
void raddoppiaElementiArray(int *array, int dimensione);
Raddoppiare gli elementi dell'array utilizzando i puntatori.*/

#include <stdio.h>

void raddoppiaElementiArray(int *array, int dimensione){
    for(int i=0;i<dimensione;i++){
        array[i]=array[i]*2;
    }
     
}

int main(){
    int vet[]={1,2,3,4};
    raddoppiaElementiArray(vet,4);

    for(int i=0;i<4;i++){
        printf("%d\n",vet[i]);
    }

    return 0;
}
