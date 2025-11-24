/*Si crei una classe scarpe con gli strectch (linguette adesive col feltro);
ogni paio di scarpe è caratterizzato dalla dimensione (data da un numero intero) e ha tre stretch sulla scarpa destra e tre sulla scarpa sinistra.
Creare due paia di scarpe con gli stretch e per 10 volte estrarre casualmente su quale paio di scarpe cambiare da allacciato a slacciato uno degli stretch
(scelto casualmente) di una delle due scarpe scelta sempre casualmente.
Dopo aver fatto aprire e chiudere per le 10 volte gli stretch,
stampare la situazione finale delle scarpe; si consideri che inizialmente tutti gli stretch sono slacciati.
*/

#ifndef SCARPE_H
#define SCARPE_H

class Scarpe{
    private:
        int dimensione;
        bool strdx[3];//true = chiuse
        bool strsx[3];

    public:
        Scarpe(int dim);
        //scelta permette di scegliere tra scarpoa sx e dx
        //n tra i tre stretch
        void cambiaStretchScarpaSx(int n);
        void cambiaStretchScarpaDx(int n);
        void stampa();
};

#endif