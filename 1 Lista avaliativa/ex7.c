#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int idade, maiorIdade=0, menorIdade=0, menores10=0, cont=0, somaIdades=0;
  float mediaIdades=0.0;

  do{
    printf("\n Digite uma idade: \n");
    scanf("%d", &idade);
    

    if(idade <= 0){
    printf("\n Valor inválido.");
    }

    
    if(idade > 0) {
      menorIdade = idade;
      //media das idades
      cont++;
      somaIdades+= idade;

      //maior idade
      if(idade > maiorIdade){
        maiorIdade = idade;
      }

      //menor idade
      if(idade < menorIdade){
        menorIdade = idade;
      }

      if(idade < 10){
        menores10++;
      }
    }
  } while(idade > 0);

    if(cont > 0){
      mediaIdades= (float)somaIdades / cont;
      printf("\n A media das idades é de: %.1f", mediaIdades);
    }

    printf("\n A maior idade é: %d", maiorIdade);
    printf("\n A menor idade é: %d", menorIdade);
    printf("\n A quantidade de idades menores que 10 são: %d", menores10);

}