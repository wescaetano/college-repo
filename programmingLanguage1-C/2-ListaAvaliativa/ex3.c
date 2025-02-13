#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int vetA[5], vetB[5], soma=0;

  for(int i=0; i < 5; i++){
    printf("\nDigite um número: (serão cinco números no vetor A)");
    scanf("%d", &vetA[i]);
  }

  for(int i=0; i < 5; i++){
    printf("\nDigite um número: (serão cinco números no vetor B)");
    scanf("%d", &vetB[i]);
  }

    int vetC[10];

    for (int i = 0; i < 5; i++){
      vetC[i] = vetA[i];
    }

    for (int i = 0; i < 5; i++) {
      vetC[5 + i] = vetB[i];
    }

    printf("Array C: ");
    for (int i = 0; i < 10; i++) {
      printf("\n %d", vetC[i]);
    }

    for (int i = 0; i < 10; i++) {
        soma = 0;
        
        // Encontrando divisores próprios de vetC[i]
        for (int j = 1; j < vetC[i]; j++) {
            if (vetC[i] % j == 0) {
                soma += j;
            }
        }

        // Se a soma dos divisores for igual ao número, é perfeito
        if (soma == vetC[i]) {
            printf("\nO número %d é perfeito e se encontra no índice %d", vetC[i], i);
        }
    }

    return 0;
}