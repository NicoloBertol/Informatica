//Inserita un'età, dire se siamo in presenza di un maggiorenne o di un minorenne.

#include<stdio.h>
int main(){
    int a;
    printf("Inserisci la tua eta': ");
    scanf("%d",&a);
    if(a>=18){
        printf("Sei maggiorenne.");
    }
    else{
        printf("Sei minorenne");
    }
    return 0;
}