/*Dati i km percorsi da un treno e il prezzo al chilometro espresso in euro,
* calcolare il prezzo del biglietto.
*/
#include<stdio.h>

int main(){

    float km;
    float pz;
    float pzb;
    printf("Inserisci il numero di kilometri percorsi: ");
    scanf("%f",&km);
    printf("Inserisci il prezzo al kilometro (in euro): ");
    scanf("%f",&pz);
    pzb=km*pz;
    printf("Il prezzo del biglietto e' pari a %.2f",pzb,"euro.");

    return 0;
}