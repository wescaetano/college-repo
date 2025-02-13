#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  int matriz[4][4], matriz2[4][4];

  //For para preencher a primeira matriz
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      printf("\nDigite um número [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      //matriz1 coluna 2 colocada em matriz2 coluna 1
      if(j == 0){
        matriz2[i][j] = matriz[i][1];
      }
      
      //matriz1 coluna 1 colocada em matriz2 coluna 2
      if(j == 1){
        matriz2[i][j] = matriz[i][0];
      }

      //matriz1 coluna 4 colocada em matriz2 coluna 3
      if(j == 2){
        matriz2[i][j] = matriz[i][3];
      }

      //matriz1 coluna 3 colocada em matriz2 coluna 4
      if(j == 3){
        matriz2[i][j] = matriz[i][2];
      }
    }
  }

  printf("\nMATRIZ 1: \n");
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      printf("\t%d", matriz[i][j]);
    } 
    printf("\n");
  }

  printf("\nMATRIZ 2: \n");
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      printf("\t%d", matriz2[i][j]);
    } 
    printf("\n");
  }
}
