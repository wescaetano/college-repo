#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char cores[5][100];
    char cor[15];

    // Armazena as dez cores
    for (int i = 0; i < 5; i++) {
        printf("\nDigite uma cor: \n");
        fgets(cores[i], sizeof(cores[i]), stdin);
        // Remove o caractere de nova linha, se presente
        cores[i][strcspn(cores[i], "\n")] = 0;
    }

    // Busca uma cor no array 'cores'
        printf("\nDigite uma cor para ser buscada no array: (Digite 'fim' para encerrar a busca) ");
        fgets(cor, sizeof(cor), stdin);
        cor[strcspn(cor, "\n")] = 0;

    // Encerrar o programa ao digitar 'fim'
        if (strcmp(cor, "fim") == 0) {
            return 0; 
        }

    
    // Encontra e imprime a cor e o índice na tela
    int encontrado = 0;
    for (int j = 0; j < 5; j++) {
        if (strcmp(cores[j], cor) == 0) {
            printf("\n \nA cor '%s' existe no vetor e está armazenada no índice: %d\n", cores[j], j);
            encontrado = 1;
            break;
        }
    }

    return 0;
}
