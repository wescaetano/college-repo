#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  char nomes[10][100];
  float peso [10], menorPeso, mediaPesos;
  int somaPesos;

  for(int i=0; i < 10; i++) {
    printf("\nDigite um nome: ");
    fgets(nomes[i], sizeof(nomes[i]), stdin);
    nomes[i][strcspn(nomes[i], "\n")] = '\0';

    printf("\nDigite o peso de %s: ", nomes[i]);
    scanf("%f", &peso[i]);
    getchar();

    //Menor Peso
    if(i == 0){
      menorPeso = peso[i];
    }

    if(menorPeso > peso[i]) {
      menorPeso = peso[i];
    }

    //Inicio media
    somaPesos += peso[i];
  }

  mediaPesos = (float)somaPesos / 10;
  printf("\nA media dos pesos é de: %.2f", mediaPesos);
  printf("\nO menor peso é de: %.2f", menorPeso);


  printf("\nPessoas com o peso inferior a media de: %.2f \n", mediaPesos);
  for(int i=0; i < 10; i++) {
    if(peso[i] < mediaPesos) {
      printf("Nome: %s  peso: %.2f \n", nomes[i], peso[i]);
    }
  }


}