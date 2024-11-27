    #include <stdio.h>
    #include <string.h>
    #include <locale.h>

    int main () {
    setlocale(LC_ALL, "Portuguese");

    int matriz[5][3], somaVendas[5] = {0}, maiorVenda1, menorVenda3, totalVendas = 0;
    char nome[5][100];

    // Preenchendo os nomes dos vendedores
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do %d° vendedor: ", i+1);
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = 0; // Remove o caractere de nova linha
    }

    // Preenchendo a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\nDigite o valor vendido pelo %d° vendedor no %d° mês: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializando maiorVenda1 e menorVenda3 com os primeiros valores correspondentes
    maiorVenda1 = matriz[0][0];
    menorVenda3 = matriz[0][2];

    // Fazendo as operações
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            // Soma vendas feitas nos três meses por cada vendedor
            somaVendas[i] += matriz[i][j];

            // Maior venda do mês 1
            if (j == 0 && matriz[i][j] > maiorVenda1) {
                maiorVenda1 = matriz[i][j];
            }

            // Menor venda do mês 3
            if (j == 2 && matriz[i][j] < menorVenda3) {
                menorVenda3 = matriz[i][j];
            }

            // Total vendido por todos os vendedores
            totalVendas += matriz[i][j];
        }
    }

    // Exibindo os resultados
    for (int i = 0; i < 5; i++) {
        printf("\nO total vendido pelo vendedor %s é de: %d", nome[i], somaVendas[i]);
    }

    printf("\nA maior venda do primeiro mês foi de: %d", maiorVenda1);
    printf("\nA menor venda do terceiro mês foi de: %d", menorVenda3);
    printf("\nO total vendido por todos os vendedores foi de: %d\n", totalVendas);

    return 0;
    }
