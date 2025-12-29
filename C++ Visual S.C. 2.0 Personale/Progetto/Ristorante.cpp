#include <iostream>
#include "Ristorante.h"

using namespace std;

Tavolo::Tavolo(){
    n_tavolo = 0;
    posti = 0;
    occupato = false;
}
Tavolo::Tavolo(int t, int p){
    n_tavolo = t;
    posti = p;
}
void Tavolo::occupa(){
    occupato = true;
}
void Tavolo::libera(){
    occupato = false;
}
int Tavolo::getPosti(){
    return posti;
}
int Tavolo::getNTavolo(){
    return n_tavolo;
}
bool Tavolo::Occupato(){
    return occupato;
}

Ristorante::Ristorante(){
    num_tavoli = 0;
}
void Ristorante::assegna(int p){
    for(int i=0; i<num_tavoli; i++){
        if(t[i].Occupato() == 0 && t[i].getPosti() >= p){
            t[i].occupa();
            cout << "Tavolo occupato" << endl;
        }
        else
            cout << "Nessun tavolo libero." << endl;
    }
}
void Ristorante::libera(int n_tavolo){
    for(int i=0; i<num_tavoli; i++){
        if(t[i].getNTavolo() == n_tavolo){
            t[i].libera();
        }
    }
}

int Ristorante::mostraTavoli(){
    
}