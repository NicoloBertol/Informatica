
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"
#include <string>

using namespace std;

class ApplicationModel : public MVC::Model {
	public:
		ApplicationModel();
		void aggiornaDati();
		void inserisciVoto(float v);
		int getMedia();
};

#endif

