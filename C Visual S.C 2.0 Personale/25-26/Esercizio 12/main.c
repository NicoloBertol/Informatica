/*Scrivere una funzione che, dato un intero passato come argomento,
allochi e restituisca una stringa di caratteri della dimensione specificata.*/

#include <stdio.h>
#include <stdlib.h>

char* allocaStringa(int n){
    char *vet;
    vet = (char*) malloc(n*sizeof(char));

    printf("Inserisci una stringa lunga %d caratteri: ", n);
    scanf("%s",vet);
    
    return vet;
}

int main(){
    int d = 10;
    char *str = allocaStringa(d);
    
    printf("\n%s",str);

    return 0;
}