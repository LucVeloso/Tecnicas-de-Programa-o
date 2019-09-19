#include "aluno.h"

using namespace std;

void Aluno::setNome(string n){

    if(n.size() >= 3){

        this -> nome = n;
    }
    else {

        cout << "Nome inválido! Digite novamente: ";
        cin.ignore();
        getline(cin, n);
    }
}

void Aluno::setNotas(){

    int contNotas = 0;
    float entNota = 0;

    while(entNota >= 0){
    
        cout << "Digite a " << contNotas+1 << "° nota do aluno (-1 para parar): ";
        cin >> entNota;
        while(entNota < 0 and entNota > 100){
            
            cout << "Nota inválida! Digite uma nota entre 0 e 100: ";
            cin >> entNota;
        }

        notas.push_back(entNota);
        contNotas++;
    }

}

void Aluno::setMedia(){

    int divisor = notas.size();
    float dividendo = 0;

    for(int cont = 0; cont < divisor; cont++){

        dividendo += notas[cont];
    }

    media = dividendo / divisor;

}

string Aluno::getNome(){
    
    return nome;
}

void Aluno::coletarDados(){

    string validNome;
    float media;

    cout << "Digite o nome do aluno: ";
    getline(cin, validNome);

    setNome(validNome);

    setNotas();

    setMedia();
}

void Aluno::mostrarDados(){

    cout << "O nome do aluno é: " << getNome() << endl;
}