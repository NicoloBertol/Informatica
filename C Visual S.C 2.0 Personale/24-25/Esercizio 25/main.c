/*Creare una procedura che permette di acquisire un valore intero da tastiera e lo carica nella variabile passata come argomento
Inoltre testare la procedura nel main
*/

#include <stdio.h>

void acquisisciValore(int* val){
    printf("Inserisci un valore: ");
    scanf("%d",val);
}
int main(){
    int n=0;
    acquisisciValore(&n);
    printf("Il valore inserito vale: %d",n);
    return 0;
}
