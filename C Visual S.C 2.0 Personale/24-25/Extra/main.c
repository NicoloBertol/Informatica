/*Creare un programma che simula il gioco Carta-Forbici-Sasso (carta:= 1, forbici:= 2, sasso:=3)
contro il computer, utilizzando la generazione di numeri pseudo-casuali:

Esempio di esecuzione:

Scegli tra carta [1], forbici [2], sasso [3] : 2
Il computer ha lanciato carta!
Complimenti hai vinto!
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N,i,a;
    srand(time(0));
    for(int i = 0; i<1; i++)
    {
        N=rand()%3+1;
    }
    printf("Scegli tra carta [1], forbici [2], sasso [3]: ");
    scanf("%d",&a);

    if(a==N){
        printf("Nessuno ha vinto....Pareggio!");
    }
    if(N==1){
        if(a==2){
            printf("Hai vinto! Forbici battono Carta!");
        }
        if(a==3){
            printf("Hai perso! Carta batte Sasso!");
        }
    }
    if(N==2){
        if(a==3){
            printf("Hai vinto! Sasso batte Forbici!");
        }
        if(a==1){
            printf("Hai perso! Carta batte Sasso!");
        }
    }
    if(N==3){
        if(a==1){
            printf("Hai vinto! Carta batte Sasso!");
        }
        if(a==2){
            printf("Hai perso! Sasso batte Forbici!");
        }
    }
    
    
    
}