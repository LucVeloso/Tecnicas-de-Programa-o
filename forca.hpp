using namespace std;

void stickMan(int vidas){

    cout << " ____" << endl;

    cout << " |/ |" << endl;

    if(vidas <= 5) cout << " |  o" << endl;
    else cout << " |   " << endl;

    if(vidas > 4) cout << " |   " << endl; 
    if(vidas == 4) cout << " |  |" << endl;
    if(vidas == 3) cout << " | /|" << endl;
    if(vidas <= 2) cout << " | /|\\ " << endl;

    if(vidas > 1) cout << " |   " << endl;
    if(vidas == 1) cout << " | /" << endl;
    if(vidas == 0) cout << " | / \\ " << endl;

    cout << "_|_   " << endl;

    cout << "suas vidas: " << vidas << endl;

}

string pegarPalavra(){

    int nlinha = 0, linha = 0;
    string palavra;
    ifstream arquivo;

    arquivo.open("palavras.txt");
    
    srand(time(0));
    nlinha = rand() % 10;

    for(linha = 0; nlinha >= linha; linha++){

        getline(arquivo, palavra);
    }

    return palavra;
}