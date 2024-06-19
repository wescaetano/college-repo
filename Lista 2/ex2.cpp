#include <iostream>
using namespace std;

int main()
{
    int i;
    float salario;
    string nome;
    for(i=1; i<=8; i++) {
        cout << "Informe o nome e salario do funcionario" << endl;
        cout << "Nome: ";
        cin >> nome;
        cout << "Salario: ";
        cin >> salario;
        
            if(salario <= 1550){
                salario = salario + salario*0.15;
                cout << "Funcionario: " << nome << endl;
                cout << "Salario com reajuste te 15%: " << salario << endl; }

            else if(salario > 1550 && salario <= 3000){
                salario = salario + salario*0.1;
                cout << "Funcionario: " << nome << endl;
                cout << "Salario com reajuste te 10%: " << salario << endl; }

            else {
                salario = salario + salario*0.05;
                cout << "Funcionario: " << nome << endl;
                cout << "Salario com reajuste te 5%: " << salario << endl; }
    }
    cout << "Fim do programa";
}