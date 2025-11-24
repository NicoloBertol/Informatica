#ifndef GIACCA_H
#define GIACCA_H

class Giacca{

    private:
        int taglia;
        int percentuale;

    public:
        Giacca();
        void setTaglia(int _taglia);
        int setPercentuale(int _percentuale);
        int getTaglia();
        int getPercentuale();
        int Apri();
        int Chiudi();
        int ApriTot();
        int ChiudiTot();
};

#endif