#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int numeros[10], contPrimos=0, somaMult3=0, contMult3=0, contMaior10=0;
  float mediaMult3=0.0;

  for(int i=0; i < 10; i++) {
    printf("\nDigite um número: ");
    scanf("%d", &numeros[i]);

    // Busca pelos números primos
    int divisores =0;
    for(int j=2; j <= numeros[i] / 2; j++) {
    if(numeros[i] % j == 0) {
      divisores++;
    }
  }
    if(divisores == 0) {
      contPrimos++;
    }

    // Media dos números multiplos de 3
    if(numeros[i] % 3 == 0) {
      somaMult3 += numeros[i];
      contMult3++;
    }

    // Quantidade de números impares maiores que dez
    if(numeros[i] % 2 != 0 && numeros[i] > 10) {
      contMaior10++;
    }
  }

  if(contMult3 > 0) {
    mediaMult3 = (float)somaMult3 / contMult3;
    printf("\nA media dos valores é de: %.2f", mediaMult3);
  }
  printf("\nA quantidade de números primos é de: %d", contPrimos);
  printf("\nA quantidade de números impares maiores que dez é de: %d", contMaior10);

}