#ifndef VALUTAZIONE_H
#define VALUTAZIONE_H

#include "MVC.h"

using namespace std;

class Valutazione{
    private:
        float voto;
        string materia;
    public:
        Valutazione();
        void setVoto(float v);
        float getVoto();
        void setMateria(string m);
        string getMateria();
};
#endif