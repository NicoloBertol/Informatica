
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"
#include "Studente.h"
#include "Valutazione.h"

using namespace std;

class ApplicationModel : public MVC::Model {
	public:
		ApplicationModel();
		void aggiornaDati(Studente s);
		void aggiornaVoti(Valutazione v);
		//int getMedia();
};

#endif

