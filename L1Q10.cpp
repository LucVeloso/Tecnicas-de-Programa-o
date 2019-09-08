#include <iostream>

using namespace std;

int main (){

    int resultado = 0;
    string mariaSorrindo, joaoSorrindo;

    cout << "Maria está sorrindo?" << endl;
    cin >> mariaSorrindo;

    cout << "João está sorrindo?" << endl;
    cin >> joaoSorrindo;

    resultado = bool(mariaSorrindo == joaoSorrindo);

    if(resultado == 0) cout << "false" << endl;
    if(resultado == 1) cout << "true" << endl;

    return 0;
}