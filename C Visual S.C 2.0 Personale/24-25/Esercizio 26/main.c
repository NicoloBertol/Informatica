/*Creare una procedura che permette di inizializzare un array passato come argomento (assieme alla sua taglia) con tutti zeri. 
Inoltre testare la procedura nel main
*/

#include <stdio.h>
#define N 20

void initarray(int array[],int d){
    int i;
    for(i = 0; i < d; i++){
        array[i]=0;
    }
    
}
int main(){
    int a[N];
    initarray(a,N);
    for(int i=0;i<N;i++){
        printf("%d",a[i]);
    }
    return 0;
}
