#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero, cont=0, somaMult3=0, entre10e20=0, somaPrimos=0, contPrimos=0;
    float mediaMult3=0.0;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite um número: \n");
        scanf("%d", &numero);

        // 
        if (numero % 3 == 0 && numero > 10) {
            cont++;
            somaMult3 += numero;

        }

        // Contagem de números entre 10 e 20
        if (numero > 10 && numero < 20) {
            entre10e20++;
        }

        // Verificação e soma dos números primos
        int divisores = 0;
        for (int j = 1; j <= numero; j++) {
            if (numero % j == 0) {
                divisores++;
            }
        }
        if (divisores == 2) { 
            somaPrimos += numero;
            contPrimos++;
        }
    }

    if(cont > 0) {
    mediaMult3 = (float)somaMult3 / cont;
    }

    printf("\nA média dos números multiplos de três e maiores que dez é: %.2f", mediaMult3);
    printf("\nA quantidade de números entre dez e vinte é: %d", entre10e20);
    printf("\nA soma dos números primos é: %d", somaPrimos);

    return 0;
}
