//Creare una procedura che permette di stampare tutti gli elementi di un array passato come argomento (assieme alla sua taglia).

#include <stdio.h>
#define N 5

void stamparray(int array[], int t){
    for(int i=0;i<N;i++){
        printf("%d ",array[i]);
    }
}

int main(){
    int a[N]; 
    stamparray(a,N);
    return 0;
}