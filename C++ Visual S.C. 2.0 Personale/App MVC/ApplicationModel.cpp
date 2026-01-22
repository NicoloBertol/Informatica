//#include "StdAfx.h"
#include "ApplicationModel.h"
#include "Studente.h"
#include <string>
#define N 100

using namespace std;

ApplicationModel::ApplicationModel():Model(){
	for(int i=0;i<100;i++){          //setto tutte le celle dell'array voti a -1
		voti[i] = -1;
	}
}
void ApplicationModel::aggiornaDati(Studente s︃){
	
	notify();//""quando cambia lo stato dell'applicazione"", il View e il Controller vanno aggiornati!!!
	//per invocare update() del View e e del Controller
}

//quando cambia lo stato dell'applicazione, il View va aggiornato
void ApplicationModel::inserisciVoto(float v){
	int i=0;
	do{                                                          
		if(voti[i] == -1){           //se la cella dell'array contiene -1, vuol dire che la cella è vuota e si può inserire un valore
			voti[i] = v;         //assegno il valore preso in ingresso
			break;
		}
		i++;
	}while(i<N);

	notify();//""quando cambia lo stato dell'applicazione"", il View e il Controller vanno aggiornati!!!
				//per invocare update() del View e e del Controller
}

//semplice funzione che restituisce il valore
int ApplicationModel::getMedia(){
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
}