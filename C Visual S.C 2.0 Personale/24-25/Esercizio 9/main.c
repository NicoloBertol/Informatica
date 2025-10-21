//Implementare un programma che scrive in output i primi 100 numeri interi.

#include <stdio.h>

int main(){
    int n;
    n=1;
    while(n<=100){
        printf("%d\n",n);
        n=n+1;
    }
    return 0;
}