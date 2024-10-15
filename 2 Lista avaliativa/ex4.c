#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");
  
  char vetA[5][100];
  char nomeProduto[100]; 
  int vetB[5];
  int menor10=0, somaValores=0, maiorQueAMedia=0, maiorValor=0;
  float mediaValores=0.0;

  for(int i=0; i < 5; i++) {
    printf("\nDigite o nome de um produto: (serão 5 produtos)");
    fgets(vetA[i], sizeof(vetA[i]), stdin);
  }

  for(int i=0; i < 5; i++) {
    printf("\nDigite o valor do produto %s", vetA[i]);
    scanf("%d", &vetB[i]);
    getchar(); 

    if(i == 0) {
      maiorValor = vetB[i];
    }
  }

  for(int i=0; i < 5; i++) {
    //Media dos valores
    somaValores += vetB[i];

    // Valor menor que 10
    if(vetB[i] < 10) {
      menor10++;
    }

    // Maior valor
    if(vetB[i] > maiorValor) {
      maiorValor = vetB[i];
      strcpy(nomeProduto, vetA[i]); 
    }
  }
  mediaValores = (float)somaValores / 5;
  printf("\n A media dos valores é de: %f", mediaValores);

  for(int i=0; i < 5; i++) {
    if(vetB[i] > mediaValores){
      maiorQueAMedia++;
    }
  }

  printf("\nA Quantidade de números maiores que a media: %d", maiorQueAMedia);
  printf("\nA Quantidade de números menores que dez é de: %d", menor10);
  printf("\nO maior valor é de: %d  pertencente ao produto: %s \n\n", maiorValor, nomeProduto);

  for(int i=0; i < 5; i++){
    printf("\nNome do produto: %s valor: %d", vetA[i], vetB[i]);
  }

  return 0;
}
