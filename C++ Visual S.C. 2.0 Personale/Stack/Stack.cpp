#include "Stack.h"
#define MAX_STACK_SIZE = 10;

void push(int n){
    if(t == MAX_STACK_SIZE-1){
        cout << "errore, stack pieno.";
    }
    else{
        vet[t++] == n;
    }
}
int pop(){
    if(isEmpty()){
        cout << "errore, stack vuoto.";
    }
    else{
        return vet[--t];
    }
}
int top(){

}
bool isEmpty(){

}
int size(){
    
}