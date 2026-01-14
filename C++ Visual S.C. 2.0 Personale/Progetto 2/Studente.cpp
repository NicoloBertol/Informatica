#include <iostream>
#include <string>
#include "Studente.h"
#define N 50

using namespace std;

Studente::Studente(string n, string c, int i){
    nome = n;
    cognome = c;
    ID = i;
    for(int i=0;i<50;i++){          //setto tutte le celle dell'array voti a -1
        voti[i] = -1;
    }
}
void Studente::aggiungiVoto(float voto){
    int i = 0;
    if(voto >= 4 && voto <= 10){            //se il voto è compreso tra 4 e 10
        do{                                                          
            if(voti[i] == -1){           //se la cella dell'array contiene -1, vuol dire che la cella è vuota e si può inserire un valore
                voti[i] = voto;         //assegno il valore preso in ingresso
                cout << "Voto inserito correttamente." << endl;
                break;
            }
            i++;
        }while(i<N);            //finché i è minore di N = 50
    }
    else{
        cout << "Voto non valido. Inserire un voto tra 4 e 10." << endl;
    }
}
float Studente::calcolaMedia(){
    float somma = 0.0f;
    int count = 0;
    for (int i=0;i<N;i++) {         //scorro tutto l'array
        if(voti[i]!=-1){            //controllo solo le celle piene (!=-1)
            somma+=voti[i];         //sommo tutti i voti
            count++;            //aumentto un contatore che mi servirà da denominatore
        }
    }

    if (count == 0)            //se il contatore è uguale a 0, allora l'array è vuoto
        return 0.0f;

    return somma/count;
}
void Studente::mostraDati(){
    cout << "Nome: " << nome << endl;
    cout << "Cognome: " << cognome << endl;
    cout << "ID: " << ID << endl;
    cout << "Media voti: " << calcolaMedia() << endl;
}