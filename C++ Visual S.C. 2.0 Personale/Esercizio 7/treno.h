/*Si crei una classe treno, la classe treno sarà caratterizzata dal numero di vagoni; tutti i vagoni possono contenere al massimo
lo stesso numero di viaggiatori. 
Nota bene: nella classe non serve memorizzare il numero di viaggiatori effettivamente presenti in ogni singolo vagone,
basta quello totale.
Creare un treno in cui il numero di vagoni e il numero massimo di viaggiatori per vagone siano scelti dall’utente e per 5 volte
far chiedere
all’utente se salgono o scendono viaggiatori e memorizzare il numero di viaggiatori presenti nel treno.
Dopo le 5 volte stampare il numero totale di viaggiatori e il numero medio di viaggiatori per vagone.*/

#ifndef TRENO_H
#define TRENO_H

class Treno{
    private:
        int numVagoni;
        int maxPersone;
        int count;

    public:
        Treno();
        void setVagoni(int _numVagoni);
        int getVagoni();
        void setViaggiatori_Vagone(int _maxPersone);
        int getViaggiatori_Vagone();
        void sali(int n);
        void scendi(int n);
        int Viaggiatori_Medi();
        int Viaggiatori_Tot(int c);
};

#endif