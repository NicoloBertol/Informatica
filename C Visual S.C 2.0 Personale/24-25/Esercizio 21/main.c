/*Creare un programma che permette all'utente di giocare a dadi:
Esempio di esecuzione:
Digita un numero tra 1 e 6: 3
Mi dispiace hai perso, il computer ha lanciato il dado ed è uscito 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N,i,a;
    srand(time(0));
    for(int i = 0; i<1; i++)
    {
        N=rand()%6+1;
    }
    printf("Inserisci un numero da 1 a 6: ");
    scanf("%d",&a);

    if(a==N){
        printf("Hai vinto! Il computer ha tirato il dado ed e' uscito %d.",N);
    }
    else{
        printf("Hai perso! Il computer ha tirato il dado ed e' uscito %d.",N);
    }
    return 0;
}