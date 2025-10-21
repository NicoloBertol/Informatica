//Scrivere un programma che dato in input n, scriva in output i primi 10 numeri pari successivi ad n

#include <stdio.h>

int main() {
  int n;
  int i;
  printf("Inserisci un numero intero: ");
  scanf("%d",&n);
  i=n+1;
  while(i<=n+20){
    if(i%2==0){
    printf("%d\n",i);
    i=i+1;
    }
    else{
      i=i+1;
    }
  }
  return 0;
}