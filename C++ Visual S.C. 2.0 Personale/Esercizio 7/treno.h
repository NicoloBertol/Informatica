#ifndef TRENO_H
#define TRENO_H

class Treno{
    private:
        int numVagoni;
        int maxPersone;

    public:
        Treno();
        void setVagoni(int _numVagoni);
        int getVagoni();
        void setViaggiatori_Vagone(int _maxpersone);
        int getViaggiatori_Vagone();
        void sali();
        void scendi();
        int Viaggiatori_Attuali();
        int Viaggiatori_Medi();
        int Viaggiatori_Tot();
};

#endif