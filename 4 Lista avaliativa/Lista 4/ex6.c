#include <stdio.h>
#include <locale.h>

char e_primo(int num);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    char resultado;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    resultado = e_primo(num);
    printf("\nO número é primo? (S= sim N= não): %c\n", resultado);

    return 0;
}

char e_primo(int num) {
    if (num <= 1) {
        return 'N'; // Números menores ou iguais a 1 não são primos
    }

    int divisores = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        return 'S'; // Primo
    } else {
        return 'N'; // Não é primo
    }
}
