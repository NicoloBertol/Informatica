#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    fstream miofile;

    int numero;
    string s;
    cout << "Inserisci un numero intero: ";
    getline(cin, s); //LETTURA da tastiera di una riga intera, fino al carattere '\n

    // ios::out - ios::in - ios::app
    miofile.open("prova.txt", ios::app);
    miofile << s << endl; //SCRITTURA nel file associato all'oggetto
    miofile.close();


    miofile.open("prova.txt", ios::in);
    while(!miofile.eof()) {
        getline(miofile, s); //LETTURA dal file di una riga intera, fino al carattere '\n'
        cout << s << endl;
    }
    miofile.close();
    return 0;
}
