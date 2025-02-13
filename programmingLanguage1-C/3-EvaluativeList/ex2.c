#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int matriz[4][6], cont10e30 = 0, contMaior10 = 0, somaQuarta = 0, somaTerceira = 0, contTerceira = 0;
  float mediaTerceira = 0.0;

  // Preenchendo a matriz
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      printf("\nDigite um número [%d][%d]", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // For para realizar as operações
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {

      // Números entre 10 e 30
      if (matriz[i][j] > 10 && matriz[i][j] < 30)
      {
        cont10e30++;
      }

      // Números maiores que 10 e pares
      if (matriz[i][j] > 10 && matriz[i][j] % 2 == 0)
      {
        contMaior10++;
      }

      // Soma dos números que estão na quarta coluna
      if (j == 3)
      {
        somaQuarta += matriz[i][j];
      }

      // Media da terceira linha
      if (i == 2)
      {
        somaTerceira += matriz[i][j];
        contTerceira++;
      }
    }
  }

  if (contTerceira > 0)
  {
    mediaTerceira = (float)somaTerceira / contTerceira;
    printf("\nA media da terceira linha é de: %.1f", mediaTerceira);
  }
  printf("\nA quantidade de números entre 10 e 30 é de: %d", cont10e30);
  printf("\nA quantidade de números maiores que 10 e pares é de: %d", contMaior10);
  printf("\nA soma dos números que estão na quarta coluna é de: %d", somaQuarta);
}