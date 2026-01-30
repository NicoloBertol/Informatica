//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

ApplicationView::ApplicationView(ApplicationModel *m):View(m){}

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

Studente ApplicationView::acquisisciStudente(Studente &s){
	string n, c, m, cl;
	fstream miofile;

	cout << "Nome: ";
	cin >> n,"\n";
	s.setNome(n);
	s.getNome();
	miofile.open("Dati.txt", ios::app);
    miofile << "Nome: " << n << endl; //SCRITTURA nel file associato all'oggetto
    miofile.close();

	cout << "Cognome: ";
	cin >> c,"\n";
	s.setCognome(c);
	s.getCognome();
	miofile.open("Dati.txt", ios::app);
    miofile << "Cognome: " << c << endl; //SCRITTURA nel file associato all'oggetto
    miofile.close();

	cout << "Numero Matricola: ";
	cin >> m,"\n";
	s.setMatricola(m);
	s.getMatricola();
	miofile.open("Dati.txt", ios::app);
    miofile << "Matricola: " << m << endl; //SCRITTURA nel file associato all'oggetto
    miofile.close();

	cout << "Classe: ";
	cin >> cl,"\n";
	s.setClasse(cl);
	s.getClasse();
	miofile.open("Dati.txt", ios::app);
    miofile << "Classe: " << cl << endl << endl; //SCRITTURA nel file associato all'oggetto
    miofile.close();
	
	return s;
}

Valutazione ApplicationView::acquisiciVoti(Valutazione &val){
	string m;
	float v;
	fstream miofile;

	cout << "Materia: ";
	cin >> m, "\n";
	val.setMateria(m);
	val.getMateria();
	miofile.open("Voti.txt", ios::app);
    miofile << "Materia: " << m << endl; //SCRITTURA nel file associato all'oggetto
    miofile.close();

	cout << "Valutazione: ";
	cin >> v;
	val.setVoto(v);
	val.getVoto();
	miofile.open("Voti.txt", ios::app);
    miofile << "Valutazione: " << v << endl << endl; //SCRITTURA nel file associato all'oggetto
    miofile.close();

	return val;
}
//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

