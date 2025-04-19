#include <iostream>
#include <locale>

using namespace std;

int fibonacci(int n);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n=0;

    cout << "Digite um número para saber a posição na seq. fibonacci: " << endl;
    cin >> n;

    cout << n << "° número na seq. de fibonacci: " << fibonacci(n);
}

    int fibonacci(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return fibonacci(n-1) + fibonacci(n-2);
    }