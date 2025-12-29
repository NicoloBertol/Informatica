#include <iostream>
#include "Ristorante.h"

using namespace std;

int main(){
    Ristorante r;
    int scelta, p, n;

    do{
        cout << "MENU" << endl;
        cout << "Assegna tavolo (1)" << endl;
        cout << "Libera tavolo (2)" << endl;
        cout << "Esci (0)" << endl;
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