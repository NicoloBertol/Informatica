/*Si crei una classe scarpe con gli strectch (linguette adesive col feltro);
ogni paio di scarpe è caratterizzato dalla dimensione (data da un numero intero) e ha tre stretch sulla scarpa destra e tre sulla scarpa sinistra.
Creare due paia di scarpe con gli stretch e per 10 volte estrarre casualmente su quale paio di scarpe cambiare da allacciato a slacciato uno degli stretch
(scelto casualmente) di una delle due scarpe scelta sempre casualmente.
Dopo aver fatto aprire e chiudere per le 10 volte gli stretch,
stampare la situazione finale delle scarpe; si consideri che inizialmente tutti gli stretch sono slacciati.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "scarpe.h"

using namespace std;

int main(){
    srand(time(NULL));
    Scarpe s1(39);
    Scarpe s2(45);
    int n = rand()%2;
    
    for(int i=0;i<10;i++){
        if(rand()%2 == 0){
            if(rand()%3 != 0 && rand()%3 == 1){      
                s1.cambiaStretchScarpaSx(n);
            }
            else if(rand()%3 == 2){
                s1.cambiaStretchScarpaDx(n);
            }
        }
        else{
            if(rand()%2 != 0 && rand()%3 == 1){      
                s2.cambiaStretchScarpaSx(n);
            }
            else if(rand()%3 == 2){
                s2.cambiaStretchScarpaDx(n);
            }  
        } 
    }

    s1.stampa();
    s2.stampa();

    return 0;
}