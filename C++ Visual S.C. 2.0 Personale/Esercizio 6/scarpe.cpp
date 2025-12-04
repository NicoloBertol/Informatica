#include "scarpe.h"
#include <iostream>

using namespace std;

Scarpe::Scarpe(int dim){
    dimensione = dim;
    for(int i=0;i<3;i++){
        strdx[i] = false;
        strsx[i] = false; 
    }   
}
void Scarpe::cambiaStretchScarpaSx(int n){
    if(n>=0 && n<=2)
        strsx[n]=!strsx[n];
}
void Scarpe::cambiaStretchScarpaDx(int n){
    if(n>=0 && n<=2)
        strdx[n]=!strdx[n];
}
void Scarpe::stampa(){  
    cout << "Scarpe (dimensione: " << dimensione << ")" << endl;
    cout << "Destra: ";
    for(int i=0;i<3;i++){
        cout << (strdx[i] ? "[chiuso]" : "[aperto]");
    }
    cout << "\n Sinistra: ";
    for(int i=0;i<3;i++){
        cout << (strsx[i] ? "[chiuso]" : "[aperto]");
    }
    cout << "\n";
}