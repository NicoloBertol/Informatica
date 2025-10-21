#include <stdio.h>

void scrivi(){
    FILE * pf;
    int a;
    pf = fopen("documento.txt", "a");
    if(pf!=0){  
        printf("Inserisci un valore intero: ");
        scanf("%d",&a);
        fprintf(pf,"%d\t",a);
        fclose(pf);
    }
    else{
        printf("L'apertura non e' andata a buon fine.");
    }
}

void leggi(){
    FILE * pf;
    int a;
    pf = fopen("documento.txt", "r");
    if(pf!=0){  
        while(feof(pf)==0){
            fscanf(pf,"%d\t",a);
            printf("%d",a);
            }
        fclose(pf);
    }
    else{
        printf("L'apertura non e' andata a buon fine.");
    }
}

int main(){
    int scelta;
    do{
        printf("Digita [1] per scrivere, [2] per leggere tutto, [3] per uscire: ");
        scanf("%d",&scelta);

        switch (scelta){
            case 1: scrivi(); break;
            case 2: scrivi(); break;
            default: printf("Scelta errata");
        }
    }while(scelta!=3);


    return 0;
}