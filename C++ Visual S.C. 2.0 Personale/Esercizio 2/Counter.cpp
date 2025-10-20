#include "Counter.h"
#include <iostream>

Counter::Counter(){
    cout << "istanza dell'oggetto creata!\n";
    value = 0;
}
Counter::~Counter(){
    cout << "Oggetto distrutto!\n";
}
int Counter::getValue(){
    return value;
}
void Counter::increase(int n){
    value+=n;
}   