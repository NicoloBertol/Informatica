/*Creare una funzione che permette di acquisire un valore intero da tastiera 
e lo restituisce come valore di ritorno (la funzione avrà zero parametri).
Inoltre testare la funzione nel main
*/

#include <stdio.h>

int acquisisciValore(){
    int n;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    return n;
}
int main(){
    int a;
    a=acquisisciValore();
    printf("%d",a);
    return 0;
}