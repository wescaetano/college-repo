#include <stdio.h>
#include <locale.h>

int mdc(int n1, int n2){
    if(n2 == 0){
        return n1;     
    } else {
        return mdc(n2, n1 % n2);
    }
}


int main() {
    setlocale(LC_ALL,"Portuguese");

    int n1=0, n2=0;

    printf("Digite um número: ");
    scanf("%d", &n1);
    
    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("O MDC de %d, %d é: %d", n1, n2, mdc(n1, n2));
    

}