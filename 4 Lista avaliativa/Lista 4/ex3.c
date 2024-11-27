#include <stdio.h>
#include <locale.h>

char letra(float nota);

int main() {
  setlocale(LC_ALL, "Portuguese");

  float nota=0.0; 

  printf("\nDigite sua nota (0-10): ");
  scanf("%f", &nota);

  printf("\nSua nota no formato alfabético é: %c", letra(nota));
}

//Função para calcular a nota do aluno em letras (A-E)
char letra(float nota){
  if(nota >= 9 && nota <= 10){
    return 'A';
  }
  if(nota >= 7 && nota < 9){
    return 'B';
  }
  if(nota >= 5 && nota < 7){
    return 'C';
  }
  if(nota >= 3 && nota < 5){
    return 'D';
  }
  if(nota >= 0 && nota < 3){
    return 'E';
  }

  return 'F';
  
}