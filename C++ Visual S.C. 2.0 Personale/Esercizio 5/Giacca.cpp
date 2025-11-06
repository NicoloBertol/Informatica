#include "Giacca.h"
#include <iostream>

using namespace std;

Giacca::Giacca(){
    taglia = 45;
    percentuale = 0;
}
void Giacca::setTaglia(int _taglia){
    if(_taglia >= 30 && _taglia <= 60){
        taglia = _taglia;
    }
    else{
        cout << "Errore"; 
    }
}
void Giacca::setPercentuale(int _percentuale){
    if(_percentuale >= 0 && _percentuale <= 100){
        percentuale = _percentuale;
    }
    else{
        cout << "Errore"; 
    }
}
int Giacca::getTaglia(){
    return taglia;
}
int Giacca::getPercentuale(){
    return percentuale;
}
int Giacca::Apri(int _percentuale){
    return setPercentuale(getPercentuale()+_percentuale);
}
int Giacca::Chiudi(int _percentuale){
    setPercentuale(getPercentuale()-_percentuale);
}
int Giacca::ApriTot(){
    setPercentuale(100);
}
int Giacca::ChiudiTot(){
    setPercentuale(0);
}