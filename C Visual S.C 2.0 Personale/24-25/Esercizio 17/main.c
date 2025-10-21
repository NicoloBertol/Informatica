//Chiedere 2 numeri interi (a, b) e disegnare un rettangolo di
//dimensioni a*b usando il carattere " * ".

#include <stdio.h>

int main() {
    int larghezza, altezza,i,j;

    printf("Inserisci la larghezza del rettangolo: ");
    scanf("%d", &larghezza);
    printf("Inserisci l'altezza del rettangolo: ");
    scanf("%d", &altezza);

    for(i = 0; i < altezza; i++) {
        for(j = 0; j < larghezza; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}