#ifndef STUDENTE_H
#define STUDENTE_H

#include <string>

using namespace std;

class Studente{
    private:
        string nome;
        string cognome;
        string matricola;
        float voti[100];
        string classe;
    public:
        Studente();
        void setNome(string n);
        string getNome();
        void setCognome(string c);
        string getCognome();
        void setMatricola(string m);
        string getMatricola();
        void setClasse(string cl);
        string getClasse();
        void inserisciVoto(float v);
        float getMedia();
};

#endif