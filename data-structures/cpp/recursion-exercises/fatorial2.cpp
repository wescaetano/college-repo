#include <iostream>
#include <locale>

using namespace std;

int fatorial(int n);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n=0;
    cout << "Digite um número para ser seu fatorial: ";
    cin >> n;

    cout << "O fatorial de " << n << "é: " << fatorial(n);

}


int fatorial(int n){
    if(n == 0){
        return 1;
    } else{
        return n * fatorial(n-1);
    }

}