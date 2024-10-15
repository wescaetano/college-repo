#include <stdio.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int menorIdade, cont=0, somaIdades=0, cont20e30=0, contMaiorMedia=0;
  int idade[10];
  float mediaIdade=0.0; 

  for(int i=0; i < 10; i++){
    printf("Digite uma idade: \n");
    scanf("%d", &idade[i]);

    //Media idades
    cont++;
    somaIdades += idade[i];


     //Menor idade
    if(i==0){
      menorIdade = idade[i];
    }

    if(idade[i] < menorIdade){
      menorIdade = idade[i];
    }

    //Quantidade de pessoas entre 20 e 30 anos
    if(idade[i] >= 20 && idade[i] <= 30){
      cont20e30++;
    }


  }

  //Menor idade
  printf("\nA menor idade é de: %d", menorIdade);

  //Media idades
  if(cont > 0){
    mediaIdade = (float)somaIdades / cont;
    printf("\nA media das idades é de: %.1f", mediaIdade);
  }

  //Maior que a media
  for(int j=0; j < 10; j++){
    if(idade[j] > mediaIdade){
      contMaiorMedia++;
    }
  }

  printf("\nA quantidade de pessoas com idade maior que a media é de: %d", contMaiorMedia);

  if(cont20e30 > 0){
    printf("\nA quantidade de pessoas entre 20 e 30 anos é de: %d", cont20e30);
  }

}