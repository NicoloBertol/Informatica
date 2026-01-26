
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"
#include <string>
#include "Studente.h"

using namespace std;

class ApplicationModel : public MVC::Model {
	public:
		ApplicationModel();
		void aggiornaDati(Studente s);
		//void inserisciVoto(float v);
		//int getMedia();
};

#endif

