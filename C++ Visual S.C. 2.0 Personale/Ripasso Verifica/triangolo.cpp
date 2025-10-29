#include "triangolo.h"

Triangolo::Triangolo(){
    base = 1;
    altezza = 2;
    l1 = 3;
    l2 = 4;
}
int Triangolo::perimetro(){
    return base+l1+l2;
}
int Triangolo::area(){
    return (base*altezza)/2;
}
void Triangolo::setBase(int _base){
    base = _base;
}
void Triangolo::setAltezza(int _altezza){
    altezza = _altezza;
}
void Triangolo::setl1(int _l1){
    l1 = _l1;
}
void Triangolo::setl2(int _l2){
    l2 = _l2;
}
int Triangolo::getBase(){
    return base;
}
int Triangolo::getAltezza(){
    return altezza;
}
int Triangolo::getl1(){
    return l1;
}
int Triangolo::getl2(){
    return l2;
}