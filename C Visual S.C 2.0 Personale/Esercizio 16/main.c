/*Definire una struct casa per memorizzare i dati delle case da parte di un’agenzia immobiliare,
ogni casa è caratterizzata da un numero intero di metri quadri, dalla classe energetica
(definita da una lettera, dove la A rappresenta la casa a minor consumo energetico la F quella a maggior consumo) e dal costo in migliaia di euro.
Chiedere all’utente i dati di tre case e poi dire qual è quella col minor costo al metro quadro e quella con la migliore classe energetica
(in caso di parità di livello di classe energetica si riporti quella più grande).*/

#include <stdio.h>

struct casa{
    int metriq;
    char classe;
    double costo;
};

void calcolacosto(double costomedio){
    if(costomedio[0]>costomedio[1]){
        if(costomedio[2]>costomedio[1]){
            x = costomedio[1];
            printf("La casa con il costo piu' piccolo e' la numero 2.");
        }
        else{
            x = costomedio[2];
            printf("La casa con il costo piu' piccolo e' la numero 3.");
        }
    }
    else{
        if(costomdeio[0]<costomedio[2]){
            x = costomedio[0];
            printf("La casa con il costo piu' piccolo e' la numero 1.");
        }
        else{
            x = costomedio[2];
            printf("La casa con il costo piu' piccolo e' la numero 3");
        }
    }
}

int main(){
    struct casa c[3];
    double costomedio[3];
    double x=0;
    for(int i=0;i<3;i++){
        printf("Inserisci i metri quadri della casa numero %d: \n",i+1);
        scanf("%d",&c[i].metriq);

        printf("Inserisci la classe energetica (A-F) della casa numero %d: \n",i+1);
        scanf("%c",&c[i].classe);

        printf("Inserisci il costo della casa numero %d: \n",i+1);
        scanf("%lf",&c[i].costo);

        costomedio[i] = c[i].costo / c[i].metriq;
    }

    calcolacosto = (costomdeio);
    
    if()

    return 0;
}