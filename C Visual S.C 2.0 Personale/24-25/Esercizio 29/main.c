//Creare una procedura che permette di scambiare i valori di due variabili intere passate come argomenti.

#include <stdio.h>

void scambia(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
}

int main(){
    int d,e;
    printf("Inserisci un valore intero: ");
    scanf("%d",&d);
    printf("Inserisci un altro valore intero: ");
    scanf("%d",&e);
    scambia(d,e);
    
    return 0;
}