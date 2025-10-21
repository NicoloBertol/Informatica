//Dati dall'utente due numeri, calcolare la differenza tra il maggiore e il minore.

#include<stdio.h>

int main(){
    int a;
    int b;

    printf("Inserisci il primo valore; ");
    scanf("%d",&a);
    printf("Inserisci il secondo valore; ");
    scanf("%d",&b);
    if(a>b){
        printf("La differenza e' uguale a %d", a-b);
    }
    else{
        printf("La differenza e' uguale a %d", b-a);
    }

    return 0;
}