#include <iostream>
#include "triangolo.h"

using namespace std;

int main(){

    Triangolo t1[3];

    for(int i=0;i<3;i++){
        t1[i].setBase(i+1);
        t1[i].setAltezza(i+2);
        t1[i].setl1(i+3);
        t1[i].setl2(i+4);
    }

    for(int i=0;i<3;i++){
        cout << "Il triangolo con base " << t1[i].getBase();
        cout << ", l'altezza "  << t1[i].getAltezza();
        cout << ", con lato 1 di " << t1[i].getl1();
        cout << " e lato 2 di " << t1[i].getl2() << "." << endl;
        cout << "Il perimetro e' " << t1[i].perimetro();
        cout << " e l'area " << t1[i].area() << "." << endl;
    }

    return 0;
}
