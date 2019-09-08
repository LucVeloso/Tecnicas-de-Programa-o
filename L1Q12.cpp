#include <iostream>

using namespace std;

int contadorPares(int tam, int vector[]){

    int contador = 0;

    while(tam > 0){

        if(!(vector[--tam] % 2)) contador++;
    }

    return contador;
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

    resultado = contadorPares(tamanho, numeros);

    cout << resultado << " números pares" << endl;

    return 0;
}