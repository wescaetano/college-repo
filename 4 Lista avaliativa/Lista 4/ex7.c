#include <stdio.h>
#include <locale.h>
#include <string.h> 

int numero_de_vezes(char palavra[20], char letra);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char palavra[20], letra;

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    getchar();

    printf("\nDigite uma letra para ver quantas vezes ela aparece na palavra: ");
    scanf("%c", &letra);

    int vezes = numero_de_vezes(palavra, letra);

    printf("\nA letra '%c' aparece %d vez(es) na palavra \"%s\".\n", letra, vezes, palavra);

    return 0;
}

int numero_de_vezes(char palavra[20], char letra) {
    int contador = 0;
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra) {
            contador++;
        }
    }
    return contador;
}