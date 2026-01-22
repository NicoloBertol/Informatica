//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>
ApplicationView::ApplicationView(ApplicationModel *m):
	View(m)
{}

//overriding della funzione MVC::View::draw()
void ApplicationView::draw()
{
	system("cls");
	std::cout << std::endl;

/*	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << "  ID VIEW:"<< this << std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
*/
	std::cout << "  ------------------------------------------------------------------------------ " << std::endl;
	std::cout << " |                   		   Gestore Studente                     	|" <<std::endl;
	std::cout << "  ------------------------------------------------------------------------------ " << std::endl;
	std::cout << " | COMANDI:   [0]Esci - [1]Inserisci dati - [2]Aggiungi voto - [3]Calcola media |"<<std::endl;
	std::cout << "  ------------------------------------------------------------------------------ " << std::endl;
	/*std::cout << "  -------------- " << std::endl;
	std::cout << " | VALORE: " <<  ((ApplicationModel*)model)->getValue() <<"\t|" <<std::endl;
	std::cout << "  -------------- " << std::endl;*/
	std::cout << "  ------------------------------------------------------------------------------ " << std::endl;
	std::cout << " | INSERIRE il comando scelto: ";


}

Studente ApplicationView::acquisisciStudente(){
	string n, c, m, cl;

	cout << "Nome: ";
	cin >> n,"\n";
	cout << "Cognome: ";
	cin >> c,"\n";
	cout << "Numero Matricola: ";
	cin >> m,"\n";
	cout << "Classe: ";
	cin >> cl,"\n";
}
//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

