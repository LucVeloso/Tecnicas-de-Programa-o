#include <iostream>
#include <fstream>
#include "forca.hpp"
#include <ctime>
#include <cstdlib>

using namespace std; 

int main (){
    
    int n = 0, i = 0, vidas = 6;
    string forca, palpitesAnt, palpite, acertos;

    forca = pegarPalavra();

    n = forca.size();

    for(i == 0; n > i; i++){

        acertos += '_';
    } 

    while(acertos != forca){
        
        system("clear");
        stickMan(vidas);
        cout << "Palavra: " << acertos << endl;
        cout << "palpites anteriores: " << palpitesAnt << endl;

        if(vidas == 0){

            cout << "Você perdeu!!! :(" << endl;
            return 0;
        }

        cout << "Seu palpite: ";
        cin >> palpite;
        
        i = 0;
        while(forca.find(palpite,i) != -1){
        
            i = (int)forca.find(palpite,i);
            acertos[i++] = palpite[0];
            
        }

        if(forca.find(palpite) == -1){

            vidas--;
        }
        
        palpitesAnt += palpite;
        palpitesAnt += ", ";
        
    }

        system("clear");
        stickMan(vidas);
        cout << "Palavra: " << acertos << endl;
        cout << "palpites anteriores: " << palpitesAnt << endl;
        cout << "Acertou Parabens!!!" << endl;
    
    return 0;
}