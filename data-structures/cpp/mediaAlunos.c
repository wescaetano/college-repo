#include <stdio.h>
#include <locale.h>
#include <string.h>


 void media(double p1, double p2, double listas); 
 void sub(double p1, double p2, double listas);
int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    double p1 = 0.0, p2 = 0.0, listas = 0.0;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';

    printf("Informe a nota da P1: ");
    scanf("%lf", &p1);
    
    printf("Informe a nota da P2: ");
    scanf("%lf", &p2);

    printf("Informe a pontuação das listas (0-5): ");
    scanf("%lf", &listas);

     media(p1, p2, listas);
     
    return 0;
}

void media(double p1, double p2, double listas){
    double media = p1 * 0.35 + p2 * 0.35 + listas;
    if (media >= 6.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno precisará de substitutiva\n");
        sub(p1, p2, listas);
    }
}

void sub(double p1, double p2, double listas){
    double media=0.0;
    if (p1 < p2) {
        printf("Digite a nota substitutiva da P1: ");
        scanf("%lf", &p1);
    } else if (p2 < p1) {
        printf("Digite a nota substitutiva da P2: ");
        scanf("%lf", &p2);
    }

    media = p1 * 0.35 + p2 * 0.35 + listas;
    
    if(media >= 6){
        printf("Aluno aprovado com sub.  media: %.2f", media);
    } else{
        printf("Aluno reprovado. media: %.2f", media);
    } 
}
