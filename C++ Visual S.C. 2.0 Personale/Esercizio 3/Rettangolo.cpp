#include "Rettangolo.h"

using namespace std;

Rettangolo::Rettangolo(){
    base = 1;
    altezza = 2;
}
int Rettangolo::perimetro(){
    return (base+altezza) *2;
}
int Rettangolo::area(){
    return base*altezza;
}
void Rettangolo::setBase(int _base){
    base = _base;
}
void Rettangolo::setAltezza(int _altezza){
    altezza = _altezza;
}
int Rettangolo::getBase(){
    return base;
}
int Rettangolo::getAltezza(){
    return altezza;
}