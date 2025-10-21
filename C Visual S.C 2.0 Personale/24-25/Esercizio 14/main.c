/*Inserire un'età, dire se siamo in presenza di un maggiorenne o di un minorenne;
*controllare eventuali errori di inserimento da parte dell'utente. (l'intervallo accettato è da 0 anni a 120 anni).
*/
#include<stdio.h>

int main(){
    int a;
    printf("Inserisci la tua eta': ");
    scanf("%d",&a);
    while(a>120){
        printf("Reinserisci la tua eta': ");
        scanf("%d",&a);
    }
        if(a>=18){
            printf("Sei maggiorenne.");
        }
        else{
            printf("Sei minorenne");
        }
    
    return 0;
}