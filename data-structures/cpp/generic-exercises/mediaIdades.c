#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float mediaIdades=0.0;
    int idade[100], cont=0, somaIdades=0;
    
    for(int i=0; i<100; i++){
        printf("\nDigite uma idade: ");
        scanf("%d", &idade[i]);
        
        if(idade[i] > 0){
            cont++;
            somaIdades += idade[i];
        }
        if(idade[i] < 1){
            break;
        }
    }

    if(cont>0){
        mediaIdades = (float)somaIdades/cont;
        printf("\nA media das idades é: %.2f", mediaIdades);
    }

}