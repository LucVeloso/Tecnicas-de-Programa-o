#include <iostream>

using namespace std;

bool ehPalindroma(string palavra){

    int tamanho = 0;
    string reverso;

    tamanho = palavra.size();

    while(tamanho > 0){

        reverso += palavra[--tamanho];
        
    }

    return bool(palavra == reverso);
}

int main(){

    int resultado = 0;
    string palavra;

    cout << "Digite a palavra a ser verificada: ";
    cin >> palavra;

    resultado = ehPalindroma(palavra);

    if(resultado == 0) cout << "A palavra " << palavra << " não é palíndroma" << endl;
    if(resultado == 1) cout << "A palavra " << palavra << " é palíndroma" << endl;

    return 0;
}