#include <string.h>

double salBruto(double valorHora, int qtdHoras, char *mdlContratacao, char *nome){
    double salarioBruto = 0.0;

    if (strcmp(mdlContratacao, "pj") == 0) {
        salarioBruto = valorHora * 1.3 * qtdHoras;
    } 
    else if (strcmp(mdlContratacao, "pf") == 0 || strcmp(mdlContratacao, "clt") == 0) {
        salarioBruto = valorHora * qtdHoras;
    }
    return salarioBruto;
}
