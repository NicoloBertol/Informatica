//creare un programma che prende in input una stringa da tastiera e restituisce a video la lunghezza della stringa.

#include <stdio.h>

int main(){
    char str [100];
    int i;
    printf("Inserisci la stringa: ");
    scanf("%s",str);
    i=0;
    while(str[i]!='\0'){
        i++;
    }
    printf("%d",i);
    return 0;
}