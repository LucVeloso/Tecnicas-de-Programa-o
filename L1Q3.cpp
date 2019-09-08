#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream L1Q3;

    L1Q3.open("input.txt");

    L1Q3 << "Estou adicionando uma linha" << endl;
    L1Q3 << "C++ é mais fácil que C" << endl;

    L1Q3.close();

    return 0;
}