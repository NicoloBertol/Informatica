/*Scrivere una funzione che, dati in input n è m allochi la memoria per una matrice nxm (n=righe e m=colonne)
e ne restituisca il contenuto in un puntatore a puntatore.*/

#include <stdio.h>
#include <stdlib.h>

int **matrice(int n, int m){
    int **ptr = (int**) malloc(sizeof(int*)*n); 
    
    for(int i=0;i<n;i++)
        ptr[i] = (int*) malloc(m*sizeof(int));

    return ptr;
}

int main(){
    
    int x, y;

    printf("Inserisci il numero di righe: ");
    scanf("%d", &x);
    printf("Inserisci il numero di colonne: ");
    scanf("%d", &y);

    int **mat = matrice(x,y);

    printf("Inserisci i valori della matrice:\n");
    for(int i=0; i<x;i++){
        for(int j=0;j<y;j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nLa matrice inserita e':\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}