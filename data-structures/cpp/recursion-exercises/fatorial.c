#include <stdio.h>
#include <locale.h>

int fatorial(int n) {
    if(n==0){
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int x=0;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("O resultado do fatorial é: %d", fatorial(x));
    
    return 0;
}
