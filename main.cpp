#include <iostream>
#include <string>

using namespace std;

int main(){
    string pirma, antra, treciav, treciam, vard, r;
    int ilg;
    cin >> vard;
    ilg=vard.length()+14;
    pirma.append(ilg, '*');
    antra = '*';
    antra.append(ilg-2, ' ');
    antra.append("*");
    treciav = "* Sveikas, " + vard + "! *";
    treciam = "* Sveika, " + vard + "!  *";
    r=vard.back();
    if(r=="e" or r=="a")
    cout << pirma << endl << antra << endl << treciam << endl << antra  << endl << pirma;
    else cout << pirma << endl << antra << endl << treciav << endl << antra  << endl << pirma;
    return 0;
}
