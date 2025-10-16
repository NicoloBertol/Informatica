/*Si definisca una struct tavolo per memorizzare i tavoli prodotti da un artigiano;
per ogni tavolo si memorizzino il numero massimo di persone che possono sedere intorno ad esso, le dimensioni 
(altezza da terra, lunghezza e larghezza del piano) in metri.
Si memorizzino i dati di quattro tavoli e si dica il numero totali di posti tra i quattro tavoli
e la superficie di tavolo media a persona per ognuno dei quattro tavoli
e quella media a persona in totale tra i quattro tavoli.*/

#include <stdio.h>

struct Tavolo{
    int maxpersone;
    double h;
    double lun;
    double larg;
};

int main(){
    struct Tavolo t[3];
    int totpersone;
    double smp[3];
    double sup[3];
    double mediapers=0;
    double somma=0;
    double mediasup=0;
    double mediatot = 0;

    for(int i=0;i<4;i++){
        printf("Inserisci il numero massimo di persone per il tavolo numero %d: \n",i+1);
        scanf("%d",&t[i].maxpersone);

        printf("Inserisci l'altezza da terra del tavolo numero %d: \n",i+1);
        scanf("%lf",&t[i].h);

        printf("Inserisci la lunghezza del tavolo numero %d: \n",i+1);
        scanf("%lf",&t[i].lun);

        printf("Inserisci la larghezza del tavvolo numero %d: \n",i+1);
        scanf("%lf",&t[i].larg);
    }

    //calcolo superficie media per persona
    for(int i=0;i<4;i++){
        smp[i] = (t[i].lun*t[i].larg)/t[i].maxpersone;
        printf("La superficie media per persona sul tavolo %d e' %.2f metri quadrati.\n",i+1,smp[i]);
    }
    //calcolo media superficie per tavolo
    for(int i=0;i<4;i++){
        sup[i] = t[i].lun/t[i].larg;
        somma+=sup[i];
    }
    mediasup = somma/4;
    //calcolo media persone per tavolo
    for(int i=0;i<4;i++){
        mediapers = t[i].maxpersone/4;
    }
    //calcolo superficie media per persona su totale tavoli
    mediatot = mediasup/mediapers;

    printf("La superficie media per persona sul totale dei 4 tavoli e' %.2f metri quadrati.",mediatot);

    return 0;
}