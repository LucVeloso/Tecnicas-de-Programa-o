#include <iostream>

using namespace std;

string helloNome(string Nome){

    string cumprimento = "Olá ";

    cumprimento += Nome;
    cumprimento += "!";

    return cumprimento;
}

int main(){

    string entrada, cumprimento;

    cout << "Digite seu nome: ";
    getline(cin, entrada);

    cumprimento = helloNome(entrada);

    cout << cumprimento << endl;

    return 0;
}