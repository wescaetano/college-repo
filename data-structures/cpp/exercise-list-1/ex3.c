#include <stdio.h>
#include <locale.h>
#include <string.h>


void deslocamento(double km){
    printf("\nTotal de deslocamento: R$%.2lf", km * 0.51);
}

double salValHora(double valorHora, int qtdHoras){
    return valorHora * qtdHoras;
}

double salBruto(double valorHora, int qtdHoras, char *mdlContratacao, char *nome){
    double salarioBruto = 0.0;

    if (strcmp(mdlContratacao, "pj") == 0) {
        salarioBruto = valorHora * 1.3 * qtdHoras;
        printf("\nO valor do INSS será recebido pelo trabalhador: %s", nome);
    } 
    else if (strcmp(mdlContratacao, "pf") == 0 || strcmp(mdlContratacao, "clt") == 0) {
        salarioBruto = valorHora * qtdHoras;
    }

    printf("\nSalário Bruto: R$%.2lf", salarioBruto);
    return salarioBruto;
}

double totalDesc(double valorHora, int qtdHoras, char *mdlContratacao){
    double totalDesc = 0.0;

    if (strcmp(mdlContratacao, "pj") == 0) {
        totalDesc = 0.0;
    } 
    else if (strcmp(mdlContratacao, "pf") == 0) {
        totalDesc = valorHora * 0.06 * qtdHoras;
    } 
    else if (strcmp(mdlContratacao, "clt") == 0) {
        totalDesc = (valorHora * qtdHoras * 0.08) + 0.05;
    }

    printf("\nTotal Descontos: R$%.2lf", totalDesc);
    return totalDesc;
}

double totalSalLiquido(double valorHora, int qtdHoras, char *mdlContratacao, int regiao){
    double totalLiq = 0.0;
    double txReg = 0.0;

    if (regiao == 1 || regiao == 2) {
        txReg = 0.0374;
    } else if (regiao == 3 || regiao == 4) {
        txReg = 0.0575;
    } else {
        txReg = 0.0225;
    }

    if (strcmp(mdlContratacao, "pj") == 0) {
        totalLiq = (valorHora * 1.3 * qtdHoras) - (txReg * valorHora * qtdHoras);
    } 
    else if (strcmp(mdlContratacao, "pf") == 0) {
        totalLiq = (valorHora * qtdHoras) - (txReg * valorHora * qtdHoras);
    } 
    else if (strcmp(mdlContratacao, "clt") == 0) {
        double desconto = totalDesc(valorHora, qtdHoras, mdlContratacao);
        totalLiq = (valorHora * qtdHoras) - desconto - (txReg * valorHora * qtdHoras);
    }

    printf("\nTotal Líquido: R$%.2lf", totalLiq);
    return totalLiq;
}


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
    deslocamento(km);

    double salarioHora = salValHora(valorHora, qtdHoras);
    printf("\nTotal salário valor/hora: R$%.2lf", salarioHora);

    salarioBruto = salBruto(valorHora, qtdHoras, mdlContratacao, nome);

    printf("\nTotal de descontos na região: ");
    totalDesc(valorHora, qtdHoras, mdlContratacao);

    totalSalLiquido(valorHora, qtdHoras, mdlContratacao, regiao);

    return 0;
}
