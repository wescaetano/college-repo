#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int primeiro=0, segundo=0;
    do{
        printf("\nDigite o primeiro número: ");
        scanf("%d", &primeiro);

        printf("\nDigite o segundo número: ");
        scanf("%d", &segundo);
        
        if(primeiro>segundo){
            printf("\nDecrescente");
        }else if(primeiro<segundo){
            printf("\nCrescente");
        }
    } while(primeiro != segundo);
}