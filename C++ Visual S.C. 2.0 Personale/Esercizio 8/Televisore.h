/*Creare una classe Televisore sapendo che lo stato di un televisore è caratterizzato dal fatto di essere accesa o spenta,
dal volume (che è compreso tra zero e 60), dal canale (che è compreso tra 0 e 999) e dal fatto che sia in modalità silenzioso o meno.
Creare un opportuno costruttore, e i seguenti metodi: pulsanterosso(), canaleSuccessivo(), canalePrecedente(), aumentaVolume(),
abbassaVolume(), impostaCanale(int c), pulsanteSilenzioso() e print() che ci fornisce un feedback sullo stato della tv.
Si rendano esplicite le scelte implementative fatte nei commenti all’inizio del codice.
Testare la classe con un opportuno main.*/

#ifndef TELEVIORE_H
#define TELEVIORE_H

class Televisore{
    private:
        bool acceso;
        int volume;
        int canale;
        bool silenzioso;

    public:
        Televisore();
        void pulsanterosso();
        void canaleSuccessivo();
        void canalePrecedente();
        void aumentaVolume();
        void abbassaVolume();
        void impostaCanale(int c);
        void pulsanteSilenzioso();
        void print();
};

#endif