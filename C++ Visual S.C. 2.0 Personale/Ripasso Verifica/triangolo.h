#ifndef TRIANGOLO_H
#define TRIANGOLO_H

class Triangolo{

    private:
        int base;
        int altezza;
        int l1;
        int l2;

    public:
        Triangolo();
        int perimetro();
        int area();
        void setBase(int _base);
        void setAltezza(int _altezza);
        void setl1(int _l1);
        void setl2(int _l2);
        int getBase();
        int getAltezza();
        int getl1();
        int getl2();
};


#endif
