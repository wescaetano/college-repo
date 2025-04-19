#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[3][3][3];

    cout << "seilá çasaê!" << endl;

    cout << "Digite respectivamente os valores para altura, largura e profundidade: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                cin >> matriz[i][j][k];
            }
        }   
    }

    cout << endl;
    cout << "Matriz preenchida: " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                cout << matriz[i][j][k] << " ";
            }
        }   
    }
}