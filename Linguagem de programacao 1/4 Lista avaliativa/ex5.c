#include <stdio.h>
#include <locale.h>
#include <string.h> // Para usar strcspn

float media_alunos(float notas[4]);
void impressao_notas(float notas[5][4]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float notas[5][4];
    char nome[5][100];

    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do %d° aluno: ", i + 1);
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0'; 
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("\nDigite a %d° nota do aluno %s: ", j + 1, nome[i]);
            scanf("%f", &notas[i][j]);
        }
    }


    for (int i = 0; i < 5; i++) {
        float media = media_alunos(notas[i]); 
        printf("\nA média do aluno %s é: %.1f", nome[i], media);
    }

    // Impressão das notas de todos os alunos
    impressao_notas(notas);

    return 0;
}

// Calcula a média das 4 notas de um aluno
float media_alunos(float notas[4]) {
    float soma = 0.0;
    for (int i = 0; i < 4; i++) { 
        soma += notas[i];
    }
    return soma / 4;
}

// Imprime todas as notas da matriz de notas
void impressao_notas(float notas[5][4]) {
    printf("\n\nNotas de todos os alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: ", i + 1); 
        for (int j = 0; j < 4; j++) {
            printf("%.1f\t", notas[i][j]); 
        }
        printf("\n"); 
    }
}
