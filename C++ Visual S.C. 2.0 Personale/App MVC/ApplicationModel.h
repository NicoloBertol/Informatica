
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"
#include <string>

using namespace std;

class ApplicationModel : public MVC::Model { 
	string nome;
	string cognome;
	string matricola;
	float voti[100];
	string classe;
public:
	ApplicationModel();
	void inserisciDati(string n, string c, string m, string cl);
	void inserisciVoto(float v);
	int getMedia();

	
};

#endif

