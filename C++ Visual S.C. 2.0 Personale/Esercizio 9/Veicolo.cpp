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

#include "Veicolo.h"
#include <iostream>

using namespace std;

Veicolo::Veicolo(){
    marca = "Fiat";
    modello = "Panda";
    velocita = 0;
    stato = false;
}

string Veicolo::getMarca(){
    return marca;
}
string Veicolo::getModello(){
    return modello;
}
int Veicolo::getVelocita(){
    return velocita;
}
bool Veicolo::getStato(){
    return stato;
}
void Veicolo::accellera(int d){
    velocita += d;
    if(velocita > 200){
        velocita = 200;
    }
}
void Veicolo::frena(){
    velocita = 0;
}
void Veicolo::accendi(){
    if(stato == false && velocita == 0){
        stato = true;
        cout << "Veicolo acceso." << endl;
    }
}
void Veicolo::spegni(){
    if(stato == true && velocita == 0){
        stato = false;
        cout << "Veicolo spento." << endl;
    }
}

void Veicolo::print(){
    cout << "Marca: " << marca << endl;
    cout << "Modello: " << modello << endl;
    cout << "Velocita': " << velocita << endl;
    cout << "Stato: " << stato << endl;
}