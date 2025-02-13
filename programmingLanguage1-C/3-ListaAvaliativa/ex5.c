#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[7][10] = {0}; // Inicializa a matriz com 0
    int somaColuna[10] = {0}; // Inicializa o vetor de soma das colunas com 0

    // Leitura dos valores da matriz
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 10; j++) {
            printf("\nDigite um número: [%d][%d] ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma de cada coluna
    for(int j = 0; j < 10; j++) {
        for(int i = 0; i < 6; i++) {
            somaColuna[j] += matriz[i][j];
        }
        matriz[6][j] = somaColuna[j]; // Armazena a soma da coluna na última linha 
    }

    // Impressão da matriz resultante
    printf("\nMatriz resultante:\n");
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 10; j++) {
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
