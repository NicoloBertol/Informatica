#include "treno.h"

Treno::Treno(){
    numVagoni = 1;
    maxPersone = 0;
}
void Treno::setVagoni(int _numVagoni){
    numVagoni = _numVagoni;
}
int Treno::getVagoni(){
    return numVagoni;
}
void Treno::setViaggiatori_Vagone(int _maxPersone){
    maxPersone = _maxPersone
}
int Treno::getViaggiatori_Vagone(){
    return maxPersone;
}
void Treno::sali();
void Treno::scendi();
int Treno::Viaggiatori_Attuali();
int Treno::Viaggiatori_Medi();
int Treno::Viaggiatori_Tot();