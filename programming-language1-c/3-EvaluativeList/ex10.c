#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4] = {0}, array[16] = {0}, k = 0;

    // Preenchendo a matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("\nDigite um número [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            // Transferindo os elementos da matriz para o array
            array[k++] = matriz[i][j];
        }
    }

    // Ordenando o array em ordem crescente
    for (int i = 0; i < 16 - 1; i++) {
        for (int j = 0; j < 16 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nArray ordenado: ");
    for (int i = 0; i < 16; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
