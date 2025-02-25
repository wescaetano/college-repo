#include <stdio.h>
#include <locale.h>

float dividir(int n);
int somar(int n);
int subtrair(int n);
float mult(int n);


int main() {
    setlocale(LC_ALL, "Portuguese");

    int n=0;

    printf("Digite um número: ");
    scanf("%d", &n);

    int som = somar(n);
    printf("O número %d mais 25 é: %d\n", n, som);

    int sub = subtrair(som);
    printf("O número %d menos 15 é: %d\n", som, sub);

    float multi = mult(sub);
    printf("O número %d multiplicado por 3 é: %.2f\n", sub, multi);

    
    float div = dividir(multi);
    printf("O número %d dividido por 2 é: %.2f\n", multi, div);
}

int somar(int n){
    return n+25;
} 

int subtrair(int n){
    return n-15;
}

float mult(int n){
    return n*3;
}

float dividir(int n){
    return n*3;
}