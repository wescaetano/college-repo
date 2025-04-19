#include "variaveis.h"
#include "div.h"
#include "multi.h"
#include "soma.h"
#include "sub.h"

int main(){
    printf("Informe um número: ");
    scanf("%lf", &num1);

    printf("Informe um segundo número: ");
    scanf("%lf", &num2);

     printf("\nO resultado da soma: %.2lf", soma(num1, num2));
     printf("\nO resultado da multiplicação: %.2lf", multi(num1, num2));
     printf("\nO resultado da subtração: %.2lf", sub(num1, num2));
     printf("\nO resultado da divisão: %.2lf", div(num1, num2));


}