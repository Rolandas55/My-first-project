#include <iostream>
#include <string>

using namespace std;

void vardas(string vard){
    string r;
    r=vard.back();
    if(r=="e" or r=="a") cout << "* Sveika, " << vard << "!  *" << endl;
    else cout << "* Sveikas, " << vard << "! *" << endl;
}

int main(){
    string vard;
    int ilg, sk;
    cin >> vard >> sk;
    ilg=vard.length()+14;
    cout << string(ilg, '*') << endl;
    if(sk>3){
        sk=sk-3;
        for(int i=0; i<sk+1; i++)
            if(i==sk/2) vardas(vard);
            else cout << "*" << string(ilg-2, ' ') << "*" << endl;
    }
    else vardas(vard);
    cout << string(ilg, '*') << endl;

    return 0;
}
