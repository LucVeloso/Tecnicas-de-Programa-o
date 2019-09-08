#include <iostream>

using namespace std;

int main(){

    float n1 = 0, n2 = 0;
    string op;

    cout << "Digite dois números: " << endl;
    cin >> n1 >> n2;

    cout << "Digite a operação a realizar com os números (adição, subtração, divisão ou multiplicação): " << endl;
    cin >> op;
    
    switch(op[0]){
        case 'A':
        case 'a':
        case '+':

            cout << n1 << " + " << n2 << " = " << n1+n2 << endl;

            break;
        
        case 'S':
        case 's':
        case '-':

            cout << n1 << " - " << n2 << " = " << n1-n2 << endl;

            break;

        case 'M':
        case 'm':
        case '*':

            cout << n1 << " * " << n2 << " = " << n1*n2 << endl;

            break;

        case 'D':
        case 'd':
        case '/':

            cout << n1 << " / " << n2 << " = " << n1/n2 << endl;

            break;
    }
    
    return 0;
}