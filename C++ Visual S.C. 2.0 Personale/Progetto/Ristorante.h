#ifndef LISTA_H
#define LISTA_H

class Tavolo{
    private:
        int n_tavolo;
        int posti;
        bool occupato;
    public:
        Tavolo();
        Tavolo(int t, int p);
        void occupa();
        void libera();
        int getPosti();
        int getNTavolo();
        bool Occupato();
};

class Ristorante{
    private:
        Tavolo t[10];
        int num_tavoli;
    public:
        Ristorante();
        void assegna(int p);
        void libera(int n_tavolo);
        int mostraTavoli();
};

#endif