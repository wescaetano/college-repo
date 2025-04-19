#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int m, n;

    cout << "Digite a quantidade de linhas da matriz: ";
    cin >> m;

    cout << "Digite a quantidade de colunas da matriz: ";
    cin >> n;

    int matriz[m][n], vetor[m], soma=0;

    for(int i=0; i<m; i++){
        cout << "Digite os elementos da linha " << i+1 << ": " << endl; 
        for(int j=0; j<n; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<m; i++){ 
        for(int j=0; j<n; j++){
                soma += matriz[i][j]; 
    }
        vetor[i] = soma;
        soma=0;
    }


    cout << "Vetor gerado: " << endl;
    for(int i=0; i<m; i++){
        cout << "Linha " << i+1 << ": "<< vetor[i] << endl;
    }
}
