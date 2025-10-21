/*Scrivere un programma che legge da tastiera 5 numeri e stampa
*a video il maggiore tra essi, la loro media e la radice quadrata della
*somma.
*Si noti che per effettuare la radice quadrata esiste la funzione
*ouble sqrt (double) definita nella libreria: <math.h>
*/

#include <stdio.h>
#include <math.h>
#include <limits.h>
#define N 3

int main(){
    int i,numero,max=INT_MIN;
    float somma=0.0;
    i=0;
    do{
        printf("inserisci un valore: ");
        scanf("%d",&numero);

        if(max<numero)max=numero;
        somma=somma+numero;

        i++;
    }while(i<N);
    printf("il massimo vale: %d \n",max);
    printf("ila media vale: %.2f \n",somma/N);
    printf("la radice della somma: %.2f \n",sqrt(somma));

   

    return 0;
}
