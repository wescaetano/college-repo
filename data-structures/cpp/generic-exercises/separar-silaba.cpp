#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    char vogal[5] = {'a', 'e', 'i', 'o', 'u'};
    char primeiraLetra, segundaLetra;
    int n=0;
    cout << "Quantas palavras serão digitadas: ";
    cin >> n;

    string palavras[3];

    for(int i=0; i<n; i++){
        cout << "Digite a " << i+1 << "° palavra: ";
        cin >> palavras[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            primeiraLetra = palavras[i][0], segundaLetra = palavras[i][2];

            cout << primeiraLetra << vogal[j] << endl;

            
        }
        cout << endl;

        for(int k=0; k<5; k++){
            primeiraLetra = palavras[i][0], segundaLetra = palavras[i][2];

            cout << segundaLetra << vogal[k] << endl;

            
        }

        cout << endl;
    }
}