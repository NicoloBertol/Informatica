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
    return vet[MAX_STACK_SIZE-1];
}
bool isEmpty(){
    if(vet[0] == "")
        return true;
    else   
        return false;
}
int size(){
    int counter
    for(int i=0;i<MAX_STACK_SIZE;i++){
        if(vet[i]==""){
            return i;
        }
    }
}