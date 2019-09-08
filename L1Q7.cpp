#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    
    int a = 0, incog = 0;

    srand(time(0));
    incog = rand()%31;
    
    cout << "Digite o palpite (entre 0 e 30): ";
    cin >> a;
    
    while(a != incog){
    
       if(a > incog){

        cout << "Palpite muito alto, tente novamente: ";
        cin >> a;
        }

       if(a < incog){

        cout << "Palpite muito baixo, tente novamente: ";
        cin >> a;
        }
    }
    
    cout << "Acertou!!!" << endl;

    return 0;
}