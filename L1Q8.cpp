#include <iostream>

using namespace std;

float somaDeFloat(float a, float b){
    
    float calc = 0;

    if(a == b){

        calc = (a + b) * 2;
    }

    else{

        calc = a + b;
    }

    return calc;
}

int main (){

    float n1 = 0, n2 = 0, resultado = 0;

    cout << "Digite dois números: ";
    cin >> n1 >> n2;

    resultado = somaDeFloat(n1, n2);

    cout << "Resultado: " << resultado << endl;

    return 0;
}