/*Si crei una classe per rappresentare giacche a vento, le giacche a vento dovranno 
essere caratterizzate dalla taglia (numeri interi positivi tra 30 e 60) e  
dalla percentuale di chiusura della cerniera, scrivere i metodi per poter aprire o 
chiudere completamente la cerniera o aprirla o chiuderla di un certa percentuale 
passata come argomento quando viene invocato il metodo, creare ovviamente anche i 
metodi per poter conoscere la taglia, la percentuale di chiusura di una cerniera, 
se è chiusa completamente la cerniera.
*/

//qua ci scrivo il codice della classe
#ifndef GIACCHE_A_VENTO
#define GIACCHE_A_VENTO

class GiaccheAVento{

    private: 
        //tutto privato
        int percentualeChiusura;//APERTA 0,...,100 CHIUSA
        int taglia;//valore compreso tra 30 e 60  
    
    public:
        //tutto pubblico
        GiaccheAVento();//Costruttore
        void apri(int a);
        void chiudi(int a);
        void apriTotalmente();
        void chiudiTotalmente();
        void setTaglia(int _taglia);
        int getTaglia();
        int getPercentualeChiusura();
    
};

#endif