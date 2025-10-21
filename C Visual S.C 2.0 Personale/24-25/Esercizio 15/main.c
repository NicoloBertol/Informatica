//Scrivere un programma che, letti tre numeri, li metta in ordine crescente (dal più piccolo al più grande).

#include <stdio.h>

int main(){
    int a,b,c,max,min,d;
    printf("Inserisci il primo numero: ");
    scanf("%d",&a);
    printf("Inserisci il secondo numero: ");
    scanf("%d",&b);
    printf("Inserisci il terzo numero: ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            if(b>c){
                printf("L'ordine dei tre numeri e': %d %d %d",c,b,a);
            }
            else{
                printf("L'ordine dei tre numeri e': %d %d %d",b,c,a);
            }
        }
        else{
            printf("L'ordine dei tre numeri e': %d %d %d",b,a,c);
        }    
    }
    else{
        if(a<c){
            if(b<c){
                printf("L'ordine dei tre numeri e': %d %d %d",a,b,c);
            }
            else{
                printf("L'ordine dei tre numeri e': %d %d %d",a,c,b);
            }
        } 
        else{
            if(b>c){
                printf("L'ordine dei tre numeri e': %d %d %d",c,a,b);
            }
        }
          
    }

    return 0;
}
