/*Creare una procedura che permette di inizializzare un array passato come argomento (assieme alla sua taglia) 
con tutti valori pseudo-casuali compresi nell'intervallo 0,...,m (anche m passato come argomento).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void initarray(int array[],int t,int m){
    int i;
    srand(time(NULL));
    for(i=0;i<t;i++){
        array[i]=rand()%m+1;
    }
}

int main(){

    int a[N],g=0;
    printf("Inserisci l'intervallo che va da 0 a ");
    scanf("%d",&g);
    initarray(a,N,g);

    for(int i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    return 0;
}