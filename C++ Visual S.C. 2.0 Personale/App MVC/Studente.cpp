#include "Studente.h"
#define N 100
using namespace std;

Studente::Studente(){
    nome = "Nicolo'";
    cognome = "Bertol";
    matricola = "P6648";
    classe = "4INTA";
}
void Studente::setNome(string n){
    nome = n;
}
string Studente::getNome(){
    return nome;
}
void Studente::setCognome(string c){
    cognome = c;
}
string Studente::getCognome(){
    return cognome;
}
void Studente::setMatricola(string m){
    matricola = m;
}
string Studente::getMatricola(){
    return matricola;
}
void Studente::setClasse(string cl){
    classe = cl;
}
string Studente::getClasse(){
    return classe;
}
/*
void Studente::inserisciVoto(float v){
    int i=0;
	do{                                                          
		if(voti[i] == -1){           //se la cella dell'array contiene -1, vuol dire che la cella è vuota e si può inserire un valore
			voti[i] = v;         //assegno il valore preso in ingresso
			break;
		}
		i++;
	}while(i<N);
}
float Studente::getMedia(){
    float somma = 0.0f;
	int count = 0;
	for (int i=0;i<N;i++){         //scorro tutto l'array
		if(voti[i]!=-1){            //controllo solo le celle piene (!=-1)
			somma+=voti[i];         //sommo tutti i voti
			count++;            //aumentto un contatore che mi servirà da denominatore
		}
	}

	if (count == 0)            //se il contatore è uguale a 0, allora l'array è vuoto
		return 0.0f;

	return somma/count;
}*/