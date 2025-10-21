/*
 * Input: due numeri interi acquisiti da tastiera
 * Output: il minore (il più piccolo) tra i due valori dati in input
 *
*/
#include<stdio.h>
int main(){
    
    int a;
    int b;

    printf("inserisci il primo valore: ");
    scanf("%d",&a);
    printf("inserisci il secondo valore: ");
    scanf("%d",&b);

    if(a<b){
        printf("Il numero minore e' %d",a);
    }
    else{
         printf("Il numero minore e' %d",b);
    }

    return 0;
 }