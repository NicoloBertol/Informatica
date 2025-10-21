#include <stdio.h>

float media(){
    float n, somma=0,m=0;

    for(int i=0;i<5;i++){
        printf("Inserisci l' altezza: ");
        scanf("%f",&n);
        somma=somma+n;
    }
    m=somma/5.0f;
    return m;
}

int main(){
    float a;
    a = media();
    printf("L'altezza media e': %.2f",a);

    return 0;
}
