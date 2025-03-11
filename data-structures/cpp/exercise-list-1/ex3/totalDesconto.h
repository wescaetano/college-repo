#include <string.h>

double totalDesc(double valorHora, int qtdHoras, char *mdlContratacao){
    double total = 0.0;

    if (strcmp(mdlContratacao, "pj") == 0) {
        total= 0.0;
    } 
    else if (strcmp(mdlContratacao, "pf") == 0) {
        total= valorHora * 0.06 * qtdHoras;
    } 
    else if (strcmp(mdlContratacao, "clt") == 0) {
        total= (valorHora * qtdHoras * 0.08) + 0.05;
    }

    return total;
}
