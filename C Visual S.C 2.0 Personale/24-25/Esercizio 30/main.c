//Implementare una funzione che calcola e restituisce il massimo comune divisore tra due numeri passati come argomento.

#include <stdio.h>

int MCD(int a,int b){
    int r=0,i,mcd;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    int c,d,e;
    printf("Inserisci un numero: ");
    scanf("%d",&c);
    printf("Inserisci un altro numero: ");
    scanf("%d",&d);
    e=MCD(c,d);
    printf("%d",e);
    return 0;
}