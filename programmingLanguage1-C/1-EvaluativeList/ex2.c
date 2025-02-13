#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

int numero, menorNumero, numPares=0, numImpares=0, maior20=0, cont=0;
float mediaMaior20=0.0;

for(int i = 0; i < 10; i++) {
  printf("\n Digite um número: \n");
  scanf("%d", &numero);

  if(i == 0) {
    menorNumero = numero;
  }
  //Menor numero
  if(menorNumero > numero) {
    menorNumero = numero;
  }
    //Soma dos numeros pares maiores que 10
  if(numero % 2 == 0 && numero > 10) {
    numPares+= numero; 
  }
    //Soma dos numeros impares
  if(numero % 2 != 0) {
    numImpares+= numero;
  }

  if(numero > 20) {
    cont++;
    maior20+= numero;
  }
}

if(cont > 0) {
  mediaMaior20 = (float)maior20 / cont;
}

printf("\n O menor número é: \n %d", menorNumero);
printf("\n A soma dos números pares e maiores que dez é de: \n %d", numPares);
printf("\n A soma dos números impares é de: \n %d", numImpares);
if(cont > 0) {
  printf("\n Media dos números maiores que vinte é de: \n %.2f", mediaMaior20);
} else if(cont == 0) {
  printf("\n Nehum número maior que vinte foi digitado. \n");
}

}