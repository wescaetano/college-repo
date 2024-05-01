#include <stdio.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	float salario, desc;
	
	cout << "Digite o valor de seu salário: " << endl;
	cin >> salario;
	
	if (salario <= 600) {
		cout << "Isento a cobrança de INSS" << endl;
	} else if (salario > 600 && salario <= 1200) {
		cout << " O valor do INSS cobrado foi de 20% " << endl;
		desc = salario - (salario * 0.2 );
		cout << desc;
	} else if (salario > 1200 && salario <= 2000) {
		cout << "O valor do INSS cobrado foi de 25% " << endl;
		desc = salario - (salario * 0.25);
		cout << desc;
	} else {
		cout << "O valor do INSS cobrado foi de 30% " << endl;
		desc = salario - (salario * 0.30);
		cout << desc;
	}
	
}
