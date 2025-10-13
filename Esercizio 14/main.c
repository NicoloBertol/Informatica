/*Si crei la struttura libro, in cui ogni libro ha un codice numerico (numero intero) che lo caratterizza,
un numero di pagine e un costo. Si memorizzino i dati di tre libri e si calcoli il costo medio per pagina dei libri
e si stampino i dati dei tre libri in ordine crescente di costo per pagina.*/

#include <stdio.h>

struct libro{
    int ID;
    int numpag;
    double costo;
};

void scambia(double* a, double* b){
    double tmp =*a;
    *a=*b;
    *b = tmp;

}

void selectionSort(double vet[],int t){
    int i,j,pos_min;
    for(i=0;i<t-1;i++){
        pos_min=i;
        for(j=i+1;j<t;j++){
            if(vet[j]<vet[pos_min]){
                pos_min=j;
            }
        }
        scambia(&vet[i],&vet[pos_min]);
    }
}

int main(){
    struct libro l[3];
    double cm1=0,cm2=0,cm3=0;
    double vet[3];
    for(int i=0;i<3;i++){
        printf("Inserisci il codice del  %d libro: ", i+1);
        scanf("%d",&l[i].ID);
        
        printf("\nInserisci il numero di pagine del %d libro: ", i+1);
        scanf("%d",&l[i].numpag);
        
        printf("\nInserisci il costo del %d libro: ", i+1);
        scanf("%lf",&l[i].costo);
    }
    cm1 = l[0].costo/ (double) l[0].numpag;
    cm2 = l[1].costo/ (double) l[1].numpag;
    cm3 = l[2].costo/ (double) l[2].numpag;

    vet[0] = cm1;
    vet[1] = cm2;
    vet[2] = cm3;
    selectionSort(vet,3);

    for(int i=0;i<3;i++){
        printf("%.2f\n",vet[i]);
    }

    return 0;
}
