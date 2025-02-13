#include <stdio.h>
#include <locale.h>

int menor_numero(int matriz[3][5]);
int somaMult3(int matriz[3][5]);
int maior_num_terceira_Col(int matriz[3][5]);

int main() {
  setlocale(LC_ALL, "Portuguese");

  int matriz[3][5], menor=0;

  //Preenchendo a matriz
  for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
      printf("\nDigite um número [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  //Printando o menor número
  menor = menor_numero(matriz);
  printf("\nO menor número da matriz é: %d", menor);
  printf("\nA soma dos multiplos de três da ma triz é: %d", somaMult3(matriz));
  printf("\nO maior número da terceira coluna da matriz é: %d", maior_num_terceira_Col(matriz));
}

//Função para achar o menor número
int menor_numero(int matriz[3][5]){

int menorNum= matriz[0][0];

for(int i=0; i<3; i++){
  for(int j=0; j<5; j++){
    //Achando o menor número
    if(matriz[i][j] < menorNum){
      menorNum = matriz[i][j];
    }
  }
}
return menorNum;
}

//Função para retornar os números multiplos de três
int somaMult3(int matriz[3][5]){

int soma=0;

for(int i=0; i<3; i++){
  for(int j=0; j<5; j++){
    //Fazendo a soma dos múltiplos de três
    if(matriz[i][j] % 3 ==0){
      soma+= matriz[i][j];
    }
  }
}
return soma;
}

//Função para retornar o maior número da terceira coluna da matriz
int maior_num_terceira_Col(int matriz[3][5]){

int maiorNumero= matriz[0][2];

for(int i=0; i<3; i++){
  for(int j=0; j<5; j++){
    //Achando o maior número da terceira coluna
    if(matriz[i][2] > maiorNumero){
      maiorNumero = matriz[i][2];
    }
  }
}
return maiorNumero;
}