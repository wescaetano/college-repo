#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int senhaCorreta=2002, senha=0, cont=0;

    do{
        cont++;
        if(cont == 1){
            printf("Digite a senha: ");
            scanf("%d", &senha);
        }else{
            printf("\nSenha incorreta! tente novamente: ");
            scanf("%d", &senha);
        }
    } while(senha != senhaCorreta);

    printf("Acesso permitido!");
}