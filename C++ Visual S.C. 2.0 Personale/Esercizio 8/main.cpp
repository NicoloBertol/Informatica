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
    
    int n,e,scelta=0;
    cout << "Vuoi accendere il televisore (1 per il si, 0 per no)? ";
    cin >> n, "\n";
    if(n==1){
        t.pulsanterosso();
        cout << "Il televisore e' acceso." << endl;
        do{ 
            cout << "MENU': 1(imposta canale); 2(Canale Successivo); 3(Canale Precedente); 4(Alza Volume); 5(Abbassa Volume); 0(Esci)" << endl;
            cout << "Cosa vuoi fare? ";
            cin >> scelta;

            switch(scelta){
                case 1:
                    cout << "Scegli un canale: ";
                    cin >> e;
                    t.impostaCanale(e);
                    break;
                case 2:
                    cout << "Sei al canale " << t.canaleSuccessivo() << endl;
            }
            
            if(scelta == 3){     
                cout << "Sei al canale " << t.canalePrecedente() << endl;    
            }
            if(scelta == 4){
                cout << "Volume: " << t.aumentaVolume() << endl;
            }
            if(scelta == 5){
                cout << "Volume: " << t.abbassaVolume() << endl;
            }
            if(scelta == 0){
                break;
            }
        }while(scelta != 0);
        
    }

    return 0;
}