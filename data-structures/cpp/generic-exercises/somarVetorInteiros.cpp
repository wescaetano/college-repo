#include <iostream>
#include <string>
#include <locale>
#define MAX 5

using namespace std;

int somarVetor(int vetor[5], int n);



int main(){
    setlocale(LC_ALL, "Portuguese");

    int vet[MAX] = {5, 4, 3, 2, 1};
    int n = MAX;    

    cout << "O array somado é: " << somarVetor(vet, n);
}

int somarVetor(int vetor[MAX], int n){
    if(n==1){
        return vetor[n-1];
    }
    return vetor[n-1] + somarVetor(vetor, n-1);
}