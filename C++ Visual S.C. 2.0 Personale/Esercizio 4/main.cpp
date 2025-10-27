/*Si crei una classe Cerchio per memorizzare Cerchi e calcolarne circonferenza e area.
Creare poi un programma che sfruttando la classe scriva le circonferenze e le aree di 5 cerchi,
il primo con raggio 1, il secondo con raggio 2 e così via.*/

#include <iostream>
#include "Cerchio.h"

using namespace std;

int main(){
    Cerchio c[5];
    for(int i=0;i<5;i++){
        c[i].setRaggio(i+1);
    }

    for(int i=0;i<5;i++){
        cout << "Il cerchio con raggio: " << c[i].getRaggio();
        cout << "\nLa circonferenza e' "  << c[i].circonferenza();
        cout << " e l'area e' " << c[i].area() << "." << endl;
    }
    return 0;
}