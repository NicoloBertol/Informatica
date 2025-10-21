/*
Creare un programma che prende in input N numeri inseriti da tastiera e li stampa in output in ordine inverso rispetto a quello di acquisizione:

Esempio:
Quanti numeri vuoi inserire:
3
Inserisci un numero:
42
Inserisci un numero:
8
Inserisci un numero:
9
L'output è: 9, 8, 42
*/

#include <stdio.h>

int main(){

    int array[100],i,n;
    printf("Quanti numeri vuoi inserire (max 100): ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Inserisci un numero: ");
        scanf("%d",&array[i]);
    }
    for(i=n-1;i>=0;i--)
        printf(" %d \n",array[i]);

    return 0;
}