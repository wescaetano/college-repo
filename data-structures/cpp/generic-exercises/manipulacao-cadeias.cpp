




#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

char nome[20] = " MARIA";
char sobrenome[20] = " FERNANDA";

void Cifrar()
{
    printf("Um caracter sempre esta associado a um valor");
    printf(" na tabela ASC. Assim cada valor esta associado ");
    printf(" a um numero. Desta forma posso simplismente somar");
    printf(" a posicao da tabela ASC e ver no que da. Por exemplo \n");
    char letra = 'A';
    printf("O caracter eh:  %c \n", letra);
    printf("\n vou somar mais 3 posicoes na tabela ASC \n");
    letra = letra + 3;
    printf("A letra agora eh: %c\n", letra);
    system("pause");
    system("cls");
    char letraz = 'Z';
    printf("A letra eh:  %c \n", letraz);
    printf("\n vou somar mais 2 posicoes na tabela ASC \n");
    letraz = letraz + 2;
    printf("O caracter agora eh: %c\n", letraz);
    system("pause");
    system("cls");
    printf("Voce tambem pode trabalhar com strings. Por exemplo: \n");
    char nome[6] = { "FATEC" };
    printf("o nome eh:  %s \n", nome);
    printf("\n vou somar mais 1 em cada posicao \n");
    nome[0]++;
    nome[1]++;
    nome[2]++;
    nome[3]++;
    nome[4]++;
    printf("\n A string agora eh: %s \n", nome);
    system("pause");
    system("cls");


}

void concatenacao()
{
    printf("O nome eh: ");
    printf("%s", nome);
    printf("\n");
    printf("O sobrenome eh: ");
    printf("%s", sobrenome);
    printf("\n");
    strcat(nome, sobrenome);
    //concatenou o conteudo do sobrenome para a variavel nome
    printf("A concatenacao em nome eh: %s\n", nome);
    strncat(sobrenome, nome, 5);
    //concatenou os cinco primeiros caracteres da variavel nome
    //para a variavel sobrenome
    printf("A concatenacao em nome eh: %s\n", sobrenome);
    //o erro eh de proposito qual eh o erro ?
    system("pause");
    system("cls");

}

void comparaCadeias()
{
    //este metodo compara cadeias  de caracteres atraves
    //da tabela asc. Exemplo digite a e b depois ab e ac
    printf("Informe um nome: ");
    cin >> nome;
    fflush(stdin);
    printf("Informe um sobrenome: ");
    cin >>  sobrenome;
    fflush(stdin);
    if (strcmp(nome, sobrenome) > 0)
    {
        printf("O nome eh maior que sobrenome");
    }
    else if (strcmp(nome, sobrenome) < 0)
    {
        printf("O nome eh menor que sobrenome");
    }
    else
    {
        printf("O conteudo das variaveis sao iguais ");
    }
    printf("\n");
    system("pause");
    system("cls");

}

void contaCarac()
{
    char nomecomNCarac[20];
    printf("Conta caracteres\n");
    strcpy(nome, "FATEC");
    printf("O nome copiado eh: %s\n", nome);
    //copia o termo fatec para a variavel nome
    strncpy(nomecomNCarac, "FATEC", 2);
    printf("O nomecomNCarac com 2 caracteres copiados %s\n", nomecomNCarac);
    printf("\n");
    printf("possui %d\n", strlen(nome));
    //funcao conta caracteres
    printf(" caracteres \n");
    printf(" caracteres minusculos %c\n", tolower(nome[1]));
    //funcao coloca cadeia em minusculo
    printf(" caracteres maiusculos %c\n", toupper(nome[0]));
    nomecomNCarac[8] = '\0';
    //o barra zero forca o encerramento do vetor tipo char 
    system("pause");
    system("cls");
}

void Conversao()
{
    int numInt = 0, numIntConv = 0;
    float numFloat = 0;
    double numDouble = 0;
    char recebeNumInt[10];
    numFloat = (float)5 / 2;
    numInt = (int)5 / 2;
    numDouble = (double)5 / 2;
    strcpy(recebeNumInt, "341");
    //Copia os caracteres "341" para a variavel recebeNumInt
    numIntConv = atoi(recebeNumInt);
    //Copia o conteudo da variavel recebeNumInt do tipo char
    //e usa a funcao "atoi" (ansi string para inteiro) e copia
    //para a variavel numIntConv
    numIntConv++;
    //Incrementa mais um na variavel numIntConv
    printf("O resultado da conversao do numero mais um eh: %i\n ", numIntConv);
    printf("O resultado da divisao em float  eh: %.2f\n ", numFloat);
    printf("O resultado da divisao em double eh: %.2f\n ", numDouble);
    printf("O resultado da divisao em inteiro eh: %i\n ", numInt);
    system("pause");
    system("cls");
    
}
int main()
{
    concatenacao();
    comparaCadeias();
    contaCarac();
    Conversao();
    Cifrar();
    system("pause");
    return 0;
}
