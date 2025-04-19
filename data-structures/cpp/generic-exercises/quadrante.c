#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x=0, y=0;
    do{
        printf("\nDigite o valor da coordenada X: ");
        scanf("%d", &x);

        printf("\nDigite o valor da coordenada y: ");
        scanf("%d", &y);

        if(x<0 && y>0){
            printf("Quadrante Q1");
        }
        if(x>0 && y>0){
            printf("Quadrante Q2");
        }
        if(x<0 && y<0){
            printf("Quadrante Q3");
        }
        if(x>0 && y<0){
            printf("Quadrante Q4");
        }
    }while(x != 0 && y != 0);
}