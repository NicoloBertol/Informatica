/*Esercizio 2: dati due valori in input
 * sommarli e comunicare la  loro somma in output
 *
*/
#include<stdio.h>

int main(){
    //diarazione variabili
    int a;
    int b;
    int r;

    //acquisizione dell'imput
    printf("inserisci il primo valore: ");
    scanf("%d",&a);
    printf("inserisci il secondo valore: ");
    scanf("%d",&b);

    //elaborazione
    r=a+b;

    //output
    printf("Il risultato vale %d", r);

    return 0;
}