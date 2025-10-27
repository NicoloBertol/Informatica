#include "Cerchio.h"
#include <cmath>

Cerchio::Cerchio(){
    raggio = 1;
}
int Cerchio::circonferenza(){
    return M_PI*2*raggio;
}
int Cerchio::area(){
    return M_PI*(raggio*raggio);
}
void Cerchio::setRaggio(int _raggio){
    raggio = _raggio;
}
int Cerchio::getRaggio(){
    return raggio;
}