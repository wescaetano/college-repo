#include <iostream>
#include <locale>

using namespace std;

int fibonacci(int n);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n=0;

    cout << "Digite um número: " << endl;
    cin >> n;

    cout << "O fibonacci de " << n << " é: " << fibonacci(n); 
}

int fibonacci(int n){

if(n==0) return 0;
if(n==1) return 1;
return fibonacci(n-1) + fibonacci(n-2);    

}