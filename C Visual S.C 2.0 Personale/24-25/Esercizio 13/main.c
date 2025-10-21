/*Una nuova compagnia telefonica ha promosso l'offerta "Oltre80": 
*alla cifra fissa di 0,10 euro (costo alla risposta) occorre aggiungere la cifra di 0,15 euro
*per ogni secondo del tempo della telefonata; però oltre gli 80 secondi la tariffa per ogni secondo è di 0,09.
*Fornito da tastiera il numero dei secondi della telefonata, visualizzare il costo totale della chiamata.
*/

#include <stdio.h>
int main(){
    float s;
    float e;
    float t;
    printf("Inserisci il numero di secondi della chiamata: ");
    scanf("%f",&s);
    if(s<=80.0f){
        e=0.10f+(s*0.15f);
        printf("Il costo della chiamata e' %.2f euro.",e);
    }
    else{
        t=s-80;
        e=0.10f+(80*0.15f)+(t*0.09f);
        printf("Il costo della chiamata e' %.2f euro.",e);
    }
    return 0;
}