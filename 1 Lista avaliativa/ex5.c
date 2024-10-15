#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int numero, contMaior10=0, somaMult5=0, somaMaiores10=0, numPrimos=0;
  float mediaImpares=0.0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um número: \n");
    scanf("%d", &numero);

    //media dos impares maiores que 10
    if(numero % 2 != 0 && numero > 10) {
      contMaior10++;
      somaMaiores10+= numero;
    }

    //soma dos multiplos de 5
    if(numero % 5 == 0) {
      somaMult5+= numero;
    }

    //quantidade de números primos
    int divisores=0;
    for(int j = 1; j <= numero; j++) {
      if(numero % j == 0) {
        divisores++;
      }
    }
    if(divisores == 2) {
      numPrimos++;
    }
  }

  if(contMaior10 > 0) {
    mediaImpares = (float)somaMaiores10 / contMaior10;
    printf("\nA media dos números ímpares maiores que dez é de: %.1f", mediaImpares);
  }
  printf("\nA soma dos números multiplos de cinco é de: %d", somaMult5);
  printf("\nA quantidade de números primos é de: %d", numPrimos);

return 0;
}