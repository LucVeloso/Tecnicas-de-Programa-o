#include <iostream>

using namespace std;

bool soma_28(int tam, int vector[]){

    int contador = 0;

    while(tam > 0){

        if(vector[tam-1] == 2) contador += 2;

        tam--;
    }

    return bool(contador == 8);
}

int main(){

    int tamanho = 0, posicao = 0, resultado = 0;
    int numeros[100];

    cout << "Digite quantos numeros voce quer analisar: ";
    cin >> tamanho;
    
    for(posicao == 0; posicao < tamanho; posicao++){

        cout << "Digite o " << posicao + 1 << "° valor a ser analisado: ";
        cin >> numeros[posicao];

    }

    resultado = soma_28(tamanho, numeros);

    if(resultado == 0) cout << "falso" << endl;

    if(resultado == 1) cout << "verdadeiro" << endl;

    return 0;
}