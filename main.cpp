#include <fstream>
#include <iostream>

using namespace std;

int main(){
    string x;
    ifstream fin("t.txt");
    ofstream fout("t.txt", ios::app);

    cin >> x;
    fout << x;
    
    return 0;
}