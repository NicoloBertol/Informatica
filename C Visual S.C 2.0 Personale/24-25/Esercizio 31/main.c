/*Realizzare una funzione chiamata "minimo" che trova e restituisce il valore
più piccolo presente in un array passato come argomento insieme alla sua taglia
*/

#include <stdio.h>
#define N 10

int minimo(int vet[],int t){
    int i,m=vet[0];
    for(i=0;i<t;i++){
        printf("%d ",vet[i]);
        if(vet[i]<m){
            m=vet[i];
        }
    }
    return m;
}

int main(){
    int v[N],r;
    r=minimo(v,N);
    printf("\nIl minimo e': %d\n",r);
    return 0;
}