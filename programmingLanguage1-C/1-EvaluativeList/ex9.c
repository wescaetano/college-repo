#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

int idade, peso, maiorPeso=0, contMaior70kg=0, contIdades=0, contIdade30=0, somaIdades=0, somaMaior30=0;
float mediaIdades=0.0, medEntre30e40=0.0;

  for(int i=0; i < 10; i++){
    printf("\n Questionario: \n");
    printf("\n");
    printf("\n Digite sua idade: \n");
    scanf("%d", &idade);
    printf("\n Digite seu peso: \n");
    scanf("%d", &peso);

    if(idade <= 0 || peso <= 0){
      printf("\nValor inválido.");
      break;
    }
    if(idade > 0 && peso > 0){
      contIdades++;
      somaIdades+= idade;

    if(maiorPeso < peso){
      maiorPeso = peso;
    }

    if(idade > 30 && idade < 40){
      contIdade30++;
      somaMaior30+= idade;
    }

    if(peso > 70){
      contMaior70kg++;
    }
    }
  }
  if(contIdades > 0){
    mediaIdades = (float)somaIdades / contIdades;
    printf("\nA media das idades é de: %.1f\n", mediaIdades);
  }
  if(contIdade30 > 0){
    medEntre30e40 = (float)somaMaior30 /  contIdade30;
    printf("\nA media das idades entre 30 e 40 é de: %.1f\n", medEntre30e40);
  }
  printf("\nO maior peso é de: %d\n", maiorPeso);
  printf("\nA quantidade de pessoas com peso superior a 70kg é de: %d\n", contMaior70kg);
}