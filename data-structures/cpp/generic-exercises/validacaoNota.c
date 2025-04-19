#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1=0.0, nota2=0.0, media=0.0;


    
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);
        
        
        while(nota1<0 || nota1>10){
            printf("\nNota inválida! Tente novamente: ");
            scanf("%f", &nota1);
        }

        printf("\nDigite a segunda nota: ");
        scanf("%f", &nota2);
        
        while(nota2<0 || nota2>10){
            printf("\nNota inválida! Tente novamente: ");
            scanf("%f", &nota2);
        }
        
        media = (nota1 + nota2) / 2;
        printf("Media: %.2f", media);

}