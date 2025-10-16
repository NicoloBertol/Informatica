//Crea una funzione che data in input una stringa, restituisce la lunghezza della stringa!

#include <stdio.h>

int calcolaLunghezzaStringa(const char *stringa){
    int i=0;

    while(*stringa!='\0'){
        i++;
        stringa++;
    }

    return i;
}

int main(){
    printf("la stringa e' lunga %d",calcolaLunghezzaStringa("Ciao"));

    return 0;
}