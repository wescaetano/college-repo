#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int idade, opniao,  somaOtimo=0, contRegular=0, contBom=0, contOtimo=0;
  float mediaOtimo=0.0;
  
  do{
      printf("\n Digite sua idade:");
      scanf("%d", &idade);

    if(idade > 0) {
      printf("\n Qual sua opnião sobre o filme: (1-Ótimo 2-Bom 3-Regular)\n");
      scanf("%d", &opniao);

    switch (opniao){
      case 1: //otimo
        contOtimo++;
        somaOtimo+= idade;
        break;  
      case 2: //bom
        contBom++;
        break;
      case 3: //regular
        contRegular++;
        break;
      default:
        printf("\n Valor inválido!");
        break;
    }
    }
  } while(idade > 0);

    if(contOtimo > 0){
      mediaOtimo = (float)somaOtimo / contOtimo;
      printf("\n A media das idades das pessoas que responderam ótimo é de: %.2f", mediaOtimo);
      }

    printf("\n A quantidade de pessoas que responderam bom é de: %d", contBom);
    printf("\n A quantidade de pessoas que responderam regular é de: %d", contRegular);

    return 0;
}