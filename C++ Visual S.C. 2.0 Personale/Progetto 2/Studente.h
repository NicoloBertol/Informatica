#ifndef STUDENTE_H
#define STUDENTE_H

#include <string>

using namespace std;

class Studente{
    private:
        string nome;
        string cognome;
        int ID;
        float voti[50];
    public:
        Studente(string n, string c, int i);
        void aggiungiVoto(float voto);
        float calcolaMedia();
        void mostraDati();
};

#endif