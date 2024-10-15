#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int idade[5], idadeMenorAltura=0, contMaior180=0, somaMaior180=0,  maiorIdade=0, idadeMaiorMedia=0, soma=0, cont=0;
  float altura[5], menorAltura=0.0,mediaIdade=0.0, mediaIdadeGeral=0.0;


  for(int i=0; i < 5; i++) {
    printf("\nDigite a idade da %d° pessoa: ", i+1);
    scanf("%d", &idade[i]);
    getchar();

    printf("\nDigite a altura da %d° pessoa: ", i+1);
    scanf("%f", &altura[i]);
    getchar();
  }

  for(int i=0; i < 5; i++) {

    // Menor altura & menor idade
    if(i == 0) {
      menorAltura = altura[i];
      idadeMenorAltura = idade[i];
      maiorIdade = idade[i];
    }

    if(altura[i] < menorAltura) {
      menorAltura = altura[i];
      idadeMenorAltura = idade[i];
    }

    if(altura[i] > 1.80) {
      somaMaior180 += idade[i];
      contMaior180++;
    }

    if(idade[i] >  maiorIdade) {
      maiorIdade = idade[i];
    }

    soma += idade[i];
    cont++;
  }

  if(cont > 0) {
    mediaIdadeGeral = (float)soma / cont;
    printf("\nA media de todas as idades é de: %.0f", mediaIdadeGeral);  
  }

  // Media idades maior 1,80
  if(contMaior180 > 0) {
    mediaIdade = (float)somaMaior180 / contMaior180;
    printf("\nA media das idades das pessoas com mais de 1,80m é de: %.0f", mediaIdade);
  }

  for(int i=0; i < 5; i++) {
    if(idade[i] > mediaIdade) {
      idadeMaiorMedia++;
    }
  }

  printf("\nA quantidade de pessoas com a idade maior que a media: %d", idadeMaiorMedia);
  printf("\nA menor altura é de: %.2f e a idade dessa pessoa é de: %d", menorAltura, idadeMenorAltura);
  printf("\nA maior idade é de: %d", maiorIdade);

}
