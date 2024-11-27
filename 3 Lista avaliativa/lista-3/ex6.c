#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int cont=0, cont20e30=0, somaFilhos=0;
  float matriz[10][3], somaSalarios=0.0, mediaSal20e30=0.0, somaSalario20e30=0.0, mediaSalarios=0.0, mediaFilhos=0.0;

  // for para preencher a matriz
  for(int i=0; i<10; i++){
      printf("\nDigite a idade [%d]: ", i);
      scanf("%f", &matriz[i][0]);

      printf("\nDigite o salário [%d]: ", i);
      scanf("%f", &matriz[i][1]);

      printf("\nDigite o número de filhos [%d]: ", i);
      scanf("%f", &matriz[i][2]);

      cont++;
  }

  // for para realizar as operações
  for(int i=0; i<10; i++){
      // Calculando a média dos salários da população
      somaSalarios += matriz[i][1];

      // Calculando a média do número de filhos
      somaFilhos += matriz[i][2];

      // Quantidade de filhos de quem tem entre 15 e 25 anos 
      if(matriz[i][0] >= 15 && matriz[i][0] <= 25){
        printf("\nPessoa com idade entre 15 e 25 anos tem %0.f filhos.", matriz[i][2]);
      }

      // Média de salários das pessoas que têm entre 20 e 30 anos
      if(matriz[i][0] >= 20 && matriz[i][0] <= 30){
        cont20e30++;
        somaSalario20e30 += matriz[i][1];
      }
  }

  if(cont20e30 > 0){
    mediaSal20e30 = somaSalario20e30 / cont20e30;
    printf("\nA média dos salários das pessoas entre 20 e 30 anos é de: %.1f", mediaSal20e30);
  }

  if(cont > 0){
    mediaSalarios = somaSalarios / cont;
    printf("\nA média dos salários das pessoas é de: %.1f", mediaSalarios);
  }

  if(cont > 0){
    mediaFilhos = (float)somaFilhos / cont;
    printf("\nA média da quantidade de filhos é de: %.1f", mediaFilhos);
  }

  return 0;
}
