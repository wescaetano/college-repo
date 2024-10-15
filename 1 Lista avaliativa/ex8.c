#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int numero;

printf("\n Digite um número para saber a tabuada desse número.");
printf("\n");

  for(int i=1; i <= 10; i++){
    printf("\n\nDigite um número:\n");
    scanf("%d", &numero);

    if(numero < 1){
      printf("\n Digite apenas números positivos.\n");
    }


    for(int j = 1; j <= 10; j++){
      printf("\nVezes %d: %d", j, numero * j);
    }
    }
  }
