//Scrivere un programma che dato in input un numero intero n, scriva in output "PARI" se pari e "DISPARI" altrimenti

#include <stdio.h>

int main(){
    int n;
    printf("Inserisci unnumero itero: ");
    scanf("%d",&n);
    if(n%2<=0){
        printf("PARI");
    }
    else{
        printf("DISPARI");
    }

    return 0;
}