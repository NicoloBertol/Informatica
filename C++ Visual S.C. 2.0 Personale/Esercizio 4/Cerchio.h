#ifndef CERCHIO_H
#define CERCHIO_H

class Cerchio{
    private:
        int raggio;

    public:
        Cerchio();
        int circonferenza();
        int area();
        void setRaggio(int _raggio);
        int getRaggio();

};

#endif