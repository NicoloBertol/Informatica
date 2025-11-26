#include "treno.h"

Treno::Treno(){
    numVagoni = 1;
    maxPersone = 0;
    count = 0;
}
void Treno::setVagoni(int _numVagoni){
    numVagoni = _numVagoni;
}
int Treno::getVagoni(){
    return numVagoni;
}
void Treno::setViaggiatori_Vagone(int _maxPersone){
    maxPersone = _maxPersone;
}
int Treno::getViaggiatori_Vagone(){
    return maxPersone;
}
void Treno::sali(int n){
    count += n;
}
void Treno::scendi(int n){
    count -= n;
    if(count < 0){
        count = 0;
    }
}
int Treno::Viaggiatori_Medi(int z){
    return (float)z/numVagoni;
}
int Treno::Viaggiatori_Tot(int c){
    return c;
}
int Treno::Viaggiatori_Attuali(){
    return count;
}