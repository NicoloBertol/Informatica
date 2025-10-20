#include <iostream>
#include "Counter.h"

using namespace std;

int main(){

    Counter c1,c2;
   
    cout << "Contatore 1: "<< c1.getValue() <<"\n";
    cout << "Contatore 2: "<< c2.getValue() <<"\n";

    for(int i=0;i<100;i++){
        c1.increase(1);
        cout << "Contatore 1: "<< c1.getValue() <<"\n";
    }

    return 0;
}