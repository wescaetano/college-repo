#include <iostream>

using namespace std;

int mult(int n1, int n2);

int main(){
setlocale(LC_ALL, "Portuguese");
int n1, n2;
cout << "Digite dois números para saber a multiplicação entre eles: " << endl;
cin >> n1;
cin >> n2;

cout<< "Resultado de " << n1 << "x" << n2 << ": " << mult(n1, n2) << endl;

}

int mult(int n1, int n2){
    //Caso um dos números seja 0
    if(n1==0 || n2==0){
        return 0;
    }
    //Multiplicação de qualquer n por 1 é ele msm
    if(n2 == 1){
        return n1;
    } else{
        return n1 + mult(n1, n2-1);
    }
}