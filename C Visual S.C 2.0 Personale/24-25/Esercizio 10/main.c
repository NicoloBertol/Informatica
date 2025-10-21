//Implementare un programma che dato in input un numero intero n, scriva in output i primi n numeri a partire da zero

#include<stdio.h>

int main(){

    int i;
    int n;
    i=1;
    printf("Inserisci un numero intero: ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}