#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

int idade, salario, contEntre20e30=0, somaEntre20e30=0, maiorSalario=0, idadeDoMaiorSal=0, contMais5000=0, totalPessoas=0;
float mediaEntre20e30=0.0, porc5000=0.0;

  do{
    printf("\nQual é sua idade:\n");
    scanf("%d", &idade);
    printf("\nQual é seu salário:\n");
    scanf("%d", &salario);

    if(idade <= 0 || salario < 0){
      printf("\nEntrada inválida.\n");
      break;
    }
    
    totalPessoas++;

    //maior salário e idade
    if(salario > maiorSalario){
      maiorSalario = salario;
      idadeDoMaiorSal = idade;
    }

    //media salário entre 20 e 30 anos
    if(idade > 20 && idade < 30){
      contEntre20e30++;
      somaEntre20e30+= salario;
    }

    if(salario > 5000){
      contMais5000++;
    } 


  } while(idade > 0);

  if(contEntre20e30 > 0){
    mediaEntre20e30 = (float)somaEntre20e30 / contEntre20e30;
    printf("\nA media dos salários das pessoas entre 20 e 30 anos é de: %.1f\n", mediaEntre20e30);
  }
  if(contMais5000 > 0){
    porc5000 = ((float)contMais5000 / totalPessoas) * 100;
    printf("\nA porcentagem de pessoas que ganham mais de 5000 é de: %.2f porcento\n", porc5000);
  }
  printf("\n O maior salário é de: %d, e a idade dessa pessoa é de: %d\n", maiorSalario, idadeDoMaiorSal);

}