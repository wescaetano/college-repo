#include <string.h>

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
        totalLiq = (valorHora * qtdHoras) - (txReg * valorHora * qtdHoras);
    }
    
    return totalLiq;
}
