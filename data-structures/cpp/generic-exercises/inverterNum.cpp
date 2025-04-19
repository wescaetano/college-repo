#include <iostream>
#include <string>
#include <locale>

using namespace std;

int inverter(int n, int total);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n;
    cout << "Digite um número: " << endl;
    cin >> n;

    cout << "Número invertido: " << inverter(n, 0);

}

int inverter(int n, int total){
    if(n==0){
        return total;
    }
    return inverter(n / 10, total * 10 + n % 10);
    
}
