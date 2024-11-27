#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int matriz[4][3], somaLinha2=0, somaLinha4=0, total2e4=0, primos=0, cont=0, somaMatriz=0, maiorNumero=0;
  float mediaMatriz=0.0;

  //Preenchendo a matriz
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      printf("\nDigite um número [%d][%d]:",i,j);
      scanf("%d", &matriz[i][j]);
      cont++;
    }
  }

  //For para fazer as operações
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){

      if(i == 0 && j == 0){
        maiorNumero = matriz[i][j];
      }

      if(matriz[i][j] > maiorNumero){
        maiorNumero = matriz[i][j];
      }

      //If's para somar os valores da segunda linha e os da quarta
      if(i == 1){
        somaLinha2 += matriz[i][j];
      }

      if(i == 3){
        somaLinha4 += matriz[i][j];
      }

      //Quantidade de números primos
      if(matriz[i][j] % 3 == 0){
        primos++;
      }

      //Soma dos valores da matriz
      somaMatriz += matriz[i][j];
    }
  }

  if(cont > 0) {
    mediaMatriz = (float)somaMatriz / cont;
    printf("\nA media de todos os números da matriz é de: %.1f ", mediaMatriz);
    } 

  total2e4 = somaLinha2 + somaLinha4;
  printf("\nA soma dos valores da linha 2 e 4 são de: %d", total2e4);
  printf("\nA quantidade de números primos é de: %d", primos);
  printf("\nO maior número da matriz é: %d", maiorNumero);


}