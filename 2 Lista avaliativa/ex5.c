#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomes[5][100], vendedorMaiorComissao[100];
    int maiorQueAMedia = 0;
    float valores[5], valorTotalBruto = 0.0, mediaValores = 0.0, maiorComissao = 0.0;

    // Entrada dos dados de cada vendedor
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do vendedor %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';  

        printf("Digite o valor total das vendas do vendedor %s: ", nomes[i]);
        scanf("%f", &valores[i]);
        getchar();  // Limpar o buffer de entrada
    }

    // Cálculo do valor total bruto de vendas
    for (int i = 0; i < 5; i++) {
        valorTotalBruto += valores[i];
    }

    // Cálculo da média
    mediaValores = valorTotalBruto / 5;

    // Exibe valores e calcula maior comissão e vendedores acima da média
    for (int i = 0; i < 5; i++) {
        float comissaoAtual = valores[i] * 0.10;
        float valorTotalPorVendedor = valores[i] + comissaoAtual;
        
        printf("\nValor total das vendas mais o acréscimo de 10%% referente ao vendedor %s é: %.2f", nomes[i], valorTotalPorVendedor);

        // Verifica se o vendedor vendeu acima da média
        if (valores[i] > mediaValores) {
            maiorQueAMedia++;
        }

        // Atualiza o vendedor com a maior comissão
        if (comissaoAtual > maiorComissao) {
            maiorComissao = comissaoAtual;
            strcpy(vendedorMaiorComissao, nomes[i]);
        }
    }

    // Exibe os resultados finais
    printf("\n\nO valor total bruto das vendas é de: %.2f", valorTotalBruto);
    printf("\nA média das vendas é: %.2f", mediaValores);
    printf("\nQuantidade de vendedores que venderam acima da média: %d", maiorQueAMedia);
    printf("\nA maior comissão é de: %.2f recebida pelo vendedor: %s\n", maiorComissao, vendedorMaiorComissao);

    return 0;
}
