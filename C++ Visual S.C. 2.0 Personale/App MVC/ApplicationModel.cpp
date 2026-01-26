//#include "StdAfx.h"
#include "ApplicationModel.h"
#include "Studente.h"
#include <string>
#define N 100

using namespace std;

ApplicationModel::ApplicationModel():Model(){
	
}
void ApplicationModel::aggiornaDati(Studente s){
	
	notify();//""quando cambia lo stato dell'applicazione"", il View e il Controller vanno aggiornati!!!
	//per invocare update() del View e e del Controller
}

//quando cambia lo stato dell'applicazione, il View va aggiornato
/*void ApplicationModel::aggiornaVoti(Studente s){
	
	notify();//""quando cambia lo stato dell'applicazione"", il View e il Controller vanno aggiornati!!!
				//per invocare update() del View e e del Controller
}*/

//semplice funzione che restituisce il valore
/*int ApplicationModel::getMedia(){
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