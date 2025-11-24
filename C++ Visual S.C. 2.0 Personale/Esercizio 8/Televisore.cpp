/*Creare una classe Televisore sapendo che lo stato di un televisore è caratterizzato dal fatto di essere accesa o spenta,
dal volume (che è compreso tra zero e 60), dal canale (che è compreso tra 0 e 999) e dal fatto che sia in modalità silenzioso o meno.
Creare un opportuno costruttore, e i seguenti metodi: pulsanterosso(), canaleSuccessivo(), canalePrecedente(), aumentaVolume(),
abbassaVolume(), impostaCanale(int c), pulsanteSilenzioso() e print() che ci fornisce un feedback sullo stato della tv.
Si rendano esplicite le scelte implementative fatte nei commenti all’inizio del codice.
Testare la classe con un opportuno main.*/

#include "Televisore.h"

Televisore::Televisore(){
    acceso = true;
    volume = 0;
    canale = 0;
    silenzioso = false;
}
void Televisore::pulsanterosso(){
    if(acceso == false){
        acceso = true;
    }
}
int Televisore::canaleSuccessivo(){
    if(canale <= 999 && canale >=0)
        return canale++;
}
int Televisore::canalePrecedente(){
    if(canale <= 999 && canale >=0)
        return canale--;
}
int Televisore::aumentaVolume(){
    if(volume <= 60 && volume >= 0)
        return volume++;
}
int Televisore::abbassaVolume(){
    if(volume <= 60 && volume >= 0)
        return volume--;
}
void Televisore::impostaCanale(int c){
    canale = c;
}
void Televisore::pulsanteSilenzioso(){
    silenzioso = true;
}
void Televisore::print(){
    Televisore();
}