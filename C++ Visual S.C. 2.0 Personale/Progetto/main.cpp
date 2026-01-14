#include <iostream>
#include "Ristorante.h"

using namespace std;

int main(){
    Ristorante r;
    int scelta, p, n, x;
    
    do{
        cout << "MENU': Assegna tavolo (1); Libera tavolo (2) Esci (0)" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        switch(scelta){
            case 1:
                cout << "Inserisci il numero di persone: ";
                cin >> p;
                r.assegna(p);
                break;
            case 2:
                cout << "Inserisci il numero del tavolo da liberare: ";
                cin >> n;
                r.libera(n);
                break;
            case 0:
                break;
        }
    }while(scelta !=0);

    return 0;
}