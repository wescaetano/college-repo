#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "valDeslocamento.h"
#include "salarioValorHora.h"
#include "salarioBruto.h"
#include "totalDesconto.h"
#include "totalSalarioLiquido.h"




int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[50], mdlContratacao[4];
    int qtdHoras = 0, regiao = 0;
    double valorHora = 0.0, km = 0.0, salarioBruto = 0.0;

    
    printf("\nDigite o nome do funcionário: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; 

    printf("\nQual o valor por hora do funcionário: ");
    scanf("%lf", &valorHora);

    printf("\nQual a quantidade de horas trabalhadas: ");
    scanf("%d", &qtdHoras);

    printf("\nQuantos quilômetros rodados: ");
    scanf("%lf", &km);

    printf("\nQual o tipo de contratação (pf/pj/clt): ");
    scanf(" %3s", mdlContratacao);

    printf("\nQual a região do funcionário (1,2,3,4): ");
    scanf("%d", &regiao);

   
    printf("\n===== Informações do Funcionário =====");
    printf("\nNome do funcionário: %s", nome);
    printf("\nValor de deslocamento: %.2lf", deslocamento(km));
    printf("\nTotal salário valor/hora: R$%.2lf", salValHora(valorHora, qtdHoras));
    printf("\nTotal salário Bruto: R$%.2lf", salBruto(valorHora, qtdHoras, mdlContratacao, nome));
    printf("\nTotal de descontos na região: %.2lf", totalDesc(valorHora, qtdHoras, mdlContratacao));
    printf("\nTotal salário liquido: %.2lf", totalSalLiquido(valorHora, qtdHoras, mdlContratacao, regiao) - totalDesc(valorHora, qtdHoras, mdlContratacao));

    

    return 0;
}
