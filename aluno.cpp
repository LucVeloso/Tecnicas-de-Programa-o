#include "aluno.h"

using namespace std;

void Aluno::setNome(string n){

    if(n.size() >= 3){

        nome = n;
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

        if(entNota == -1) break;

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

    media = dividendo/divisor;
}

void Aluno::setDisciplinas(){

    int contDisciplinas = 0;
    string entDisciplina;

    while(entDisciplina[1] != '0'){
    
        cout << "Digite a " << contDisciplinas+1 << "° disciplina do aluno (0 para parar): ";
        cin >> entDisciplina;

        if(entDisciplina[0] == '0') break;

        while(entDisciplina.size() < 2){
            
            cout << "Disciplina inválida! Digite novamente: ";
            cin >> entDisciplina;
        }

        disciplinas.push_back(entDisciplina);
        contDisciplinas++;
    }
}

string Aluno::getNome(){
    
    return nome;
}

void Aluno::getNotas(){

    int t = notas.size();

    cout << "A(s) nota(s) do aluno é(são): ";

    for(int i = 0; i < t; i++){
        
        cout << notas[i] << ", ";
    }

    cout << endl;
}

float Aluno::getMedia(){

    return media;
}

void Aluno::getDisciplinas(){

    int t = disciplinas.size();

    cout << "A(s) disciplina(s) do aluno é(são): ";

    for(int i = 0; i < t; i++){
        
        cout << disciplinas[i] << ", ";
    }

    cout << endl;
}

void Aluno::coletarDados(){

    string validNome;
    float media;

    cout << "Digite o nome do aluno: ";
    getline(cin, validNome);

    setNome(validNome);
    setNotas();
    setMedia();
    setDisciplinas();

}

void Aluno::mostrarDados(){

    cout << "O nome do aluno é: " << getNome() << endl;

    getNotas();

    cout << "A média do aluno é: " << getMedia() << endl;

    getDisciplinas();

}