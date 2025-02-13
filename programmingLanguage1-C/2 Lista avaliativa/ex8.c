#include <stdio.h>
#include <string.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int a[10], b[10], c[20];

  for(int i=0; i < 10; i++) {
    printf("\nDigite o %d° número para o vetor A: ", i + 1);
    scanf("%d", &a[i]);
    getchar();
  }

  for(int i=0; i < 10; i++) {
    printf("\nDigite o %d° número para o vetor B: ", i + 1);
    scanf("%d", &b[i]);
    getchar();
  }

  int j=0;
  for(int i=0; i < 20; i++) {
    c[j++] = a[i];
    c[j++] = b[i];
  }

  printf("\nArray intercalado: \n");
  for(int i=0; i < 20; i++) {
    printf("%d\n", c[i]);
  }
}