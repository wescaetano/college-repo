#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[10];

    printf("Digite o seu nome: ");
    scanf("%s", &nome); 

    printf(nome);
}