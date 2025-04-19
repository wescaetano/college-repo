#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int r1x0, r1x1, r1y0, r1y1;
    int r2x0, r2x1, r2y0, r2y1;

        cout << "\nDigite as coordenadas do primeiro retângulo respectivamente: (x0, x1, y0, y1) " << endl;
        cin >> r1x0;
        cin >> r1x1;
        cin >> r1y0;
        cin >> r1y1;

        cout << "\nDigite as coordenadas do segundo retângulo respectivamente: (x0, x1, y0, y1) " << endl;
        cin >> r2x0;
        cin >> r2x1;
        cin >> r2y0;
        cin >> r2y1;


        cout << endl;
        cout << "Resultado: (0: não se interceptam, 1: se interceptam)" << endl;

        if(r2x0 >= r1x1 || r2x1 <= r1x0 || r2y0 >= r1y1 || r2y1 <= r1y0){
            cout << 0;
        } else{
            cout << 1;
        }

}