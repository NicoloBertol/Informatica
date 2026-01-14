#include <iostream>
#include <string>
#include "Studente.h"

using namespace std;

int main(){
    string n,c;
    float v = 0.0f;
    int ID, scelta;
    cout << "Inserisci i tuoi dati: " << endl;
    cout << "Nome: ";
    cin >> n, "\n";
    cout << "Cognome: ";
    cin >> c, "\n";
    cout << "Numero matricola: ";
    cin >> ID;

    Studente s(n,c,ID);

    do{
        cout << "MENU: Visualizza dati (1); Aggiungi voto (2); Calcola media (3); Esci (0)";
        cout << "Scelta: ";
        cin >> scelta;
        switch(scelta){
            case 1:
                s.mostraDati();
                break;
            case 2:
                cout << "Inserire il voto: ";
                cin >> v;
                s.aggiungiVoto(v);
                break;
            case 3:
                cout << "La media dei voti e' " << s.calcolaMedia() << endl;
                break;
            case 0:
                break;
        }
    }while(scelta!=0);
    
    return 0;
}