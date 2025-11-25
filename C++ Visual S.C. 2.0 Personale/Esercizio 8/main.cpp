/*Creare una classe Televisore sapendo che lo stato di un televisore è caratterizzato dal fatto di essere accesa o spenta, 
dal volume (che è compreso tra zero e 60), dal canale (che è compreso tra 0 e 999) e dal fatto che sia in modalità silenzioso o meno.
Creare un opportuno costruttore, e i seguenti metodi: pulsanterosso(), canaleSuccessivo(), canalePrecedente(), aumentaVolume(),
abbassaVolume(), impostaCanale(int c), pulsanteSilenzioso() e print() che ci fornisce un feedback sullo stato della tv.
Si rendano esplicite le scelte implementative fatte nei commenti all’inizio del codice.
Testare la classe con un opportuno main.*/

#include <iostream>
#include "Televisore.h"

using namespace std;

int main(){

    Televisore t;
    bool p = false;
    int n,r,e;
    char s[2];
    cout << "Vuoi accendere il televisore? ";
    cin >> n, "\n";
    if(n==1){
        t.pulsanterosso();
        cout << "Il televisore e' acceso." << endl;
        cout << "Vuoi cambiare canale? ";
        cin << s[0], "\n";
        if(s[0] == "si" || s[0] == "sì"){
            cout << "Scegli un canale: ";
            cin >> e;
            cout << "Vuoi andare avanti o indietro (1 per avanti, 0 per indietro)?";
            cin << r,"\n";
            if(r==1){
                canaleSuccessivo();
            }
            if(r==0){
                canalePrecedente();
            }
        }
        cout << "Vuoi alzare o abbassare il volume?";
    }
    return 0;
}