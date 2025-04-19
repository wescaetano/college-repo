#include <stdio.h>
#include <locale.h>

double division(double n);
int main(){
    setlocale(LC_ALL, "Portuguese");

    double n=0;
    double result=0.0;
    char option[2];

    do{
        printf("\nDigite um número: ");
        scanf("%lf", &n);
        
        division(n);

        printf("\nDeseja repetir o cálculo (y/n): ");
        scanf("%s", option);

    } while(option[0] == 'y');
}

double division(double n){ 
     while(n > 0.005){
        n = n/2;
          printf("\nTotal: %.3lf", n);
     };
}