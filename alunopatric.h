#include <iostream>

using namespace std;

class Aluno{
    private:
        string nome;
        string matricula;
        float media;
    public:

        void setNome(string n);
        string getNome();

        void setMatricula(string m);
        string getMatricula();

        void setMedia(float m);
        float getMedia();

        void obterDados();
        void mostrarDados();
};

void ordenar();