//Dato il lato trovare il perimetro e l'area di un quadrato

#include<stdio.h>

int main(){
    int num_lato;
    int per;
    int area;
    printf("Inserisci il valore del lato del quadrato: ");
    scanf("%d",&num_lato);
    per=num_lato*4;
    area=num_lato*num_lato;
    printf("Il perimetro del quadrato e' pari a %d\n",per);
    printf("L'area del quadrato e' pari a %d\n",area);

return 0;
}