#include <iostream>

using namespace std;

int main(){
    string pirma, antra, trecia, vard;
    int ilg;
    cin >> vard;
    ilg = vard.length()+14;
    pirma.append(ilg, '*');
    antra = "*";
    antra.append(ilg-2, ' ');
    antra.append("*");
    trecia = "* Sveikas, " + vard + "! *";
    cout << pirma << endl << antra << endl << trecia << endl << antra  << endl << pirma;
    return 0;
}
