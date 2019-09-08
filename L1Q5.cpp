#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string texto;

    ofstream L1Q5;

    L1Q5.open("input.txt", ios::app);

    cout << "Digite o que deseja adicionar ao arquivo: " << endl;
    getline(cin, texto);

    L1Q5 << texto << endl;

    L1Q5.close();

    return 0;
}
