/*Dato il seguente prototipo: 
void copiaStringa(const char *sorgente, char *destinazione);
Copia la stringa sorgente nella stringa destinazione utilizzando i puntatori*/

#include <stdio.h>

void copiaStringa(const char *sorgente, char *destinazione){
    int i=0;

    while(sorgente[i]!='\0'){
        i++;
    }

    
    for(int j=0;j<=i;j++){
        destinazione[j]=sorgente[j];
    }
    
    printf("valore: %s\n",destinazione);
}

int main(){
    char vet[] = "ciao";
    char vet1[5];
    copiaStringa(vet,vet1);

    printf("valore: %s\n",vet1);
    
    return 0;
}