#include <stdio.h>
#include "myLib.h"

long fattoriale(long n){
    if(n==0){
        return 1;
    }
    else{
        return n * fattoriale(n-1);
    }
}