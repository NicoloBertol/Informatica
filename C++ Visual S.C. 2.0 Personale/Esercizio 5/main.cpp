/*Si crei una classe per rappresentare giacche a vento, le giacche a vento dovranno 
essere caratterizzate dalla taglia (numeri interi positivi tra 30 e 60) e  
dalla percentuale di chiusura della cerniera, scrivere i metodi per poter aprire o 
chiudere completamente la cerniera o aprirla o chiuderla di un certa percentuale 
passata come argomento quando viene invocato il metodo, creare ovviamente anche i 
metodi per poter conoscere la taglia, la percentuale di chiusura di una cerniera, 
se è chiusa completamente la cerniera.
Dopo aver creato la classe testarla creando due giacche a vento con le taglie decise 
dall’utente, per ogni giacca per 4 volte far aprire e chiudere la cerniera di quantità 
casuali tra 10 e 50. Verificare poi quale tra le due giacche a vento ha il valore 
dato dalla percentuale di chiusura della giacca a vento maggiore.*/

#include <iostream>
#include "GiaccheAVento.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    GiaccheAVento g[2];
    int a,b,x,y;
    srand(time(NULL));

    cout << "Inserisci la taglia della prima giacca: ";
    cin >> a;
    g[0].setTaglia(a);

    cout << "Inserisci la taglia della seconda giacca: ";
    cin >> b;
    g[1].setTaglia(b);

    for(int i=0;i<4;i++){
        g[i].apri((x = rand()%41)+10);
        g[i].chiudi((y = rand()%41)+10);
    }
    if(g[0].getPercentualeChiusura() > g[1].getPercentualeChiusura()){
        cout << "La giacca a ventto con la percentuale di chiusura maggiore e' la prima. " << g[0].getPercentualeChiusura() << endl;
    }
    else{
        cout << "La giacca a ventto con la percentuale di chiusura maggiore e' la seconda. " << g[1].getPercentualeChiusura() << endl;
    }
    return 0;
}

