/*
Scrivere la classe Veicolo avente i seguenti attributi: marca, modello, velocità in km/h,
stato del motore (acceso/spento). Tutti gli attributi devono essere accessibili in lettura.

La classe fornisce inoltre i seguenti metodi:
• accelera(d): aumenta la velocità del veicolo acceso di un valore d espresso in km/h (il valore può essere anche negativo).
Si suppone che il veicolo non possa superare la velocità di 200 km/h;
• frena(): arresta il veicolo in movimento;
• accendi() e spegni(): metodi impiegati per accendere e spegnere il veicolo (ogni metodo controlla lo stato del motore e
la velocità prima di eseguire la propria azione).

Scrivere un programma che, dopo aver inizializzato un oggetto di classe Veicolo,
permetta attraverso un apposito menù di condurre l’autoveicolo (avvio e arresto del motore, azione su freno o acceleratore).
Nel menù devono inoltre essere presenti comandi per mostrare i singoli parametri del veicolo
(la classe fornisce il metodo di accesso, il main si occupa della stampa a video del valore).
*/

#include "Veicolo.h"
#include <string.h>
#include <iostream>
using namespace std;

int main(){
    Veicolo v;
    int d,scelta;
    do{
        cout << "Menu' 1)Accendi; 2)Spegni; 3)Accelera; 4)Frena; 5)Mostra parametri; 0)Esci" << endl;
        cout << "Cosa scegli?" << endl;
        cin >> scelta;
        switch(scelta){
            case 1:
                cout << v.accendi() << endl;
                break;
            case 2:
                cout << v.spegni() << endl;
                break;
            case 3:
                cout << "Di quanto vuoi accelerare?" << endl;
                cin >> d;
                cout << v.accellera(d) << endl;
                break;
            case 4:
                cout << v.frena() << endl;
                break;
            case 5:
                cout << v.mostraParametri() << endl;
                break;
            case 0:
                break;
        }
    }while(scelta!=0);
    
    return 0;
}