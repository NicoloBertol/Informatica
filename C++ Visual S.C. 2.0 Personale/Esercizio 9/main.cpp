/*Scrivere la classe Veicolo avente i seguenti attributi: marca, modello, velocità in km/h, stato del motore (acceso/spento).
Tutti gli attributi devono essere accessibili in lettura. 

La classe fornisce inoltre i seguenti metodi:
• accelera(d): aumenta la velocità del veicolo acceso di un valore d espresso in km/h (il valore può essere anche negativo).
Si suppone che il veicolo non possa superare la velocità di 200 km/h;
• frena(): arresta il veicolo in movimento;
• accendi() e spegni(): metodi impiegati per accendere e spegnere il veicolo (ogni metodo controlla lo stato del motore e la velocità
prima di eseguire la propria azione).

Scrivere un programma che, dopo aver inizializzato un oggetto di classe Veicolo, 
permetta attraverso un apposito menù di condurre l’autoveicolo (avvio e arresto del motore, azione su freno o acceleratore).
Nel menù devono inoltre essere presenti comandi per mostrare i singoli parametri del veicolo (la classe fornisce il metodo di accesso,
il main si occupa della stampa a video del valore).*/

#include <iostream>
#include "Veicolo.h"

using namespace std;

int main(){
    Veicolo v;
    
    int n,x;
    v.Veicolo();
    do{
        cout << "MENU': 0(Esci); 1(Avvio Motore); 2(Spegnimento Motore); 3(Accelleratore); 4(Freno); 5(Controlla Parametri)" << endl;
        cout << "Cosa vuoi fare? ";
        cin >> n;
        switch(n){
            case 1:
                v.accendi();
                break;
            case 2:
                v.spegni();
                break;
            case 3:
                cout << "Inserisci di quanto vuoi accellerare: ";
                cin >> x;
                v.accellera(x);
                break;
            case 4:
                v.frena();
            case 5:
                v.print();
            case 0:
                break;
        }
    }while(n==0);

    return 0;
}