#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo{

    private:
        int base;
        int altezza;
        
    public:
        Rettangolo();
        int perimetro();
        int area();
        void setBase(int _base);
        void setAltezza(int _altezza);
        int getBase();
        int getAltezza();
        
};
#endif