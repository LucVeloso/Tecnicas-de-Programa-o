#include <iostream>
#include <cmath>

using namespace std;

void quadrado(int valor){

    int resultado = 0;

    resultado = pow(valor, 2);

    cout << valor << "² = " << valor << " * " << valor << " = " << resultado << endl;

}

int main () {

    int valor = 0;

    cout << "Digite o valor a ser elevado ao quadrado: ";
    cin >> valor;

    quadrado(valor);

    return 0;

}

    