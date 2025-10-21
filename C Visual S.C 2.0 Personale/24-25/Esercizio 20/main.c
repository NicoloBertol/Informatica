/*Creare un programma che permette all'utente di giocare a testa o croce
Esempio di esecuzione:
Digita 1 per testa, 2 per croce: 1
Mi dispiace hai perso, il computer ha lanciato testa
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int N,i,a;
    srand(time(0));
    for(int i = 0; i<1; i++)
    {
        N=rand()%2+1;

    
    }
    printf("Inserisci 1 per testa, 2 per croce: ");
    scanf("%d",&a);
    if(a==N){
        if(a==1){
            printf("Hai vinto. E' uscito testa!");
        }
        if(a==2){
            printf("Hai vinto. E' uscito croce!");
        }
    }
    else{
        if(N==1){
            printf("Hai perso. E' uscito testa!");
        }
        if(N==2){
            printf("Hai perso. E' uscito croce!");
        }
    }


    return 0;
}