#include "aluno.h"

using namespace std;

void Aluno::setNome(string n){

    if(n.size() <= 3){

        nome = n;
    }
    else {

        cout << "Nome inválido! Digite novamente: ";
        getline(cin, n);
    }

}

void coletarDados(){

    string validNome;
    float media;

    cout << "Digite o nome do aluno: ";
    getline(cin, validNome);

    setNome(validNome);
    
}