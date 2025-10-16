//Utilizzando i puntatori e l'operatore di de-referenziazione scambia il valore di due variabili

#include <stdio.h>

int main(){
    int x = 3;
    int y = 2;
    int *ptrx = &x;
    int *ptry = &y;

    //funzione swap
    int tmp = *ptrx;
    *ptrx = *ptry;
    *ptry = tmp;

    printf("x uguale a %d\n",x);
    printf("y uguale a %d",y);

    return 0;
}