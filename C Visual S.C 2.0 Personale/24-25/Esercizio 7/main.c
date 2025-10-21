//Dati in input A,B e C dire se B è compreso tra A e C; in pratica si controlla se B appartiene all'intervallo [A,C].

#include<stdio.h>
int main(){
    int a,b,c;    
    printf("Inserisci i valore di A, B e C:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(b>=a){
        if(b<=c){
            printf("%d e' compreso tra %d e %d",b,a,c);
        }
        else{
            printf("%d e' compreso tra %d e %d",b,a,c);
    }
    }
    else{
        printf("%d e' compreso tra %d e %d",b,a,c);
    }
    return 0;
}