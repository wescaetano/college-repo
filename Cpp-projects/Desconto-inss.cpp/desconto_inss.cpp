#include <iostream>
#include <iomanip> // Para usar std::setprecision
using namespace std;

// Constantes para as taxas de INSS
const float TAXA_ATE_600 = 0.0;
const float TAXA_ATE_1200 = 0.2;
const float TAXA_ATE_2000 = 0.25;
const float TAXA_ACIMA_2000 = 0.3;

// Função para calcular o desconto de INSS
float calcularDescontoINSS(float salario) {
    if (salario <= 600) {
        return salario * TAXA_ATE_600;
    } else if (salario <= 1200) {
        return salario * TAXA_ATE_1200;
    } else if (salario <= 2000) {
        return salario * TAXA_ATE_2000;
    } else {
        return salario * TAXA_ACIMA_2000;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, desconto;

    cout << "Digite o valor do seu salário: ";
    cin >> salario;

    desconto = calcularDescontoINSS(salario);

    if (desconto == 0.0) {
        cout << "Isento da cobrança de INSS" << endl;
    } else {
        cout << fixed << setprecision(2); // Formatação para duas casas decimais
        cout << "O valor do INSS cobrado foi de: R$ " << desconto << endl;
        cout << "Salário líquido: R$ " << (salario - desconto) << endl;
    }

    return 0;
}
