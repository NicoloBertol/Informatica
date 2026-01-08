#include <iostream>

using namespace std;

class PowerDevice{
    public:
        PowerDevice(int n){
            cout << "PowerDevice: " << n << endl;
        }
};

class Scanner : public virtual PowerDevice{
    public:
        Scanner(int s, int n):PowerDevice(n){
            cout << "Scanner: " << s << endl;
        }
};

class Printer : public virtual PowerDevice{
    public:
        Printer(int p, int n):PowerDevice(n){
            cout << "Printer: " << p << endl;
        }
};

class Copier : public Scanner, public Printer{
    public:
        Copier(int s, int p, int n):Scanner(s,n), Printer(p,n), PowerDevice(n){
        }
};

int main(){
    Copier(1,2,3);
    return 0;
}