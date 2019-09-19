#include <vector>
#include <iostream>

using namespace std;

class Aluno{

    private:

        string nome;
        vector <float> notas;
        float media;
        vector <string> disciplinas;

    public:

        void coletarDados();
        void mostrarDados();

        void setNome(string n);

};


