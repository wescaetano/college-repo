#include <iostream>

using namespace std;


void contador(int n, int cont=0);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n=0;

    cout << "Digite um número: " << endl;
    cin >> n;

    contador(n);

}

void contador(int n, int cont){
    if(cont > n) return;
    if(cont < n){
        cout << cont << ", ";
    }
    if(cont == n){
        cout << cont;
    }
    
    contador(n, ++cont);

}