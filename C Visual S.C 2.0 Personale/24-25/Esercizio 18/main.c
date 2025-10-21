//letto un numero intero positivo da tastiera, stampi in output il cubo del numero, facendo uso soltanto di operazioni di somma

#include <stdio.h>

int main(){
    int i,j,k,s=0,n;
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                s++;


    printf("Il cubo di %d e': %d",n,s);

    return 0;

}