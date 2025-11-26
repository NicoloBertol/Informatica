/*Si crei una classe treno, la classe treno sarà caratterizzata dal numero di vagoni; tutti i vagoni possono contenere al massimo
lo stesso numero di viaggiatori. 
Nota bene: nella classe non serve memorizzare il numero di viaggiatori effettivamente presenti in ogni singolo vagone,
basta quello totale.
Creare un treno in cui il numero di vagoni e il numero massimo di viaggiatori per vagone siano scelti dall’utente e per 5 volte
far chiedere
all’utente se salgono o scendono viaggiatori e memorizzare il numero di viaggiatori presenti nel treno.
Dopo le 5 volte stampare il numero totale di viaggiatori e il numero medio di viaggiatori per vagone.*/

#include <iostream>
#include "Treno.h"

using namespace std;

int main(){
    Treno t;
    int v=0, m=0, q=0,r=0,c=0;
    cout << "Inserisci il numero di vagoni: ";
    cin >> v;
    t.setVagoni(v), "\n";
    cout << "Inserisci il numero massimo di passeggeri per vagone: ";
    cin >> m;
    t.setViaggiatori_Vagone(m), "\n";

    for(int i=0;i<4;i++){
        cout << "Salgono o scendono viaggiatori (0 se scendono, 1 se salgono)?";
        cin >> q, "\n";
        if(q == 1){ //salgono persone
            cout << "Inserisci il numero di persone che salgono: ";
            cin >> r;
            t.sali(r);
            c+=r;
        }
        if(q == 0){ //scendono persone
            cout << "Inserisci il numero di persone che scendono: ";
            cin >> r;
            t.scendi(r);
        }
    }
    cout << "Il numero di viaggiatori sul treno e': " << t.Viaggiatori_Attuali() << ".\n";
    cout << "Il numero totale di viaggiatori e' stato di " << t.Viaggiatori_Tot(c) << ".\n";
    cout << "Il numero di viaggiatori medi per vagone e' stato d: " << t.Viaggiatori_Medi(c) << ".\n";
    
    return 0;
}