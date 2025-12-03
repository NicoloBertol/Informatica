#ifndef STACK_H
#define STACK_H

class Stack{

    private:

    public:
        void push(int n); // - inserisce un elemento in cima allo Stack
        int pop(); //- elimina e restituisce l'elemento in cima allo Stack
        int top(); //- restituisce senza eliminare l'elemento in cima allo Stack
        bool isEmpty(); //- restituisce true solo se lo Stack è vuoto
        int size(); //- restituisce il numero di elementi presenti/inseriti nello Stack
};

#endif