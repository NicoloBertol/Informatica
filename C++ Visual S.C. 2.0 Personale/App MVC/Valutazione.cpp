#include "Valutazione.h"

using namespace std;

Valutazione::Valutazione(){
    voto = 6;
    materia = "Informatica"; 
}

void Valutazione::setVoto(float v){
    voto = v;
}
float Valutazione::getVoto(){
    return voto;
}
void Valutazione::setMateria(string m){
    materia = m;
}
string Valutazione::getMateria(){
    return materia;
}