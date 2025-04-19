#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n=0;

    cout << "Digite um número inteiro para representar a ordem da matriz: ";
    cin >> n;

    int matriz[n][n];
    int diagonalPrincipal[n], cont=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("[%d][%d]: ", i, j);
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i==j){
                diagonalPrincipal[i] = matriz[i][j];
           }

        if(matriz[i][j] < 0){
            cont++;
        }
        }
    }

    cout << "Diagonal principal: ";
    for(int i=0; i<n; i++){
        cout <<  diagonalPrincipal[i] << " ";
    }

    cout << "\nQuantidade de negativos: " << cont;
}