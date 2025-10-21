/*implementare un programma che, acquisito un vettore di N numeri interi pseudo-casuali, ricavi il vettore inverso e lo stampi a video.

Esempio: 
N=6
Vet[1, 4, 5, 2, 3, 6]
VetInverso[ 6, 3, 2, 5, 4, 1]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N,i,array[100],n;
    printf("Quanti numeri vuoi inserire (max 100): ");
    scanf("%d",&n);
    srand(time(0));
    for(i = 0; i<n; i++)
    {
        array[i]=1+rand()%100;
    }
    for(i=n-1;i>=0;i--){
        printf("%d\n",array[i]);
    }

return 0;


}
