#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroTotal, x, soma = 0, ultimoNumero;

    cout << "Quantos números serão digitados? " << endl;
    cin >> numeroTotal;

    if(numeroTotal <= 0) {
    cout << "Por favor, insira um número válido maior que zero." << endl;
    return 1;
    }
    
    for (int i = 0; i < numeroTotal; i++) { 
        cout << "Digite o " << (i + 1) << "° número: " << endl;
        cin >> x; 

    if(cin.fail()) {
        cout << "Entrada inválida. Por favor, insira um número." << endl;
        return 1;
    }
        soma += x;

    if (i == numeroTotal - 1) {
        ultimoNumero = x;
    }
    }

    cout << "O resultado da soma é: " << soma << endl;

    if (ultimoNumero != 0) {
        cout << "O resultado da divisão da soma pelo último número é: " << static_cast<double>(soma) / ultimoNumero << endl;
    } else {
        cout << "Não é possivel dividir por zero." << endl;
    }

    return 0;
}
