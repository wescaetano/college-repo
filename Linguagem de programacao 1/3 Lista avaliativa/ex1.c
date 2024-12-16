#include <stdio.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int matriz[3][5], menorNumero, somaMult3=0, maiorNumColuna2, somaNum=0, contNum=0;
  float mediaNum=0.0;

  // Preenchendo a matriz
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){
      printf("\nDigite um número [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Inicializando menorNumero e maiorNumColuna2 com o primeiro valor relevante
  menorNumero = matriz[0][0];          
  maiorNumColuna2 = matriz[0][2];     

  // Fazendo as operações
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){

      somaNum += matriz[i][j];
      contNum++;

      // Menor número da matriz
      if(matriz[i][j] < menorNumero) {
        menorNumero = matriz[i][j];
      }

      // Soma dos múltiplos de três
      if(matriz[i][j] % 3 == 0) {
        somaMult3 += matriz[i][j];
      }

      // Maior número da terceira coluna (coluna de índice 2)
      if(j == 2 && matriz[i][j] > maiorNumColuna2) {
        maiorNumColuna2 = matriz[i][j];
      }
    }
  }


  if(contNum > 0) {
    mediaNum = (float)somaNum / contNum;
    printf("\nA media dos números da matriz é de: %.1f", mediaNum);
  }
  
  // Exibindo os resultados
  printf("\nMenor número da matriz: %d", menorNumero);
  printf("\nSoma dos múltiplos de 3: %d", somaMult3);
  printf("\nMaior número da terceira coluna: %d", maiorNumColuna2);

  return 0;
}
