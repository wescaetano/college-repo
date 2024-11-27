#include <stdio.h>
#include <locale.h>

int num_perfeito(int num);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 0;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &num);

    if (num_perfeito(num)) {
        printf("\nO número %d é perfeito\n", num);
    } else {
        printf("\nO número %d não é perfeito\n", num);
    }

    return 0;
}

int num_perfeito(int num) {
    int somaDivisores = 0;

    // Operação para saber se o número é perfeito
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    // Verificação se é um número perfeito
    return num == somaDivisores;
}
