#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string texto;
    ifstream L1Q4;

    L1Q4.open("input.txt");

    while(getline(L1Q4,texto)){

        cout << texto << " " << endl;
    }

    L1Q4.close();

    return 0;
}