#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  char nome[10][100], nomeMaiorNota[100];
  int contMenor5=0, somaNotas=0, cont=0, contMaior5=0;
  float nota[10], mediaNotas=0.0, maiorNota=0.0;

  for(int i=0; i < 10; i++) {
    printf("\nDigite o %d° nome: ", i+1);
    fgets(nome[i], sizeof(nome[i]), stdin);
    nome[i][strcspn(nome[i], "\n")] = '\0';

    printf("\nDigite a nota do aluno %s:", nome[i]);
    scanf("%f", &nota[i]);
    getchar();
  }

  for(int i=0; i < 10; i++) {
    if(i == 0) {
      maiorNota = nota[i];
      strcpy(nomeMaiorNota, nome[i]);
    }

    // Menor que 5 
    if(nota[i] < 5) {
      contMenor5++;
    }

    // Somatório notas
    somaNotas += nota[i];
    cont++;
  }

  // Media notas
  if(cont > 0) {
    mediaNotas = (float)somaNotas / cont;
    printf("\nA media das notas são: %.1f", mediaNotas);
  }

  for(int i=0; i < 10; i++) {
    if(nota[i] > mediaNotas) {
      contMaior5++;
    }

    // Maior nota
    if(nota[i] > maiorNota) {
      maiorNota = nota[i];
    }
  }

    printf("\nA quantidade de notas menores que cinco são de: %d", contMenor5);
    printf("\nA maior nota é de: %.1f", maiorNota);   
    printf("\nQuantidade de notas acima da media cinco: %d", contMaior5);  

}