#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo = 0, ndeDias, totalDiaria, somatorio = 0;
    string nome;

    cout << "Digite 0 no código para encerrar." << endl;

    do {
        cout << "Digite o código do cliente, nome e número de dias:" << endl;
        cout << "Código do cliente: ";
        cin >> codigo;

        if (codigo == 0) {
            break; 
        }

        cin.ignore(); // Clear the input buffer

        cout << "Nome: ";
        getline(cin, nome);

        cout << "Quantidade de dias: ";
        cin >> ndeDias;

        if (ndeDias < 10) {
            totalDiaria = (30 + 15) * ndeDias;
        } else {
            totalDiaria = (30 + 8) * ndeDias;
        }

        cout << "Valor total com taxa diária: " << totalDiaria << endl;

        somatorio += totalDiaria;
    } while (codigo != 0); // Added missing semicolon

    cout << "O valor total arrecadado pela pousada é de: " << somatorio << endl;

    return 0;
}
